#include "my_dungeon_scene.h"


/**
 * Header Child Day (Default)
*/
#define LENGTH_MY_DUNGEON_ROOM_1_HEADER00_OBJECTLIST 3
#define LENGTH_MY_DUNGEON_ROOM_1_HEADER00_ACTORLIST 5
SceneCmd my_dungeon_room_1_header00[] = {
    SCENE_CMD_ROOM_SHAPE(&my_dungeon_room_1_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_OBJECT_LIST(LENGTH_MY_DUNGEON_ROOM_1_HEADER00_OBJECTLIST, my_dungeon_room_1_header00_objectList),
    SCENE_CMD_ACTOR_LIST(LENGTH_MY_DUNGEON_ROOM_1_HEADER00_ACTORLIST, my_dungeon_room_1_header00_actorList),
    SCENE_CMD_END(),
};

s16 my_dungeon_room_1_header00_objectList[LENGTH_MY_DUNGEON_ROOM_1_HEADER00_OBJECTLIST] = {
    OBJECT_BOX,
    OBJECT_FIREFLY,
    OBJECT_ZF,
};

ActorEntry my_dungeon_room_1_header00_actorList[LENGTH_MY_DUNGEON_ROOM_1_HEADER00_ACTORLIST] = {
    // Treasure Chest
    {
        /* Actor ID   */ ACTOR_EN_BOX,
        /* Position   */ { -898, -120, 201 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x7840
    },

    // Keese
    {
        /* Actor ID   */ ACTOR_EN_FIREFLY,
        /* Position   */ { -880, 82, -161 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0002
    },

    // Keese
    {
        /* Actor ID   */ ACTOR_EN_FIREFLY,
        /* Position   */ { -731, -120, 251 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0002
    },

    // Keese
    {
        /* Actor ID   */ ACTOR_EN_FIREFLY,
        /* Position   */ { -893, -120, -261 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0002
    },

    // Lizalfos
    {
        /* Actor ID   */ ACTOR_EN_ZF,
        /* Position   */ { -633, -120, 43 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x00FF
    },
};

RoomShapeNormal my_dungeon_room_1_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(my_dungeon_room_1_shapeDListsEntry),
    my_dungeon_room_1_shapeDListsEntry,
    my_dungeon_room_1_shapeDListsEntry + ARRAY_COUNT(my_dungeon_room_1_shapeDListsEntry)
};

RoomShapeDListsEntry my_dungeon_room_1_shapeDListsEntry[1] = {
    { my_dungeon_room_1_shapeHeader_entry_0_opaque, NULL }
};

Gfx my_dungeon_room_1_shapeHeader_entry_0_opaque[] = {
	gsSPDisplayList(my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

Vtx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-1001, -120, 300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1001, 1047, 300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1001, 1047, -300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1001, -120, -300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-320, -120, 300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-320, 1047, 300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-320, 1047, -300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-320, -120, -300}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_0[15] = {
	{{ {-320, -120, -37}, 0, {3037, 320}, {255, 255, 255, 255} }},
	{{ {-320, -120, -97}, 0, {3037, -244}, {255, 255, 255, 255} }},
	{{ {-340, -120, -97}, 0, {2904, -244}, {197, 197, 197, 255} }},
	{{ {-340, -120, -37}, 0, {2904, 320}, {197, 197, 197, 255} }},
	{{ {-923, -120, 223}, 0, {-990, 1982}, {255, 255, 255, 255} }},
	{{ {-1001, -120, -300}, 0, {-1506, -1506}, {135, 135, 135, 255} }},
	{{ {-1001, -120, 300}, 0, {-1506, 2498}, {135, 135, 135, 255} }},
	{{ {-923, -120, -223}, 0, {-990, -990}, {255, 255, 255, 255} }},
	{{ {-417, -120, 223}, 0, {2387, 1990}, {255, 255, 255, 255} }},
	{{ {-340, -120, 300}, 0, {2904, 2498}, {135, 135, 135, 255} }},
	{{ {-417, -120, -37}, 0, {2387, 262}, {255, 255, 255, 255} }},
	{{ {-340, -120, -37}, 0, {2904, 320}, {197, 197, 197, 255} }},
	{{ {-340, -120, -300}, 0, {2904, -1506}, {135, 135, 135, 255} }},
	{{ {-417, -120, -97}, 0, {2387, -171}, {255, 255, 255, 255} }},
	{{ {-417, -120, -223}, 0, {2387, -1006}, {255, 255, 255, 255} }},
};

Gfx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_0 + 0, 15, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSP2Triangles(7, 4, 8, 0, 8, 4, 6, 0),
	gsSP2Triangles(8, 6, 9, 0, 10, 8, 9, 0),
	gsSP2Triangles(10, 9, 11, 0, 10, 11, 2, 0),
	gsSP2Triangles(2, 12, 10, 0, 12, 13, 10, 0),
	gsSP2Triangles(12, 14, 13, 0, 7, 14, 12, 0),
	gsSP2Triangles(7, 12, 5, 0, 13, 14, 7, 0),
	gsSP2Triangles(10, 13, 7, 0, 7, 8, 10, 0),
	gsSPEndDisplayList(),
};

Vtx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_1[52] = {
	{{ {-340, 816, -300}, 0, {19520, -4724}, {47, 47, 47, 255} }},
	{{ {-1001, 1047, -300}, 0, {29566, -6479}, {0, 0, 0, 255} }},
	{{ {-1001, 816, -300}, 0, {29566, -4724}, {47, 47, 47, 255} }},
	{{ {-340, 1047, -300}, 0, {19520, -6479}, {0, 0, 0, 255} }},
	{{ {-340, 1047, 300}, 0, {10398, -6479}, {0, 0, 0, 255} }},
	{{ {-1001, 1047, 300}, 0, {352, -6479}, {0, 0, 0, 255} }},
	{{ {-1001, 816, 300}, 0, {18784, -4724}, {47, 47, 47, 255} }},
	{{ {-1001, 1047, 300}, 0, {18784, -6479}, {0, 0, 0, 255} }},
	{{ {-340, 1047, 300}, 0, {28830, -6479}, {0, 0, 0, 255} }},
	{{ {-340, 816, 300}, 0, {28830, -4724}, {47, 47, 47, 255} }},
	{{ {-340, 816, 300}, 0, {20638, -4724}, {47, 47, 47, 255} }},
	{{ {-340, 1047, 300}, 0, {20638, -6479}, {0, 0, 0, 255} }},
	{{ {-340, 1047, -300}, 0, {29760, -6479}, {0, 0, 0, 255} }},
	{{ {-340, 816, -300}, 0, {29760, -4724}, {47, 47, 47, 255} }},
	{{ {-1001, 816, -300}, 0, {21374, -4724}, {47, 47, 47, 255} }},
	{{ {-1001, 1047, -300}, 0, {21374, -6479}, {0, 0, 0, 255} }},
	{{ {-1001, 1047, 300}, 0, {30496, -6479}, {0, 0, 0, 255} }},
	{{ {-1001, 816, 300}, 0, {30496, -4724}, {47, 47, 47, 255} }},
	{{ {-320, -120, -97}, 0, {28413, 2393}, {255, 255, 255, 255} }},
	{{ {-320, -20, -97}, 0, {28413, 1633}, {255, 255, 255, 255} }},
	{{ {-340, -20, -97}, 0, {28717, 1633}, {255, 255, 255, 255} }},
	{{ {-340, -120, -97}, 0, {28717, 2393}, {197, 197, 197, 255} }},
	{{ {-320, -20, -37}, 0, {1213, 155}, {255, 255, 255, 255} }},
	{{ {-320, -120, -37}, 0, {1213, 1179}, {255, 255, 255, 255} }},
	{{ {-340, -120, -37}, 0, {803, 1179}, {197, 197, 197, 255} }},
	{{ {-340, -20, -37}, 0, {803, 155}, {255, 255, 255, 255} }},
	{{ {-320, -20, -97}, 0, {28717, 1785}, {255, 255, 255, 255} }},
	{{ {-320, -20, -37}, 0, {27805, 1785}, {255, 255, 255, 255} }},
	{{ {-340, -20, -37}, 0, {27805, 1633}, {255, 255, 255, 255} }},
	{{ {-340, -20, -97}, 0, {28717, 1633}, {255, 255, 255, 255} }},
	{{ {-1001, -120, -300}, 0, {21374, 2393}, {135, 135, 135, 255} }},
	{{ {-1001, 816, -300}, 0, {21374, -4724}, {47, 47, 47, 255} }},
	{{ {-1001, 816, 300}, 0, {30496, -4724}, {47, 47, 47, 255} }},
	{{ {-1001, -120, 300}, 0, {30496, 2393}, {135, 135, 135, 255} }},
	{{ {-340, -120, 300}, 0, {24734, 2393}, {135, 135, 135, 255} }},
	{{ {-340, 816, 300}, 0, {24734, -4724}, {47, 47, 47, 255} }},
	{{ {-340, -20, -37}, 0, {29853, 1633}, {255, 255, 255, 255} }},
	{{ {-340, -120, -37}, 0, {29853, 2393}, {197, 197, 197, 255} }},
	{{ {-1001, -120, 300}, 0, {18784, 2393}, {135, 135, 135, 255} }},
	{{ {-1001, 816, 300}, 0, {18784, -4724}, {47, 47, 47, 255} }},
	{{ {-340, 816, 300}, 0, {28830, -4724}, {47, 47, 47, 255} }},
	{{ {-340, -120, 300}, 0, {28830, 2393}, {135, 135, 135, 255} }},
	{{ {-340, -120, -300}, 0, {19520, 2393}, {135, 135, 135, 255} }},
	{{ {-340, 816, -300}, 0, {19520, -4724}, {47, 47, 47, 255} }},
	{{ {-1001, 816, -300}, 0, {29566, -4724}, {47, 47, 47, 255} }},
	{{ {-1001, -120, -300}, 0, {29566, 2393}, {135, 135, 135, 255} }},
	{{ {-340, -20, -37}, 0, {25757, 1633}, {255, 255, 255, 255} }},
	{{ {-340, 816, 300}, 0, {20638, -4724}, {47, 47, 47, 255} }},
	{{ {-340, 816, -300}, 0, {29760, -4724}, {47, 47, 47, 255} }},
	{{ {-340, -20, -97}, 0, {26669, 1633}, {255, 255, 255, 255} }},
	{{ {-340, -120, -300}, 0, {29760, 2393}, {135, 135, 135, 255} }},
	{{ {-340, -120, -97}, 0, {26669, 2393}, {197, 197, 197, 255} }},
};

Gfx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_tri_1[] = {
	gsSPVertex(my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_1 + 0, 30, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(1, 3, 4, 0, 1, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
	gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
	gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
	gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
	gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
	gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
	gsSPVertex(my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_1 + 30, 22, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(19, 18, 20, 0, 19, 20, 21, 0),
	gsSPEndDisplayList(),
};

Gfx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_my_dungeon_room_0_dl_floor_mat_layerOpaque),
	gsSPDisplayList(my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_tri_0),
	gsSPDisplayList(mat_my_dungeon_room_1_dl_f3dlite_material_001_layerOpaque),
	gsSPDisplayList(my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_tri_1),
	gsSPEndDisplayList(),
};

