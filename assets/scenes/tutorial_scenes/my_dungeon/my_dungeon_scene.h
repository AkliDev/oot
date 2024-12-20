#ifndef MY_DUNGEON_SCENE_H
#define MY_DUNGEON_SCENE_H

#include "ultra64.h"
#include "macros.h"
#include "z64.h"


extern SceneCmd my_dungeon_scene_header00[];
extern RomFile my_dungeon_scene_roomList[];
extern u8 _my_dungeon_room_0SegmentRomStart[];
extern u8 _my_dungeon_room_0SegmentRomEnd[];
extern u8 _my_dungeon_room_1SegmentRomStart[];
extern u8 _my_dungeon_room_1SegmentRomEnd[];
extern u8 _my_dungeon_room_2SegmentRomStart[];
extern u8 _my_dungeon_room_2SegmentRomEnd[];
extern ActorEntry my_dungeon_scene_header00_playerEntryList[];
extern Spawn my_dungeon_scene_header00_entranceList[];
extern TransitionActorEntry my_dungeon_scene_header00_transitionActors[];
extern u16 my_dungeon_scene_header00_exitList[1];
extern EnvLightSettings my_dungeon_scene_header00_lightSettings[1];
extern CollisionHeader my_dungeon_scene_collisionHeader;
extern WaterBox my_dungeon_scene_waterBoxes[1];
extern SurfaceType my_dungeon_scene_polygonTypes[4];
extern Vec3s my_dungeon_scene_vertices[130];
extern CollisionPoly my_dungeon_scene_polygons[228];
extern u64 my_dungeon_room_0_dl_men_room_1Tex_004270_rgba16_ci8[];
extern u64 my_dungeon_room_0_dl_men_room_1Tex_004270_rgba16_pal_rgba16[];
extern u64 my_dungeon_room_1_dl_men_sceneTex_010CC0_ci8_ci8[];
extern u64 my_dungeon_room_1_dl_men_sceneTex_010CC0_ci8_pal_rgba16[];
extern Gfx mat_my_dungeon_room_0_dl_floor_mat_layerOpaque[];
extern Gfx mat_my_dungeon_room_1_dl_f3dlite_material_001_layerOpaque[];
extern SceneCmd my_dungeon_room_0_header00[];
extern s16 my_dungeon_room_0_header00_objectList[];
extern ActorEntry my_dungeon_room_0_header00_actorList[];
extern Gfx my_dungeon_room_0_shapeHeader_entry_0_opaque[];
extern u64 my_dungeon_room_0_dl_men_room_0Tex_00B538_ci8_ci8[];
extern u64 my_dungeon_room_0_dl_men_room_0Tex_00B538_ci8_pal_rgba16[];
extern u64 my_dungeon_room_0_dl_men_room_8Tex_005D30_rgba16_ci8[];
extern u64 my_dungeon_room_0_dl_men_room_8Tex_005D30_rgba16_pal_rgba16[];
extern Vtx my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull[8];
extern Vtx my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_vtx_0[24];
extern Gfx my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_tri_0[];
extern Vtx my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_vtx_1[60];
extern Gfx my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_tri_1[];
extern Vtx my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_vtx_2[4];
extern Gfx my_dungeon_room_0_dl_Floor_mesh_layer_Opaque_tri_2[];
extern Gfx mat_my_dungeon_room_0_dl_f3dlite_material_layerOpaque[];
extern Gfx mat_my_dungeon_room_0_dl_climbable_layerOpaque[];
extern Gfx my_dungeon_room_0_dl_Floor_mesh_layer_Opaque[];
extern RoomShapeNormal my_dungeon_room_0_shapeHeader;
extern RoomShapeDListsEntry my_dungeon_room_0_shapeDListsEntry[1];
extern SceneCmd my_dungeon_room_1_header00[];
extern s16 my_dungeon_room_1_header00_objectList[];
extern ActorEntry my_dungeon_room_1_header00_actorList[];
extern Gfx my_dungeon_room_1_shapeHeader_entry_0_opaque[];
extern Vtx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_cull[8];
extern Vtx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_0[15];
extern Gfx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_tri_0[];
extern Vtx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_1[52];
extern Gfx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque_tri_1[];
extern Gfx my_dungeon_room_1_dl_Floor_001_mesh_layer_Opaque[];
extern RoomShapeNormal my_dungeon_room_1_shapeHeader;
extern RoomShapeDListsEntry my_dungeon_room_1_shapeDListsEntry[1];
extern SceneCmd my_dungeon_room_2_header00[];
extern s16 my_dungeon_room_2_header00_objectList[];
extern ActorEntry my_dungeon_room_2_header00_actorList[];
extern Gfx my_dungeon_room_2_shapeHeader_entry_0_opaque[];
extern Gfx my_dungeon_room_2_shapeHeader_entry_0_transparent[];
extern u64 my_dungeon_room_2_dl_men_room_2Tex_004C48_ci8_ci8[];
extern u64 my_dungeon_room_2_dl_men_room_2Tex_004C48_ci8_pal_rgba16[];
extern u64 my_dungeon_room_2_dl_men_room_9Tex_003070_rgba16_ci8[];
extern u64 my_dungeon_room_2_dl_men_room_9Tex_003070_rgba16_x_men_room_9Tex_003070_rgba16_pal_rgba16[];
extern u64 my_dungeon_room_2_dl_men_room_9Tex_003070_rgba16_ci8_copy[];
extern Vtx my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_vtx_cull[8];
extern Vtx my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_vtx_0[29];
extern Gfx my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_tri_0[];
extern Vtx my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_vtx_1[110];
extern Gfx my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_tri_1[];
extern Vtx my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_vtx_2[4];
extern Gfx my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque_tri_2[];
extern Vtx my_dungeon_room_2_dl_Water_Box_Mesh_mesh_layer_Transparent_vtx_cull[8];
extern Vtx my_dungeon_room_2_dl_Water_Box_Mesh_mesh_layer_Transparent_vtx_0[4];
extern Gfx my_dungeon_room_2_dl_Water_Box_Mesh_mesh_layer_Transparent_tri_0[];
extern Gfx mat_my_dungeon_room_2_dl_f3dlite_material_003_layerOpaque[];
extern Gfx mat_my_dungeon_room_2_dl_oot_water_mat_layerTransparent[];
extern Gfx my_dungeon_room_2_dl_Floor_002_mesh_layer_Opaque[];
extern Gfx my_dungeon_room_2_dl_Water_Box_Mesh_mesh_layer_Transparent[];
extern RoomShapeNormal my_dungeon_room_2_shapeHeader;
extern RoomShapeDListsEntry my_dungeon_room_2_shapeDListsEntry[1];

#endif
