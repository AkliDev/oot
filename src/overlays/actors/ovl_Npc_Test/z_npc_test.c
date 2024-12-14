/*
 * File: z_npc_test.c
 * Overlay: ovl_Npc_Test
 * Description: A test for making NPCs
 */

#include "z_npc_test.h"
#include "assets/objects/object_im/object_im.h"

#define FLAGS (ACTOR_FLAG_ATTENTION_ENABLED | ACTOR_FLAG_FRIENDLY | ACTOR_FLAG_4 | ACTOR_FLAG_5)

void NpcTest_Init(Actor* thisx, PlayState* play);
void NpcTest_Destroy(Actor* thisx, PlayState* play);
void NpcTest_Update(Actor* thisx, PlayState* play);
void NpcTest_Draw(Actor* thisx, PlayState* play);

void NpcTest_InitCollider(Actor* thisx, PlayState* play);
void NpcTest_UpdateCollider(NpcTest* this, PlayState* play);

void NpcTest_DrawSolid(NpcTest* this, PlayState* play);
s32 NpcTest_OverrideLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, void* thisx);
void NpcTest_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx);

void NpcTest_UpdateBgCheckInfo(NpcTest* this, PlayState* play);

u16 NpcTest_GetNextTextId(PlayState* play, Actor* thisx);
s16 NpcTest_UpdateTalkState(PlayState* play, Actor* thisx);

static ColliderCylinderInitType1 sCylinderInit = {
    {
        COL_MATERIAL_HIT0,
        AT_NONE,
        AC_NONE,
        OC1_ON | OC1_TYPE_PLAYER,
        COLSHAPE_CYLINDER,
    },
    { 0x00, { 0x00000000, 0x00, 0x00 }, { 0x00000000, 0x00, 0x00 }, 0x00, 0x00, 0x01 },
    { 25, 80, 0, { 0, 0, 0 } },
};

typedef enum {
    NPC_MESSAGE_COME_BACK_LATER = 0x71B3,
    NPC_MESSAGE_COME_BACK_WAY_LATER = 0x71B4,
    NPC_MESSAGE_DO_YOU_LIKE_TUTORIALS = 0x71B5,
    NPC_MESSAGE_CHOICE_LOVE_EM = 0x71B6,
    NPC_MESSAGE_CHOICE_ABSOLUTELY = 0x71B7,
} NpcTestMeddageId;

ActorProfile Npc_Test_Profile = {
    ACTOR_NPC_TEST,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_IM,
    sizeof(NpcTest),
    (ActorFunc)NpcTest_Init,
    (ActorFunc)NpcTest_Destroy,
    (ActorFunc)NpcTest_Update,
    (ActorFunc)NpcTest_Draw,
};

void NpcTest_Init(Actor* thisx, PlayState* play){
    NpcTest* this = (NpcTest*)thisx;

    ActorShape_Init(&this->actor.shape, 0.0f, ActorShadow_DrawCircle, 30.0f);
    SkelAnime_InitFlex(play, &this->skelAnime, &gImpaSkel, NULL, this->jointTable, this->morphTable, IMPA_LIMB_MAX);
    Animation_Change(&this->skelAnime, &gImpaIdleAnim, 1.0f, 0.0f, Animation_GetLastFrame(&gImpaIdleAnim), ANIMMODE_LOOP, 0.0f);

    NpcTest_UpdateBgCheckInfo(this, play);
    NpcTest_InitCollider(thisx, play);
}

void NpcTest_Destroy(Actor* thisx, PlayState* play){
    NpcTest* this = (NpcTest*)thisx;

    Collider_DestroyCylinder(play, &this->collider);
}

void NpcTest_Update(Actor* thisx, PlayState* play){
    NpcTest* this = (NpcTest*)thisx;
    Player* player = GET_PLAYER(play);

    SkelAnime_Update(&this->skelAnime);
    this->interactInfo.trackPos = player->actor.world.pos;
    Npc_TrackPoint(&this->actor, &this->interactInfo, 0xC, NPC_TRACKING_HEAD_AND_TORSO);
    Npc_UpdateTalking(
        play,
        &this->actor,
        &this->interactInfo.talkState,
        50.0f,
        NpcTest_GetNextTextId,
        NpcTest_UpdateTalkState
    );

     NpcTest_UpdateCollider(this, play);
}

void NpcTest_Draw(Actor* thisx, PlayState* play){
    NpcTest* this = (NpcTest*)thisx;

    NpcTest_DrawSolid(this, play);  
}


void NpcTest_InitCollider(Actor* thisx, PlayState* play) {
    NpcTest* this = (NpcTest*)thisx;

    Collider_InitCylinder(play, &this->collider);
    Collider_SetCylinderType1(play, &this->collider, &this->actor, &sCylinderInit);
}

