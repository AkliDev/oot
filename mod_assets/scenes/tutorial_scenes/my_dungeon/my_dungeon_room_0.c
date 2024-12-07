#include "my_dungeon_scene.h"


/**
 * Header Child Day (Default)
*/
#define LENGTH_MY_DUNGEON_ROOM_0_HEADER00_OBJECTLIST 2
#define LENGTH_MY_DUNGEON_ROOM_0_HEADER00_ACTORLIST 2
SceneCmd my_dungeon_room_0_header00[] = {
    SCENE_CMD_ROOM_SHAPE(&my_dungeon_room_0_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_OBJECT_LIST(LENGTH_MY_DUNGEON_ROOM_0_HEADER00_OBJECTLIST, my_dungeon_room_0_header00_objectList),
    SCENE_CMD_ACTOR_LIST(LENGTH_MY_DUNGEON_ROOM_0_HEADER00_ACTORLIST, my_dungeon_room_0_header00_actorList),
    SCENE_CMD_END(),
};

s16 my_dungeon_room_0_header00_objectList[LENGTH_MY_DUNGEON_ROOM_0_HEADER00_OBJECTLIST] = {
    OBJECT_POLS_VOICE,
    OBJECT_BOX,
};

ActorEntry my_dungeon_room_0_header00_actorList[LENGTH_MY_DUNGEON_ROOM_0_HEADER00_ACTORLIST] = {
    // Treasure Chest
    {
        /* Actor ID   */ ACTOR_EN_BOX,
        /* Position   */ { 176, -120, 1029 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0BC3
    },

    // Custom Actor
    {
        /* Actor ID   */ ACTOR_POLS_VOICE,
        /* Position   */ { 224, -120, 183 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },
};

RoomShapeNormal my_dungeon_room_0_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(my_dungeon_room_0_shapeDListsEntry),
    my_dungeon_room_0_shapeDListsEntry,
    my_dungeon_room_0_shapeDListsEntry + ARRAY_COUNT(my_dungeon_room_0_shapeDListsEntry)
};

RoomShapeDListsEntry my_dungeon_room_0_shapeDListsEntry[1] = {
    { my_dungeon_room_0_shapeHeader_entry_0_opaque, NULL }
};

Gfx my_dungeon_room_0_shapeHeader_entry_0_opaque[] = {
	gsSPDisplayList(my_dungeon_room_0_dl_Floor_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

u64 my_dungeon_room_0_dl_men_room_0Tex_00B538_ci8_ci8[] = {
	0x0000010202000304, 0x050607080903090a, 0x000b0a0a0c0c0d00, 0x020d000d0d0e0f10, 0x09000900000c0009, 0x0209000911090a0a, 0x120013020d020d0d, 0x0000000107000002, 
	0x0d0000020d0c0d09, 0x00000011140c0c0c, 0x0c020a090102000a, 0x000900020000000a, 0x02020a020d0d1516, 0x1109000a0a171212, 0x0a02090200090202, 0x0009000909050a0a, 
	0x02000900050a0c18, 0x15150d130014190a, 0x0d0d020202151509, 0x090a15030906001a, 0x00000209020d0b17, 0x130d0a0015020f0f, 0x09000a0202090915, 0x09020204031b0902, 
	0x0002020209000012, 0x020d130002050209, 0x0a0002000909091c, 0x06000909061b1109, 0x0202020902020d0d, 0x0a000d0207060902, 0x02020d001d061509, 0x09000c0a0a0a0900, 
	0x090109050909020a, 0x0c0c0a1e1f111509, 0x1515000013131313, 0x0c0a0a0a18130c0a, 0x020202080909020a, 0x0a0a162021222202, 0x090d0d0d0a0a0c0a, 0x0c0002130d0a0a18, 
	0x0404231f04030505, 0x242526262728040d, 0x0c0000000a180a0c, 0x0a0d0a0a0d00020f, 0x27231f29221f2a25, 0x2b2c2d2e212f160d, 0x0d0f0000000a0c12, 0x17120a001a000911, 
	0x22272227161e1627, 0x3031323334350302, 0x0d00000d0b0c0a12, 0x0c0a000902020811, 0x2525361f041f1f1f, 0x1f3738041f030715, 0x02000a0a0a000909, 0x05091505020d061f, 
	0x393a341f041f2727, 0x04033b3909070509, 0x05090200093c2416, 0x24050507051e3d07, 0x271f223e043e1605, 0x0209091607110303, 0x09150909163f2f40, 0x1f16061f21272739, 
	0x2727271c1f1f0609, 0x09060609111b1b41, 0x1f05050505071f3f, 0x291107422f222525, 0x23222f43163e1616, 0x05151f11070f0900, 0x00061e0709061e23, 0x23441b4546472c47, 
	0x48494a4b2f1f4c2e, 0x2703034407000a0c, 0x0a0d091502091502, 0x061104234a4d4e4f, 0x425039225122521b, 0x0d02130a0c0c170c, 0x00000a0902020909, 0x0306031553545556, 
	0x0a13442122571f39, 0x191a0d0a0d0a0a0a, 0x0a0d0c0d0a020903, 0x1502020311585916, 0x00022f40375a365b, 0x5c58150f02130a13, 0x0d0d00000a130539, 0x0309020002150202, 
	0x00025d1f565e5f60, 0x61573803090a0d0d, 0x0c0a09000d091c15, 0x0909070606030607, 0x0711303662634e36, 0x5a3538030202020a, 0x0c00090609060664, 0x11163e3865523a03, 
	0x0a13116667661f39, 0x034c1f0715000a0c, 0x0a0a0c07060f1438, 0x683822693263381f, 0x02090303396a0703, 0x07020403000a120a, 0x0b120c0000091b6b, 0x6c6c486d6e6f4504, 
	0x1106031509070606, 0x00020009000a0d0a, 0x12120a0009022933, 0x70716e726e60273b, 0x0307030611153903, 0x0f0202090a0d0c0b, 0x1212120c09052b73, 0x74747175762e5621, 
	0x2203060203440909, 0x0309020209070a0c, 0x1a0c0a0c02162216, 0x2e726c462e407333, 0x1102070908000d0a, 0x0909090509150200, 0x0d000d0239110306, 0x2270636330774930, 
	0x390d0a020f000d0d, 0x091e030307090915, 0x1544110915440311, 0x786d5e6d4d346069, 0x410d0c0a00020903, 0x051f04231f1f0505, 0x1e03150900161e79, 0x32327a4e51305e5e, 
	0x0d0a0c170c0a0c0d, 0x0527212f4c1f3e1e, 0x15090909004a3860, 0x60327b49432f3628, 0x0d0a020009130a0d, 0x06257c2e2f3f2516, 0x1e0315090f344e32, 0x2b2c5f5f34450400, 
	0x0209090509097d02, 0x432c522f73252b24, 0x1f16090a00111104, 0x2734451f1f270300, 0x15051e1e167e3941, 0x77617f7c48802521, 0x21160507000d0009, 0x810404391b09020d, 
	0x09061f3a643a3923, 0x41824073307c782f, 0x251e0603090d0006, 0x8361042303021302, 0x031144031b440322, 0x4041457373695248, 0x2b1e030302020c12, 0x042739000d0f0009, 
	0x0606060715034747, 0x3448842b162f361c, 0x03051e05150a120c, 0x120c121212130a00, 0x031e03030327732b, 0x782e7c2705058439, 0x05070316090c0c0a, 0x130a0c0c0c0b0c0a, 
	0x0909110505252e2c, 0x7877252203222739, 0x03051e000a0a1309, 0x0009020a0c0c0a0d, 0x02021303272f1f36, 0x2c7385772286231e, 0x030309020d090005, 0x44060d0c0a0c0b0a, 
	0x0c0b0c1827432236, 0x304e634537871f03, 0x05020a0a03000002, 0x02000a0b0c130c0c, 0x0b0c0b0011224378, 0x345e5e8889641b04, 0x090a0c0c0309000a, 0x0d0d0a130a0a0d0c, 
	0x120c00090d1f8445, 0x838a8b3908080d13, 0x02130a0d02020a02, 0x00000c0a0d0c0a0c, 0x0000090a00078c41, 0x8d58034409020a0a, 0x00130d0200090200, 0x020a0d02000d130a, 
	0x05020a0000382f3b, 0x648e6a3a03020d09, 0x0d0d0208041f1e2a, 0x090515051103031e, 0x220309001e27254a, 0x4d8f2e1f090a0202, 0x06061b3e4d6c6c20, 0x2b212424252b2525, 
	0x221f06073f777a5f, 0x4d79220909020209, 0x093a1f234b726d32, 0x323090862248257c, 0x220609041e217a7a, 0x7060160715071509, 0x052f5d5130717171, 0x7270884562252e2b, 
	0x04090d0616063b03, 0x911f2a0905050515, 0x09161e0487327271, 0x719232933e162f4a, 0x0315000904110307, 0x0909160504163905, 0x0616090915303636, 0x512e362b27222727, 
	0x220900020309090a, 0x0005211604041606, 0x0516030609030339, 0x03090d0703272547, 0x11090a0215050907, 0x05253f273e1f0416, 0x061f1f1e0703090f, 0x090d0002153f4b36, 
	0x22150209091e2a24, 0x20253f2221221f1f, 0x1f06391f03150200, 0x020200090321474b, 0x110d020906404073, 0x274377252f40273e, 0x2703000703070505, 0x02000915051f2f36, 
	0x0900000804515469, 0x485a2d609485253f, 0x1e05000509091e03, 0x0315050503081f22, 0x0709150309394723, 0x2e6669466260213e, 0x1f1e0d0205112716, 0x1e053e0303070808, 
	0x0303070404112722, 0x271f519545414122, 0x2c16020304392704, 0x030616031f110609, 0x030603060a06221c, 0x160466283796414c, 0x0302090d1f1f1f06, 0x0703031b27110709, 
	0x03110311091e2222, 0x5756675a55456723, 0x0509090c0c090404, 0x0503111c16030309, 0x3903390609057740, 0x835a974a5236221f, 0x05090a0a12120603, 0x0304161c1f040303, 
	0x1e03160909161f22, 0x1f1f57981f1f2316, 0x2a09000c0c0d0603, 0x031b030509054403, 0x0303030909031f22, 0x2322381c1f1f0403, 0x0902000c0c0a0909, 0x0703030606030306, 
	
};

u64 my_dungeon_room_0_dl_men_room_0Tex_00B538_ci8_pal_rgba16[] = {
	0x31473205394759c5, 0x6a855985520551c7, 0x5245418720c50883, 0x10852907630b4205, 0x41895a4508432107, 0x31494a0572050001, 0x18c7320b21475a85, 0x6b07528571c57245, 
	0xc24792c782c772c5, 0x82059ac7cac78285, 0x7bcb7b877145ab05, 0xbbc9ab4d9b098b09, 0xb38de40fd491bc0b, 0x9b4d938f934b82cd, 0x72c962476a897249, 0x81456ac582459285, 
	0x93076acb828b82c9, 0x5a078b4dabcd9b89, 0xb3cbbc0d9bcbab8b, 0x8b85b3cfbc51c44d, 0x624d8b0babcb5a8b, 0x8c0d93d383477b0d, 0x528b6b0f934dac19, 0x7b136b0bc451c40f, 
	0xab8f73499bcfac93, 0x5ac993cd838b838f, 0x93d7bc0f62499bcd, 0xbc93dd55ccd9bc4f, 0xbc97fddddd99ab09, 0xfe5feddfbc4d930b, 0xb3c9ab89c391dc57, 0xbb073a87824bab8d, 
	0xdb89834f8bcb9c11, 0x8b4b9b8d824d8b0f, 0xab9172d172cf51c9, 0x830f720972cd9351, 0xab0f628bf5599bd3, 0x9b91bc8d6b4f844d, 0x6b89000000000000
};

u64 my_dungeon_room_0_dl_men_room_8Tex_005D30_rgba16_ci8[] = {
	0x0000000000000102, 0x0304000000000000, 0x0000000000040502, 0x0603040000000000, 0x0000000004030708, 0x090a030400000000, 0x0000000403070b00, 0x00090c0304000000, 
	0x00000403070b0000, 0x00000d0c03040000, 0x000403070b000000, 0x0000000d0c030400, 0x0403070b00000000, 0x000000000d0c0304, 0x03070b0000000000, 0x00000000000d0a03, 
	0x030e000000000000, 0x0000000000000f10, 0x07030e0000000000, 0x0000000000040307, 0x0b07030e00000000, 0x000000000403070b, 0x001112030e000000, 0x0000001303070b00, 
	0x00000b07030e0000, 0x00000414150b0000, 0x0000000b07030e00, 0x000103070b000000, 0x000000000b07030e, 0x0415070b00000000, 0x00000000000b0703, 0x030a0b0000000000, 
	0x0000000000000403, 0x160e170000000000, 0x0000000000000307, 0x0a030e1700000000, 0x000000000003070b, 0x0007030e17000000, 0x0000000003070b00, 0x000b07030e170000, 
	0x00000003070b0000, 0x00000b07030e1700, 0x000003070b000000, 0x0000000b07030e17, 0x0003070b00000000, 0x000000000b07030e, 0x03070b0000000000, 0x0000000000000703, 
	0x030e171800000000, 0x0000000000000403, 0x07030e1718000000, 0x0000000000040307, 0x0007030e17180000, 0x000000000403070b, 0x000007030e171800, 0x0000000403070b00, 
	0x00000007030e1718, 0x0000040312110000, 0x0000000007030e17, 0x180403070b000000, 0x000000000007030e, 0x0403070b00000000, 0x0000000000000703, 0x03070b0000000000, 
	0x0000000000000403, 0x030e170000000000, 0x0000000000040307, 0x07030e1700000000, 0x000000000403070b, 0x0b07030e17000000, 0x0000000403070b00, 0x000b07030e170000, 
	0x00000403070b0000, 0x00000b07030e1700, 0x000403070b000000, 0x0000000b07030e17, 0x0403070b00000000, 0x000000000b07030e, 0x03070b0000000000, 0x00000000000b0703, 
	0x030e171800000000, 0x0000000000110403, 0x07030e1718000000, 0x0000000011040307, 0x0115030e17180000, 0x000000110403070b, 0x000107030e171800, 0x0000110403070b00, 
	0x00000b07030e1718, 0x00110403070b0000, 0x0000000b07030e17, 0x180403070b000000, 0x000000000b07030e, 0x0403070b00000000, 0x00000000000b0703, 0x03070b0000000000, 
	0x0000000000000403, 0x030e171800000000, 0x0000000000040307, 0x07030e1700000000, 0x000000000403070b, 0x0b07030e17000000, 0x0000000403070b00, 0x000b07030e170000, 
	0x00000403070b0000, 0x00000b07030e1700, 0x000403070d000000, 0x0000000b07030e17, 0x0403070b11000000, 0x000000000b07030e, 0x03070b0000000000, 0x00000000000b0703, 
	0x150b000000000000, 0x0000000000001112, 0x1919191919191919, 0x1919191919191919, 0x1a1a1a1a1a1a1a1a, 0x1a1a1a1a1a1a1a1a, 0x1b1b1a1a1a1a1a1c, 0x1d1e1a1a1a1a1a1a, 
	0x1a1a1a1a1a1a1a1f, 0x20211a1a1a1a1b22, 0x221b1a1a1a1a1a23, 0x241e1a1a1a1a1a1a, 0x1a1a1a1a1a1a1a1a, 0x1a1a1a1a1a1a1a1a, 0x2525252525252525, 0x2525252525252525, 
	
};

u64 my_dungeon_room_0_dl_men_room_8Tex_005D30_rgba16_pal_rgba16[] = {
	0x000018c66b596b5b, 0x29085295739d4211, 0x210818844a531082, 0x73dd294aad6a4a52, 0x8c630800294b4a50, 0x631952d584214210, 0x10847a534949494b, 0x5253731b5213398d, 
	0x6ad79421514b1887, 0x290b284300000000
};

Vtx my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-320, -120, 1161}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-320, 381, 1161}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-320, 381, -320}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-320, -120, -320}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {633, -120, 1161}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {633, 381, 1161}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {633, 381, -320}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {633, -120, -320}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_vtx_0[24] = {
	{{ {-300, -120, -97}, 0, {-1506, -149}, {255, 255, 255, 255} }},
	{{ {226, -120, -300}, 0, {2002, -1506}, {255, 255, 255, 255} }},
	{{ {-300, -120, -300}, 0, {-1506, -1506}, {255, 255, 255, 255} }},
	{{ {-300, -120, 461}, 0, {-1506, 3574}, {255, 255, 255, 255} }},
	{{ {-45, -120, 461}, 0, {197, 3574}, {255, 255, 255, 255} }},
	{{ {-300, -120, -37}, 0, {-1506, 251}, {255, 255, 255, 255} }},
	{{ {226, -120, -300}, 0, {2002, -1506}, {255, 255, 255, 255} }},
	{{ {-320, -120, -97}, 0, {-1639, -149}, {224, 224, 224, 255} }},
	{{ {-320, -120, -37}, 0, {-1639, 251}, {224, 224, 224, 255} }},
	{{ {378, -120, 461}, 0, {3018, 3574}, {255, 255, 255, 255} }},
	{{ {286, -120, -300}, 0, {2402, -1506}, {255, 255, 255, 255} }},
	{{ {286, -120, -300}, 0, {2402, -1506}, {255, 255, 255, 255} }},
	{{ {226, -120, -300}, 0, {2002, -1506}, {255, 255, 255, 255} }},
	{{ {-45, -120, 461}, 0, {197, 3574}, {255, 255, 255, 255} }},
	{{ {-45, -120, 1161}, 0, {197, 8242}, {255, 255, 255, 255} }},
	{{ {378, -120, 1161}, 0, {3018, 8242}, {255, 255, 255, 255} }},
	{{ {286, -120, -300}, 0, {2402, -1506}, {255, 255, 255, 255} }},
	{{ {378, -120, 461}, 0, {3018, 3574}, {255, 255, 255, 255} }},
	{{ {633, -120, 461}, 0, {4721, 3574}, {255, 255, 255, 255} }},
	{{ {633, -120, -300}, 0, {4721, -1506}, {255, 255, 255, 255} }},
	{{ {286, -120, -320}, 0, {2402, -1639}, {255, 255, 255, 255} }},
	{{ {226, -120, -320}, 0, {2002, -1639}, {255, 255, 255, 255} }},
	{{ {226, -120, -300}, 0, {2002, -1506}, {255, 255, 255, 255} }},
	{{ {286, -120, -300}, 0, {2402, -1506}, {255, 255, 255, 255} }},
};

