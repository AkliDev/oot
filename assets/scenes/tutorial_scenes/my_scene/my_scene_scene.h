#ifndef MY_SCENE_SCENE_H
#define MY_SCENE_SCENE_H

#include "ultra64.h"
#include "macros.h"
#include "z64.h"


extern SceneCmd my_scene_scene_header00[];
extern RomFile my_scene_scene_roomList[];
extern u8 _my_scene_room_0SegmentRomStart[];
extern u8 _my_scene_room_0SegmentRomEnd[];
extern ActorEntry my_scene_scene_header00_playerEntryList[];
extern Spawn my_scene_scene_header00_entranceList[];
extern u16 my_scene_scene_header00_exitList[1];
extern EnvLightSettings my_scene_scene_header00_lightSettings[1];
extern CollisionHeader my_scene_scene_collisionHeader;
extern Vec3s my_scene_scene_camPosData[];
extern BgCamInfo my_scene_scene_bgCamInfo[];
extern SurfaceType my_scene_scene_polygonTypes[2];
extern Vec3s my_scene_scene_vertices[8];
extern CollisionPoly my_scene_scene_polygons[10];
extern SceneCmd my_scene_room_0_header00[];
extern ActorEntry my_scene_room_0_header00_actorList[];
extern Gfx my_scene_room_0_shapeHeader_entry_0_opaque[];
extern u64 my_scene_room_0_dl__0001B398_32x32_rgba16_rgba32[];
extern Vtx my_scene_room_0_dl_Exit_mesh_layer_Opaque_vtx_cull[8];
extern Vtx my_scene_room_0_dl_Exit_mesh_layer_Opaque_vtx_0[4];
extern Gfx my_scene_room_0_dl_Exit_mesh_layer_Opaque_tri_0[];
extern Vtx my_scene_room_0_dl_Ground_mesh_layer_Opaque_vtx_cull[8];
extern Vtx my_scene_room_0_dl_Ground_mesh_layer_Opaque_vtx_0[8];
extern Gfx my_scene_room_0_dl_Ground_mesh_layer_Opaque_tri_0[];
extern Gfx mat_my_scene_room_0_dl_f3dlite_material_315_layerOpaque[];
extern Gfx mat_my_scene_room_0_dl_f3dlite_material_314_layerOpaque[];
extern Gfx my_scene_room_0_dl_Exit_mesh_layer_Opaque[];
extern Gfx my_scene_room_0_dl_Ground_mesh_layer_Opaque[];
extern RoomShapeNormal my_scene_room_0_shapeHeader;
extern RoomShapeDListsEntry my_scene_room_0_shapeDListsEntry[1];

#endif
