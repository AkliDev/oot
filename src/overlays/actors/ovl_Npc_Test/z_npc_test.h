#ifndef Z_NPC_TEST_H
#define Z_NPC_TEST_H

#include "ultra64.h"
#include "global.h"

#include "src/overlays/actors/ovl_Demo_Im/z_demo_im.h"

struct NpcTest;

typedef void (*NpcTestActionFunc)(struct NpcTest*, PlayState*);

typedef struct NpcTest {
    Actor actor;
    SkelAnime skelAnime;
    Vec3s jointTable[IMPA_LIMB_MAX];
    Vec3s morphTable[IMPA_LIMB_MAX];
    NpcTestActionFunc actionFunc;
    NpcInteractInfo interactInfo;
    ColliderCylinder collider;
} NpcTest; 

#endif