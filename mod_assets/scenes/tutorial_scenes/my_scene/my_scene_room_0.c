#include "my_scene_scene.h"


/**
 * Header Child Day (Default)
*/
#define LENGTH_MY_SCENE_ROOM_0_HEADER00_ACTORLIST 1
SceneCmd my_scene_room_0_header00[] = {
    SCENE_CMD_ROOM_SHAPE(&my_scene_room_0_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ACTOR_LIST(LENGTH_MY_SCENE_ROOM_0_HEADER00_ACTORLIST, my_scene_room_0_header00_actorList),
    SCENE_CMD_END(),
};

ActorEntry my_scene_room_0_header00_actorList[LENGTH_MY_SCENE_ROOM_0_HEADER00_ACTORLIST] = {
    // Collectable Item
    {
        /* Actor ID   */ ACTOR_EN_ITEM00,
        /* Position   */ { -350, 0, 356 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0002
    },
};

RoomShapeNormal my_scene_room_0_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(my_scene_room_0_shapeDListsEntry),
    my_scene_room_0_shapeDListsEntry,
    my_scene_room_0_shapeDListsEntry + ARRAY_COUNT(my_scene_room_0_shapeDListsEntry)
};

RoomShapeDListsEntry my_scene_room_0_shapeDListsEntry[1] = {
    { my_scene_room_0_shapeHeader_entry_0_opaque, NULL }
};

Gfx my_scene_room_0_shapeHeader_entry_0_opaque[] = {
	gsSPDisplayList(my_scene_room_0_dl_Exit_mesh_layer_Opaque),
	gsSPDisplayList(my_scene_room_0_dl_Ground_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

u64 my_scene_room_0_dl__0001B398_32x32_rgba16_rgba32[] = {
	0xd6e76bffb5bd5aff, 0x8c8439ffa5ad52ff, 0xbdce63ffdef76bff, 0xced663ffc6ce5aff, 0xd6de6bffb5bd52ff, 0xa5b552ffb5c65aff, 0x8c8c42ffa5a54aff, 0xced663ffd6e763ff, 
	0xa5b552ffadb552ff, 0x949442ffa5a54aff, 0x9c9c4aff8c9442ff, 0xadb552ffb5c652ff, 0xbdc65affadb552ff, 0xcee763ffd6f773ff, 0xcee76bffa5ad52ff, 0x9cad4affadb552ff, 
	0xdee76bffb5bd52ff, 0xadad4affbdc65aff, 0xbdd65affcee763ff, 0xcede63ffadad52ff, 0xc6ce63ffb5bd52ff, 0xadbd52ffbdd663ff, 0xadbd5affbdc65aff, 0xbdd65affcede63ff, 
	0x949c4aff9ca54aff, 0xb5bd5affb5bd5aff, 0xadb552ffbdce5aff, 0xb5c65affc6ce63ff, 0xb5bd5affadbd52ff, 0xcee763ffcee76bff, 0xcee76bffcede63ff, 0x949442ffbdc663ff, 
	0xd6e763ffc6d65aff, 0xc6ce63ffbdc65aff, 0xc6de63ffa5ad4aff, 0xadad52ffadb552ff, 0x9ca54aff949c42ff, 0x8c9442ff949c42ff, 0xbdc663ffbdce63ff, 0xa5b552ffadbd52ff, 
	0xb5c652ffb5bd52ff, 0xb5bd52ffc6d65aff, 0xc6d663ffcee763ff, 0xc6d65affbdce5aff, 0xc6d663ffdeef6bff, 0xadbd52ffa5ad52ff, 0xb5bd5affc6d663ff, 0xced663ff9c9c4aff, 
	0xdee76bffbdc65aff, 0xb5bd5affd6e76bff, 0xcee76bffa5ad4aff, 0x949c4affbdc65aff, 0xa5b552ff9cad4aff, 0xa5ad52ffa5a54aff, 0x9ca54affb5ce5aff, 0xb5c65aff8c9442ff, 
	0xbdc65affadad52ff, 0x9ca54affbdce5aff, 0xbdce5affadb552ff, 0x9c9c4affc6d65aff, 0xbdd65affc6d663ff, 0xb5bd52ffadb54aff, 0xa5ad52ffc6ce63ff, 0xcede6bff9cad52ff, 
	0x9ca54aff9ca54aff, 0x9cad52ffb5c65aff, 0x949c4aff949442ff, 0x7b7b39ff8c9442ff, 0x8c9c42ff949c4aff, 0xadb55affadb552ff, 0xa5ad4affadb552ff, 0x848439ff9c9c4aff, 
	0xbdc65affd6e76bff, 0xc6d663ffcede63ff, 0xdeef6bffbdc65aff, 0xb5bd52ffc6d663ff, 0xadc652ffadbd52ff, 0xadb552ff949442ff, 0x949442ffadb552ff, 0xbdce5affb5c65aff, 
	0x949442ff9c9c4aff, 0xa5ad52ffb5c65aff, 0x8c8442ff7b7b39ff, 0x949c4affa5b54aff, 0x8c9442ff9c9c4aff, 0xbdc65affadbd5aff, 0xadbd5aff9cad4aff, 0x7b7b39ff949442ff, 
	0xbdc65afff7ff7bff, 0xc6d663ffbdc65aff, 0xd6e76bffe7ef73ff, 0xc6de63ffbdd65aff, 0xe7ff73ffc6d663ff, 0xc6ce5affadb552ff, 0x949442ffadbd52ff, 0xdef773ffc6d65aff, 
	0xa5ad4aff949c42ff, 0xadb552ffc6ce63ff, 0xb5bd52ff9c9c4aff, 0xadbd52ff9ca54aff, 0x8c8c42ffadad52ff, 0xcede6bffa5b552ff, 0xb5c65affc6d663ff, 0xadad52ffadad4aff, 
	0xbdce5affbdce5aff, 0x9cad4aff9ca54aff, 0xb5bd5affa5b552ff, 0xa5ad52ffa5ad52ff, 0xa5b552ffadb552ff, 0xadb552ffadbd52ff, 0xa5b552ff949c4aff, 0xb5bd5aff9ca54aff, 
	0x949c42ff949442ff, 0xbdc65affc6ce63ff, 0xadbd5affbdce5aff, 0xbdd65affa5b552ff, 0x949442ffadbd52ff, 0xbdce63ff849442ff, 0x9ca54affbdc65aff, 0xbdc65affa5ad4aff, 
	0xb5bd52ffbdce5aff, 0xbdc65aff9c9c4aff, 0xa5ad4affa5ad4aff, 0xbdce5affd6ef63ff, 0xcee763ffadb552ff, 0xa5ad4affa5ad4aff, 0xbdce5aff8c9c42ff, 0x949c42ff8c9442ff, 
	0xadb552ff8c8c42ff, 0x9ca54affadbd52ff, 0xcee76bffc6de63ff, 0xb5c652ffadb552ff, 0xadb552ffa5b552ff, 0x8ca542ff94ad4aff, 0xb5c65affadb55aff, 0xc6d663ffdef773ff, 
	0xd6e76bffb5c65aff, 0xc6ce63ffb5b55aff, 0x949442ffcede63ff, 0x94a542ffbdc65aff, 0xadad52ff848c42ff, 0xa5ad4aff94a54aff, 0xadbd52ff949c42ff, 0xb5bd52ffc6d65aff, 
	0xbdc65affa5ad4aff, 0xbdce5affb5c65aff, 0xbdd663ffb5bd5aff, 0x9ca54affb5bd52ff, 0xced663ffb5c65aff, 0xa5bd52ffa5ad52ff, 0xc6d663ffc6ce6bff, 0xbdce63ffbdd663ff, 
	0xb5c652ffb5bd52ff, 0xadad4affa5b552ff, 0xc6de63ffadbd52ff, 0xadbd52ffd6ef6bff, 0x8c8c42ff848439ff, 0x849439ff949c4aff, 0x949c42ffadbd52ff, 0xced65affe7f773ff, 
	0xcede5affdee76bff, 0xe7ff73ffbdd65aff, 0xb5bd52ff848c39ff, 0x848439ffa5a54aff, 0xadbd52ffa5ad52ff, 0xa5b552ffadad52ff, 0xb5bd5affbdce63ff, 0xb5c663ffa5ad52ff, 
	0xb5c65affbdce63ff, 0x949442ffb5c652ff, 0xa5bd4aff8c9439ff, 0xbdc65affd6ef6bff, 0xadb552ffe7ff73ff, 0xadbd52ff9ca54aff, 0x7b8439ffadad52ff, 0xdee76bffcede63ff, 
	0xd6e76bffe7ff73ff, 0xefff73ffc6d663ff, 0xadbd52ffadb552ff, 0x9ca54aff848439ff, 0x8c9442ffa5b552ff, 0xb5b55affadb552ff, 0x9ca54affa5b552ff, 0xa5b552ff9ca54aff, 
	0xadad52ffcede63ff, 0xa5b552ffb5c65aff, 0xa5b54affc6d663ff, 0xc6de63ff949c42ff, 0xb5c652ffe7ff73ff, 0xd6e76bffbdc65aff, 0x949442ffb5bd52ff, 0xbdc65affa5ad52ff, 
	0xc6ce5affe7f76bff, 0xcede63ff9ca54aff, 0xa5ad4affced663ff, 0xc6ce5affa5ad4aff, 0x8c9c42ffcee76bff, 0xd6e76bffb5bd5aff, 0x9ca552ffadbd5aff, 0xadb55affa5a552ff, 
	0x9ca54affa5ad52ff, 0x9cad52ff94a54aff, 0xbdd663ffcee76bff, 0xadbd52ffadad52ff, 0xadb552ffa5ad52ff, 0xadb552ffbdce63ff, 0xb5bd5affa5a54aff, 0x949c42ff949c42ff, 
	0xcede63ffcee763ff, 0xa5ad4aff949442ff, 0x9ca54affbdce5aff, 0xefff73ffadb54aff, 0xa5ad4affcede63ff, 0xcede6bffb5bd5aff, 0x8c944aff9cad52ff, 0x9ca54aff8c8c42ff, 
	0x848c42ff94a54aff, 0x8c9442ff848c39ff, 0xadbd52ffb5c65aff, 0xb5c65affadad4aff, 0xdee76bffbdc65aff, 0xbdce63ffcede63ff, 0xbdce5aff94a54aff, 0xadbd52ffb5bd52ff, 
	0xdef76bffbdd65aff, 0xb5bd52ff9c9c42ff, 0x8c8c39ffadbd52ff, 0xf7ff7bffced663ff, 0xb5bd52ffbdce5aff, 0xbdc65aff949442ff, 0x8c9442ff949c4aff, 0x9ca552ff848c42ff, 
	0x848c42ff8c9442ff, 0x949c4aff94a54aff, 0x9cad4affadb552ff, 0xc6ce63ffc6c65aff, 0xcede63ffe7ef6bff, 0xdef76bffb5ce5aff, 0x9cad4affa5b552ff, 0xd6e76bffd6e76bff, 
	0xdef76bffd6e76bff, 0xd6e763ff9ca54aff, 0x9ca54affc6de63ff, 0xe7f773ffced663ff, 0xefff73ffcede63ff, 0xb5bd52ff9ca54aff, 0x9ca54affadb552ff, 0x9ca552ff949c4aff, 
	0x94a54aff8c9c4aff, 0x8c9442ff848439ff, 0x949442ffbdc663ff, 0xced66bffb5bd52ff, 0xdee76bfff7ff7bff, 0xefff7bffcede63ff, 0xbdce5affbdce5aff, 0xadb552ffc6d663ff, 
	0xc6ce5affbdc65aff, 0xbdc65aff9ca54aff, 0xadbd52ffe7ff73ff, 0xd6ef6bffced663ff, 0xd6e763ffb5c65aff, 0xd6e763ffbdce5aff, 0xadad4affd6de6bff, 0x8c8c42ff949442ff, 
	0x949c4affa5b552ff, 0x9ca54aff848439ff, 0x9c9c4aff9c9c4aff, 0xbdd663ffbdc65aff, 0xadb552ffd6e76bff, 0xd6e76bffbdc65aff, 0xcede63ffdeef6bff, 0xd6de63ffdee76bff, 
	0xbdce5affadb552ff, 0xa5ad4affbdce5aff, 0xd6ef63ffcee763ff, 0xadb552ffa5ad4aff, 0xadbd52ffc6d663ff, 0xd6e76bffa5a54aff, 0x8c8439ffadad52ff, 0xb5bd52ff9cad52ff, 
	0x9cad52ffadbd5aff, 0xadad5aff94944aff, 0xa5ad4aff9cad52ff, 0xa5b552ffadbd52ff, 0xbdce5affced663ff, 0xa5ad4affbdc65aff, 0xdeef73ffb5bd5aff, 0xb5bd52ffb5bd52ff, 
	0xbdce5affcede63ff, 0xcede63ff94a542ff, 0xbdc65affadad52ff, 0x847b39ffa5ad4aff, 0xc6d663ffd6e76bff, 0xced663ff9c9c42ff, 0xb5bd52ff9ca542ff, 0xbdc652ffc6ce63ff, 
	0xadbd5affadb55aff, 0x9ca552ff848c42ff, 0xbdd663ffcee76bff, 0xa5b552ffb5c65aff, 0xbdce63ffdeef73ff, 0xbdbd52ffbdc65aff, 0xc6ce63ff8c8c39ff, 0xa5ad4affadbd52ff, 
	0x848439ff848c39ff, 0x9cad4affadb552ff, 0xb5bd52ff8c8c42ff, 0x848439ffbdce5aff, 0xc6de63ffb5c652ff, 0xadb54affadad52ff, 0x7b7331ffadb552ff, 0xc6ce5affa5ad52ff, 
	0xadbd5affa5b55aff, 0x949c4affa5b552ff, 0xbdd663ffa5bd52ff, 0x9c9c4affadb55aff, 0x949c4aff8c8c42ff, 0x9c9c42ffa5ad52ff, 0xadbd52ffadbd52ff, 0x9ca54affa5b552ff, 
	0x8c9442ff848439ff, 0xa5ad4affd6e763ff, 0xdeef6bffadb552ff, 0xb5bd52ffdef773ff, 0xd6e76bffcede63ff, 0xa5a54aff949442ff, 0x949442ffadb552ff, 0xe7ef6bffadb552ff, 
	0x7b7b39ff8c9c42ff, 0x949c4affbdce63ff, 0xcee773ffadbd5aff, 0x7b7b39ff9ca54aff, 0x9ca54aff8c8c42ff, 0x9ca54affbdc65aff, 0xbdce5affadbd52ff, 0xcee76bffadbd52ff, 
	0x8c9439ff848c39ff, 0x8c8c42ffbdce5aff, 0xd6e763ffdeef73ff, 0xbdce5affc6de63ff, 0xf7ff7bfff7ff7bff, 0xadb552ffa5a54aff, 0xa5ad4affd6e763ff, 0xced663ff9cad42ff, 
	0x8c9442ff9ca54aff, 0xa5b552ffb5c65aff, 0xcede6bffc6d663ff, 0xadb552ffadbd52ff, 0xbdc65affa5b552ff, 0x949c42ff9cad4aff, 0x8c9c42ff9ca54aff, 0x8c9442ff9c9c4aff, 
	0x8c9442ff737331ff, 0x9ca54affb5bd5aff, 0xb5c65affadc652ff, 0xc6de63ffefff7bff, 0xd6e763ffbdce5aff, 0xd6de6bffdee76bff, 0xe7f76bfff7ff7bff, 0xcede63ffd6e763ff, 
	0xc6d663ffc6d663ff, 0xcede63ffb5c65aff, 0xadb552ff9c9c4aff, 0x9c9c4affbdc65aff, 0xb5c65affc6de63ff, 0xbdce63ffa5bd52ff, 0x949c4aff949c4aff, 0x94944aff949c4aff, 
	0x9ca54aff9ca54aff, 0xa5a54affc6d663ff, 0xbdce63ffbdc65aff, 0xced663ffd6e76bff, 0xbdc65affc6ce63ff, 0xbdce5affcee763ff, 0xdeef6bffadbd52ff, 0xa5b552ffc6d663ff, 
	0xb5c65affdeef6bff, 0xcede63ffb5bd5aff, 0x9ca54aff8c9442ff, 0x9c9c4affadb552ff, 0xa5b552ffbdd663ff, 0xa5b552ffa5b552ff, 0xb5bd5aff949442ff, 0xa5ad52ffa5a552ff, 
	0xa5a54affa5a54aff, 0xa5a54affadbd52ff, 0xbdce5affe7f773ff, 0xc6ce63ff949442ff, 0xb5bd5affb5bd5aff, 0xb5bd52ffe7ff6bff, 0xdef76bffc6d65aff, 0xbdc65aff9c9c42ff, 
	0x7b7b31ffdeef73ff, 0xdeef6bffb5bd5aff, 0xb5bd5affb5c663ff, 0xb5c65affa5b552ff, 0xa5b54aff94a54aff, 0x949c4aff9cad4aff, 0xb5bd5affbdc65aff, 0xa5a54affadad52ff, 
	0xa59c4affb5bd52ff, 0xadb54affadb552ff, 0xd6e76bffc6d663ff, 0xbdce5aff949c42ff, 0x8c9442ff949c4aff, 0x9ca54affbdce5aff, 0xd6e763ffe7f76bff, 0xadb552ff8c8c39ff, 
	0xadb552ffd6de6bff, 0xc6d663ffb5bd5aff, 0x9ca54affadbd52ff, 0xadbd5affa5b54aff, 0xbdce5affc6d663ff, 0xa5ad4affa5ad52ff, 0xa5a54affbdce5aff, 0xb5c65aff8c9442ff, 
	0xb5c65affadb552ff, 0xb5bd52ffbdc65aff, 0xbdce5aff9ca54aff, 0xbdbd5affd6e763ff, 0x9ca54aff9ca54aff, 0xadb552ffb5bd5aff, 0xc6d65affe7f76bff, 0xdee76bffadb552ff, 
	0xadad52ffb5bd5aff, 0xbdc65affa5b552ff, 0x94a54aff9cad4aff, 0x9cad4affcede63ff, 0xd6e76bffced663ff, 0xd6de6bffd6de6bff, 0x949c4affadbd52ff, 0xe7ff73ff9cad4aff, 
	0xadb552ff8c8c39ff, 0xa5b54affa5ad4aff, 0x8c9442ffa5a54aff, 0x949c42ffa5b54aff, 0xbdc65affadb552ff, 0xc6d663ffcede63ff, 0xa5a54affd6de63ff, 0xcede63ffbdc65aff, 
	0xa5b552ffadbd52ff, 0xb5c65affa5b54aff, 0xadc652ffc6d663ff, 0xb5c65affb5c65aff, 0x9c9c4affadb552ff, 0xb5c652ffadbd52ff, 0x9cad4affb5c65aff, 0x9ca54aff94a54aff, 
	0xadb552ffadb552ff, 0xb5bd52ff9cad52ff, 0x8c8c42ff8c9442ff, 0x9ca54affc6de63ff, 0xa5b54aff7b7b31ff, 0xbdce5affc6ce63ff, 0xbdb55affc6c663ff, 0xadb552ffd6e76bff, 
	0xa5b552ffdef773ff, 0xdef773ffd6ef6bff, 0xbdd663ffbdce5aff, 0xe7f773ffb5bd52ff, 0x9ca54affadbd52ff, 0xb5bd52ffadbd52ff, 0xbdce5affadb552ff, 0x949442ff9ca54aff, 
	0xa5ad52ffadbd52ff, 0xadbd52ffadbd5aff, 0xadbd5aff8c9442ff, 0x9cad52ffb5c65aff, 0x949442ff7b7b31ff, 0xadb552ffa5ad4aff, 0xb5c65affadb552ff, 0xc6d663ffd6ef6bff, 
	0xd6ef6bffdeef6bff, 0xbdce5affc6ce5aff, 0xc6ce5affe7ef73ff, 0xf7ff7bffc6ce63ff, 0xbdce5affc6e76bff, 0xcede63ffbdce5aff, 0xb5bd5aff8c9442ff, 0x9ca54aff9c9c4aff, 
	0x949c4aff9cad4aff, 0xbdce63ffb5c65aff, 0xa5ad4aff94a54aff, 0x949c4aff9ca54aff, 0x7b7331ff9c9c42ff, 0xc6ce5aff9cad4aff, 0xb5c652ffc6e763ff, 0xd6f76bffd6e76bff, 
	0xc6d65affb5c65aff, 0xc6d663ffbdc65aff, 0xc6d663ffced663ff, 0xe7ef73ffd6e76bff, 0xc6de63ffc6de63ff, 0xbdd663ffb5bd52ff, 0xb5bd5aff949442ff, 0xadad52ffc6d663ff, 
	0x848c39ff8c9442ff, 0xb5c65affa5b552ff, 0xbdc65affcede63ff, 0xc6d66bffa5ad4aff, 0x8c8c39ff9ca54aff, 0xb5c65aff9ca542ff, 0x848c39ffb5ce5aff, 0xefff73ffe7ff73ff, 
	0xc6d65affa5a54aff, 0xb5b55affbdbd5aff, 0xa5ad4affb5bd5aff, 0xbdd65aff949c42ff, 0x94a54aff9cad4aff, 0xbdce63ffcede6bff, 0xc6d663ffa5ad4aff, 0xa5b54affbdce5aff, 
	
};

Vtx my_scene_room_0_dl_Exit_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-316, 0, 316}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-316, 0, 316}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-316, 0, -316}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-316, 0, -316}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {316, 0, 316}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {316, 0, 316}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {316, 0, -316}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {316, 0, -316}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx my_scene_room_0_dl_Exit_mesh_layer_Opaque_vtx_0[4] = {
	{{ {-316, 0, 316}, 0, {310, 682}, {0, 127, 0, 255} }},
	{{ {316, 0, 316}, 0, {682, 682}, {0, 127, 0, 255} }},
	{{ {316, 0, -316}, 0, {682, 310}, {0, 127, 0, 255} }},
	{{ {-316, 0, -316}, 0, {310, 310}, {0, 127, 0, 255} }},
};

