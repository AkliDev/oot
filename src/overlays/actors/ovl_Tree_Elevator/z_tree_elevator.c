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

void TreeElevator_SpawnDust(TreeElevator* thisx, PlayState* play);

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
    ((TreeElevator*)thisx)->actor.world.pos.y += 10.0f;
}

void TreeEvator_Destroy(Actor* thisx, PlayState* play){
    
}

void TreeEvator_Update(Actor* thisx, PlayState* play){
    TreeElevator* this = (TreeElevator*)thisx;
    TreeElevator_SpawnDust(this, play);
}

void TreeEvator_Draw(Actor* thisx, PlayState* play){
    Gfx_DrawDListOpa(play, gTreeElevatorDL);
}

void TreeElevator_SpawnDust(TreeElevator* thisx, PlayState* play){
    Color_RGBA8 primColor = {255,255,255,255};
    Color_RGBA8 envColor = {255,255,255,255};
    
    Vec3f pos = thisx->actor.world.pos;
    Vec3f velocity = {0.0f, 1.0f, 0.0f};
    Vec3f accel = {0.0f, 0.0f, 0.0f};
    s16 scale = 10;
    s16 scaleStep = 10;
    s16 life = 40;

    EffectSsDust_Spawn(play, 0, &pos, &velocity, &accel, &primColor, &envColor, scale, scaleStep, life, 0);
}