Gfx my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_vtx_0 + 0, 24, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(5, 4, 6, 0, 5, 6, 0, 0),
	gsSP2Triangles(5, 0, 7, 0, 5, 7, 8, 0),
	gsSP2Triangles(9, 10, 10, 0, 4, 9, 10, 0),
	gsSP2Triangles(4, 10, 12, 0, 10, 12, 12, 0),
	gsSP2Triangles(9, 13, 14, 0, 9, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSPEndDisplayList(),
};

Vtx my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_vtx_1[60] = {
	{{ {633, -120, 461}, 0, {232, 2975}, {255, 255, 255, 255} }},
	{{ {633, 381, 461}, 0, {232, -1077}, {255, 255, 255, 255} }},
	{{ {633, 381, -300}, 0, {3308, -1077}, {255, 255, 255, 255} }},
	{{ {633, -120, -300}, 0, {3308, 2975}, {255, 255, 255, 255} }},
	{{ {378, -120, 461}, 0, {-799, 2975}, {255, 255, 255, 255} }},
	{{ {633, 381, 461}, 0, {232, -1077}, {255, 255, 255, 255} }},
	{{ {633, -120, 461}, 0, {232, 2975}, {255, 255, 255, 255} }},
	{{ {378, 381, 461}, 0, {-799, -1077}, {255, 255, 255, 255} }},
	{{ {378, -120, 1161}, 0, {-3626, 2975}, {255, 255, 255, 255} }},
	{{ {378, 155, 1161}, 0, {-3626, 750}, {255, 255, 255, 255} }},
	{{ {-45, 381, 461}, 0, {1077, -243}, {255, 255, 255, 255} }},
	{{ {378, 381, 461}, 0, {2668, -243}, {255, 255, 255, 255} }},
	{{ {378, 155, 1161}, 0, {2668, 5022}, {255, 255, 255, 255} }},
	{{ {-45, 155, 1161}, 0, {1077, 5022}, {255, 255, 255, 255} }},
	{{ {-45, -120, 1161}, 0, {14012, 2975}, {255, 255, 255, 255} }},
	{{ {-45, 155, 1161}, 0, {14012, 750}, {255, 255, 255, 255} }},
	{{ {378, 155, 1161}, 0, {15721, 750}, {255, 255, 255, 255} }},
	{{ {378, -120, 1161}, 0, {15721, 2975}, {255, 255, 255, 255} }},
	{{ {-45, -120, 461}, 0, {11185, 2975}, {255, 255, 255, 255} }},
	{{ {-45, 155, 1161}, 0, {14012, 750}, {255, 255, 255, 255} }},
	{{ {-45, 381, 461}, 0, {11185, -1077}, {255, 255, 255, 255} }},
	{{ {-300, -120, 461}, 0, {10154, 2975}, {255, 255, 255, 255} }},
	{{ {-300, 381, 461}, 0, {10154, -1077}, {255, 255, 255, 255} }},
	{{ {-300, -20, -37}, 0, {8143, 2167}, {255, 255, 255, 255} }},
	{{ {-300, -120, -37}, 0, {8143, 2975}, {255, 255, 255, 255} }},
	{{ {-320, -120, -37}, 0, {8062, 2975}, {224, 224, 224, 255} }},
	{{ {-320, -20, -37}, 0, {8062, 2167}, {255, 255, 255, 255} }},
	{{ {-300, -20, -97}, 0, {7900, 2167}, {255, 255, 255, 255} }},
	{{ {-300, 381, -300}, 0, {7078, -1077}, {255, 255, 255, 255} }},
	{{ {-300, -120, -300}, 0, {7078, 2975}, {255, 255, 255, 255} }},
	{{ {-300, -120, -97}, 0, {7900, 2975}, {255, 255, 255, 255} }},
	{{ {-320, -20, -97}, 0, {7981, 2167}, {255, 255, 255, 255} }},
	{{ {-300, -120, -97}, 0, {7900, 2975}, {255, 255, 255, 255} }},
	{{ {-320, -20, -97}, 0, {7981, 2167}, {255, 255, 255, 255} }},
	{{ {-320, -120, -97}, 0, {7981, 2975}, {224, 224, 224, 255} }},
	{{ {226, -20, -300}, 0, {4954, 2167}, {255, 255, 255, 255} }},
	{{ {-300, 381, -300}, 0, {7078, -1077}, {255, 255, 255, 255} }},
	{{ {-300, -120, -300}, 0, {7078, 2975}, {255, 255, 255, 255} }},
	{{ {286, -20, -300}, 0, {4712, 2167}, {255, 255, 255, 255} }},
	{{ {633, 381, -300}, 0, {3308, -1077}, {255, 255, 255, 255} }},
	{{ {633, -120, -300}, 0, {3308, 2975}, {255, 255, 255, 255} }},
	{{ {286, -120, -300}, 0, {4712, 2975}, {255, 255, 255, 255} }},
	{{ {286, -120, -300}, 0, {4712, 2975}, {255, 255, 255, 255} }},
	{{ {226, -120, -300}, 0, {4954, 2975}, {255, 255, 255, 255} }},
	{{ {-300, -20, -97}, 0, {7900, 2167}, {255, 255, 255, 255} }},
	{{ {-300, -20, -37}, 0, {8143, 2167}, {255, 255, 255, 255} }},
	{{ {-320, -20, -37}, 0, {8143, 2328}, {255, 255, 255, 255} }},
	{{ {-320, -20, -97}, 0, {7900, 2328}, {255, 255, 255, 255} }},
	{{ {226, -120, -320}, 0, {4874, 2975}, {255, 255, 255, 255} }},
	{{ {226, -20, -320}, 0, {4874, 2167}, {255, 255, 255, 255} }},
	{{ {226, -20, -300}, 0, {4954, 2167}, {255, 255, 255, 255} }},
	{{ {226, -120, -300}, 0, {4954, 2975}, {255, 255, 255, 255} }},
	{{ {226, -20, -320}, 0, {4954, 2328}, {255, 255, 255, 255} }},
	{{ {286, -20, -320}, 0, {4712, 2328}, {255, 255, 255, 255} }},
	{{ {286, -20, -300}, 0, {4712, 2167}, {255, 255, 255, 255} }},
	{{ {226, -20, -300}, 0, {4954, 2167}, {255, 255, 255, 255} }},
	{{ {286, -20, -320}, 0, {4793, 2167}, {255, 255, 255, 255} }},
	{{ {286, -120, -320}, 0, {4793, 2975}, {255, 255, 255, 255} }},
	{{ {286, -120, -300}, 0, {4712, 2975}, {255, 255, 255, 255} }},
	{{ {286, -20, -300}, 0, {4712, 2167}, {255, 255, 255, 255} }},
};