Gfx my_scene_room_0_dl_Exit_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(my_scene_room_0_dl_Exit_mesh_layer_Opaque_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx my_scene_room_0_dl_Ground_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-1239, 0, 1239}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1239, 0, 1239}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1239, 0, -1239}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1239, 0, -1239}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1239, 0, 1239}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1239, 0, 1239}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1239, 0, -1239}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1239, 0, -1239}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx my_scene_room_0_dl_Ground_mesh_layer_Opaque_vtx_0[8] = {
	{{ {-316, 0, 316}, 0, {-1212, 2204}, {0, 127, 0, 255} }},
	{{ {-316, 0, -316}, 0, {-1212, -1212}, {0, 127, 0, 255} }},
	{{ {-1239, 0, -1239}, 0, {-6199, -6199}, {0, 127, 0, 255} }},
	{{ {1239, 0, -1239}, 0, {7191, -6199}, {0, 127, 0, 255} }},
	{{ {316, 0, -316}, 0, {2204, -1212}, {0, 127, 0, 255} }},
	{{ {1239, 0, 1239}, 0, {7191, 7191}, {0, 127, 0, 255} }},
	{{ {316, 0, 316}, 0, {2204, 2204}, {0, 127, 0, 255} }},
	{{ {-1239, 0, 1239}, 0, {-6199, 7191}, {0, 127, 0, 255} }},
};

Gfx my_scene_room_0_dl_Ground_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(my_scene_room_0_dl_Ground_mesh_layer_Opaque_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(1, 4, 3, 0, 4, 5, 3, 0),
	gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
	gsSP2Triangles(6, 0, 7, 0, 0, 2, 7, 0),
	gsSPEndDisplayList(),
};

Gfx mat_my_scene_room_0_dl_f3dlite_material_315_layerOpaque[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 0, 255, 255),
	gsSPEndDisplayList(),
};

Gfx mat_my_scene_room_0_dl_f3dlite_material_314_layerOpaque[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b_LOAD_BLOCK, 1, my_scene_room_0_dl__0001B398_32x32_rgba16_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx my_scene_room_0_dl_Exit_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(my_scene_room_0_dl_Exit_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_my_scene_room_0_dl_f3dlite_material_315_layerOpaque),
	gsSPDisplayList(my_scene_room_0_dl_Exit_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

Gfx my_scene_room_0_dl_Ground_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(my_scene_room_0_dl_Ground_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_my_scene_room_0_dl_f3dlite_material_314_layerOpaque),
	gsSPDisplayList(my_scene_room_0_dl_Ground_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