void NpcTest_UpdateCollider(NpcTest* this, PlayState* play) {
    //s32 pad[5];

    Collider_UpdateCylinder(&this->actor, &this->collider);
    CollisionCheck_SetOC(play, &play->colChkCtx, &this->collider.base);
}

void NpcTest_DrawSolid(NpcTest* this, PlayState* play) {
    //s32 pad[2];
    //s16 eyeIndex = this->eyeIndex;
    //void* eyeTexture = sEyeTextures[eyeIndex];
    SkelAnime* skelAnime = &this->skelAnime;

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);

    Gfx_SetupDL_25Opa(play->state.gfxCtx);

    gSPSegment(POLY_OPA_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(gImpaEyeOpenTex));//TODO: FIX BLINKING
    gSPSegment(POLY_OPA_DISP++, 0x09, SEGMENTED_TO_VIRTUAL(gImpaEyeOpenTex));
    gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 0, 255);
    //gSPSegment(POLY_OPA_DISP++, 0x0C, &D_80116280[2]);

    SkelAnime_DrawFlexOpa(play, skelAnime->skeleton, skelAnime->jointTable, skelAnime->dListCount,
                          NpcTest_OverrideLimbDraw, NpcTest_PostLimbDraw, this);

    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}

s32 NpcTest_OverrideLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, void* thisx) {
    NpcTest* this = (NpcTest*)thisx;
    //s32* unk_2D0 = &this->unk_2D0;

    //if (this->unk_280 != 0) {
        Vec3s* torsoRot = &this->interactInfo.torsoRot;
        Vec3s* headRot = &this->interactInfo.headRot;
        switch (limbIndex) {
            case IMPA_LIMB_CHEST:
                rot->x += torsoRot->y;
                rot->y -= torsoRot->x;
                break;
            case IMPA_LIMB_HEAD:
                rot->x += headRot->y;
                rot->z += headRot->x;
                break;
        }
    //}

    //if ((*unk_2D0 != 0) && (limbIndex == IMPA_LIMB_RIGHT_HAND)) {
    //    *dList = gImpaHandPointingDL;
    //}

    return false;
}

void NpcTest_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx) {
    NpcTest* this = (NpcTest*)thisx;

    static Vec3f D_809887D8 = { 0.0f, 10.0f, 0.0f };

    if (limbIndex == IMPA_LIMB_HEAD) {
        Vec3f sp28 = D_809887D8;
        Vec3f dest;

        Matrix_MultVec3f(&sp28, &dest);
        this->actor.focus.pos.x = dest.x;
        this->actor.focus.pos.y = dest.y;
        this->actor.focus.pos.z = dest.z;
        this->actor.focus.rot.x = this->actor.world.rot.x;
        this->actor.focus.rot.y = this->actor.world.rot.y;
        this->actor.focus.rot.z = this->actor.world.rot.z;
    }
}

void NpcTest_UpdateBgCheckInfo(NpcTest* this, PlayState* play) {
    Actor_UpdateBgCheckInfo(play, &this->actor, 75.0f, 30.0f, 30.0f, UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_2);
}

u16 NpcTest_GetNextTextId(PlayState* play, Actor* thisx){
    if(LINK_IS_ADULT){
        return NPC_MESSAGE_DO_YOU_LIKE_TUTORIALS;
    } else {
        if(GET_INFTABLE(INFTABLE_E0)){
            return NPC_MESSAGE_COME_BACK_WAY_LATER;
        } else {
            return NPC_MESSAGE_COME_BACK_LATER;
        }   
    }
    
}

s16 NpcTest_UpdateTalkState(PlayState* play, Actor* thisx){
    s16 talkState = NPC_TALK_STATE_TALKING;
    
    switch (Message_GetState(&play->msgCtx)){
        case TEXT_STATE_CHOICE:
            if (Message_ShouldAdvance(play)){
                if(play->msgCtx.choiceIndex == 0){
                    thisx->textId = NPC_MESSAGE_CHOICE_LOVE_EM;
                } else if (play->msgCtx.choiceIndex == 1){
                    thisx->textId = NPC_MESSAGE_CHOICE_ABSOLUTELY;
                }        
                Message_ContinueTextbox(play, thisx->textId);
            }
            break;

        case TEXT_STATE_DONE:
            if (thisx->textId == NPC_MESSAGE_COME_BACK_LATER){
                SET_INFTABLE(INFTABLE_E0);
            }
            talkState = NPC_TALK_STATE_IDLE;
            break;
    }

    return talkState;
}