Gfx my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_tri_1[] = {
	gsSPVertex(my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_vtx_1 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSP2Triangles(7, 4, 8, 0, 7, 8, 9, 0),
	gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
	gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
	gsSP2Triangles(18, 19, 14, 0, 18, 20, 19, 0),
	gsSP2Triangles(21, 20, 18, 0, 21, 22, 20, 0),
	gsSP2Triangles(23, 22, 21, 0, 23, 21, 24, 0),
	gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
	gsSP2Triangles(27, 22, 23, 0, 27, 28, 22, 0),
	gsSP2Triangles(29, 28, 27, 0, 29, 27, 30, 0),
	gsSP1Triangle(30, 27, 31, 0),
	gsSPVertex(my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_vtx_1 + 32, 28, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 4, 3, 0, 6, 7, 4, 0),
	gsSP2Triangles(8, 7, 6, 0, 6, 9, 8, 0),
	gsSP2Triangles(9, 10, 8, 0, 3, 5, 11, 0),
	gsSP2Triangles(11, 11, 3, 0, 12, 13, 14, 0),
	gsSP2Triangles(12, 14, 15, 0, 16, 17, 18, 0),
	gsSP2Triangles(16, 18, 19, 0, 20, 21, 22, 0),
	gsSP2Triangles(20, 22, 23, 0, 24, 25, 26, 0),
	gsSP1Triangle(24, 26, 27, 0),
	gsSPEndDisplayList(),
};

Vtx my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_vtx_2[4] = {
	{{ {630, -120, 214}, 0, {-2832, 2032}, {129, 0, 0, 255} }},
	{{ {630, 381, 214}, 0, {-2832, -2064}, {129, 0, 0, 255} }},
	{{ {630, 381, -135}, 0, {3312, -2064}, {129, 0, 0, 255} }},
	{{ {630, -120, -135}, 0, {3312, 2032}, {129, 0, 0, 255} }},
};

Gfx my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_tri_2[] = {
	gsSPVertex(my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_vtx_2 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx mat_my_dungeon_room_0_dl_f3dlite_material_layerOpaque[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_RGBA16 | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, my_dungeon_room_0_dl_men_room_0Tex_00B538_ci8_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 152),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, my_dungeon_room_0_dl_men_room_0Tex_00B538_ci8_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_my_dungeon_room_0_dl_climbable_layerOpaque[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_RGBA16 | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_TEX_EDGE2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, my_dungeon_room_0_dl_men_room_8Tex_005D30_rgba16_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 37),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, my_dungeon_room_0_dl_men_room_8Tex_005D30_rgba16_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 1024),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 2, 0, 0, 0, G_TX_WRAP | G_TX_MIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 252),
	gsSPEndDisplayList(),
};

Gfx my_dungeon_room_0_dl_Floor_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_my_dungeon_room_0_dl_floor_mat_layerOpaque),
	gsSPDisplayList(my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_tri_0),
	gsSPDisplayList(mat_my_dungeon_room_0_dl_f3dlite_material_layerOpaque),
	gsSPDisplayList(my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_tri_1),
	gsSPDisplayList(mat_my_dungeon_room_0_dl_climbable_layerOpaque),
	gsSPDisplayList(my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_tri_2),
	gsSPEndDisplayList(),
};
