/*
 * File: z_tree_elevator.c
 * Overlay: ovl_Tree_Elevator
 * Description: Switch-controlled elevator that looks like a tree
 */

#include "z_tree_elevator.h"

#include "assets/objects/object_tree_elevator/gTreeElevatorDL.h"
#include "assets/objects/object_tree_elevator/gTreeElevatorDL_collision.h"

#define FLAGS (ACTOR_FLAG_4 | ACTOR_FLAG_5)

void TreeEvator_Init(Actor* thisx, PlayState* play);
void TreeEvator_Destroy(Actor* thisx, PlayState* play);
void TreeEvator_Update(Actor* thisx, PlayState* play);
void TreeEvator_Draw(Actor* thisx, PlayState* play);

void TreeElevator_SpawnDust(TreeElevator* this, PlayState* play);

void TreeElevator_SetupWaitForSwith(TreeElevator* this, PlayState* play);
void TreeElevator_WaitForSwitch(TreeElevator* this, PlayState* play);

ActorProfile Tree_Elevator_Profile = {
    ACTOR_TREE_ELEVATOR,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_TREE_ELEVATOR,
    sizeof(TreeElevator),
    (ActorFunc)TreeEvator_Init,
    (ActorFunc)TreeEvator_Destroy,
    (ActorFunc)TreeEvator_Update,
    (ActorFunc)TreeEvator_Draw,
};

void TreeEvator_Init(Actor* thisx, PlayState* play){
    TreeElevator* this = (TreeElevator*)thisx;
    this->dyna.actor.world.pos.y += 10.0f;

    CollisionHeader* colHeader = NULL;
    CollisionHeader_GetVirtual(&gTreeElevatorDL_collisionHeader, &colHeader);

    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, colHeader);

    TreeElevator_SetupWaitForSwith(this, play);

    Debug_Print(4, "Init: my id is: %d", this->dyna.bgId);
}

void TreeEvator_Destroy(Actor* thisx, PlayState* play){
    TreeElevator* this = (TreeElevator*)thisx;

    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);

}

void TreeEvator_Update(Actor* thisx, PlayState* play){
    TreeElevator* this = (TreeElevator*)thisx;
    Debug_Print(0, "Hello from update");
    this->actionFunc(this, play);
}

void TreeEvator_Draw(Actor* thisx, PlayState* play){
    TreeElevator* this = (TreeElevator*)thisx;
    Gfx_DrawDListOpa(play, gTreeElevatorDL);
}

void TreeElevator_SpawnDust(TreeElevator* this, PlayState* play){

    Color_RGBA8 primColor = {255,255,255,255};
    Color_RGBA8 envColor = {255,255,255,255};
    
    Vec3f pos = this->dyna.actor.world.pos;
    Vec3f velocity = {0.0f, 1.0f, 0.0f};
    Vec3f accel = {0.0f, 0.0f, 0.0f};
    s16 scale = 10;
    s16 scaleStep = 10;
    s16 life = 40;

    EffectSsDust_Spawn(play, 0, &pos, &velocity, &accel, &primColor, &envColor, scale, scaleStep, life, 0);
}

void TreeElevator_SetupWaitForSwith(TreeElevator* this, PlayState* play){
    this->actionFunc = TreeElevator_WaitForSwitch;
}

void TreeElevator_WaitForSwitch(TreeElevator* this, PlayState* play){
    Debug_Print(1, "current frame %u", play->gameplayFrames);
    TreeElevator_SpawnDust(this, play);
}
