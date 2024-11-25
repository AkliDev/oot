#ifndef TEST_SCENE_H
#define TEST_SCENE_H

#include "ultra64.h"
#include "macros.h"
#include "z64.h"


extern SceneCmd test_scene_header00[];
extern RomFile test_scene_roomList[];
extern u8 _test_room_0SegmentRomStart[];
extern u8 _test_room_0SegmentRomEnd[];
extern ActorEntry test_scene_header00_playerEntryList[];
extern Spawn test_scene_header00_entranceList[];
extern EnvLightSettings test_scene_header00_lightSettings[4];
extern CollisionHeader test_scene_collisionHeader;
extern SurfaceType test_scene_polygonTypes[1];
extern Vec3s test_scene_vertices[4];
extern CollisionPoly test_scene_polygons[2];
extern SceneCmd test_room_0_header00[];
extern Gfx test_room_0_shapeHeader_entry_0_opaque[];
extern Vtx test_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull[8];
extern Vtx test_room_0_dl_Floor_mesh_layer_Opaque_vtx_0[4];
extern Gfx test_room_0_dl_Floor_mesh_layer_Opaque_tri_0[];
extern Gfx mat_test_room_0_dl_floor_mat_layerOpaque[];
extern Gfx test_room_0_dl_Floor_mesh_layer_Opaque[];
extern RoomShapeNormal test_room_0_shapeHeader;
extern RoomShapeDListsEntry test_room_0_shapeDListsEntry[1];

#endif
