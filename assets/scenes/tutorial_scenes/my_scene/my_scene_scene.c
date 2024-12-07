#include "my_scene_scene.h"


/**
 * Header Child Day (Default)
*/
SceneCmd my_scene_scene_header00[] = {
    SCENE_CMD_COL_HEADER(&my_scene_scene_collisionHeader),
    SCENE_CMD_ROOM_LIST(1, my_scene_scene_roomList),
    SCENE_CMD_SOUND_SETTINGS(0x00, 0x13, NA_BGM_DUNGEON),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x00),
    SCENE_CMD_SPECIAL_FILES(0x00, OBJECT_GAMEPLAY_DANGEON_KEEP),
    SCENE_CMD_SKYBOX_SETTINGS(0x00, 0x00, LIGHT_MODE_SETTINGS),
    SCENE_CMD_ENV_LIGHT_SETTINGS(1, my_scene_scene_header00_lightSettings),
    SCENE_CMD_ENTRANCE_LIST(my_scene_scene_header00_entranceList),
    SCENE_CMD_SPAWN_LIST(1, my_scene_scene_header00_playerEntryList),
    SCENE_CMD_EXIT_LIST(my_scene_scene_header00_exitList),
    SCENE_CMD_END(),
};

RomFile my_scene_scene_roomList[] = {
    { (uintptr_t)_my_scene_room_0SegmentRomStart, (uintptr_t)_my_scene_room_0SegmentRomEnd },
};

ActorEntry my_scene_scene_header00_playerEntryList[] = {
    // Link / Spawn point
    {
        /* Actor ID   */ ACTOR_PLAYER,
        /* Position   */ { 0, 0, 608 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0FFF
    },
};

Spawn my_scene_scene_header00_entranceList[] = {
    // { Spawn Actor List Index, Room Index }
    { 0, 0 },
};

u16 my_scene_scene_header00_exitList[1] = {
    0x0000,
};

EnvLightSettings my_scene_scene_header00_lightSettings[1] = {
    // Indoor No. 1 Lighting
    {
        {   143,   110,   130 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {   219,   204,   194 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    79,    79,   133 },   // Diffuse1 Color
        {   196,   182,   175 },   // Fog Color
        ((1 << 10) | 993),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
};

CollisionHeader my_scene_scene_collisionHeader = {
    { -1239, 0, -1239 },
    { 1239, 0, 1239 },
    ARRAY_COUNT(my_scene_scene_vertices), my_scene_scene_vertices,
    ARRAY_COUNT(my_scene_scene_polygons), my_scene_scene_polygons,
    my_scene_scene_polygonTypes,
    my_scene_scene_bgCamInfo,
    0, NULL
};

Vec3s my_scene_scene_camPosData[] = {
    {      0,      0,      0 },
    { 0x1679, 0x048D, 0x0000 },
    {   3960,     -1,     -1 },
};

BgCamInfo my_scene_scene_bgCamInfo[] = {
    { CAM_SET_NORMAL0, 3, &my_scene_scene_camPosData[0] },
};

SurfaceType my_scene_scene_polygonTypes[2] = {
    { SURFACETYPE0(0, 1, 0x00, 0, 0x00, 0x00, 0, 0), SURFACETYPE1(0x00, 0x00, 0, 0, 0, 0, 0, 0) },
    { SURFACETYPE0(0, 0, 0x00, 0, 0x00, 0x00, 0, 0), SURFACETYPE1(0x00, 0x00, 0, 0, 0, 0, 0, 0) },
};

Vec3s my_scene_scene_vertices[8] = {
    {   -316,      0,    316 },
    {    316,      0,    316 },
    {    316,      0,   -316 },
    {   -316,      0,   -316 },
    {  -1239,      0,  -1239 },
    {  -1239,      0,   1239 },
    {   1239,      0,   1239 },
    {   1239,      0,  -1239 },
};

CollisionPoly my_scene_scene_polygons[10] = {
    { 0, COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX(1, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(2), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 0, COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX(2, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(3), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 1, COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX(3, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(4), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 1, COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX(4, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(5), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 1, COLPOLY_VTX(1, COLPOLY_IGNORE_NONE), COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(5), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 1, COLPOLY_VTX(1, COLPOLY_IGNORE_NONE), COLPOLY_VTX(5, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(6), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 1, COLPOLY_VTX(2, COLPOLY_IGNORE_NONE), COLPOLY_VTX(1, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(6), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 1, COLPOLY_VTX(2, COLPOLY_IGNORE_NONE), COLPOLY_VTX(6, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(7), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 1, COLPOLY_VTX(3, COLPOLY_IGNORE_NONE), COLPOLY_VTX(2, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(7), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 1, COLPOLY_VTX(3, COLPOLY_IGNORE_NONE), COLPOLY_VTX(7, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(4), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
};

