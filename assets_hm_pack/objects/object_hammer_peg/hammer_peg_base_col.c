#include "ultra64.h"
#include "z64.h"
#include "macros.h"

SurfaceType gHammerPegBaseDL_polygonTypes[] = {
	{ 0x00000000, 0x00000002 },
};

CollisionPoly gHammerPegBaseDL_polygons[] = {
	{ 0x0000, 0x0001, 0x0002, 0x0000, COLPOLY_SNORMAL(-0.9905121326446533), COLPOLY_SNORMAL(0.13742533326148987), COLPOLY_SNORMAL(-6.007052633094645e-09), 0xfa32 },
	{ 0x0000, 0x0004, 0x0001, 0x0003, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.13742533326148987), COLPOLY_SNORMAL(-0.9905121326446533), 0xfa32 },
	{ 0x0000, 0x0006, 0x0004, 0x0005, COLPOLY_SNORMAL(0.9905121326446533), COLPOLY_SNORMAL(0.13742533326148987), COLPOLY_SNORMAL(-6.007052633094645e-09), 0xfa32 },
	{ 0x0000, 0x0002, 0x0006, 0x0007, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.13742533326148987), COLPOLY_SNORMAL(0.9905121326446533), 0xfa32 },
	{ 0x0000, 0x0003, 0x0007, 0x0005, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(-4.334465941724375e-08), 0xfc7c },
	{ 0x0000, 0x0001, 0x0000, 0x0003, COLPOLY_SNORMAL(-0.9905121326446533), COLPOLY_SNORMAL(0.13742536306381226), COLPOLY_SNORMAL(-5.956655169114811e-09), 0xfa32 },
	{ 0x0000, 0x0004, 0x0003, 0x0005, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.13742536306381226), COLPOLY_SNORMAL(-0.9905121326446533), 0xfa32 },
	{ 0x0000, 0x0006, 0x0005, 0x0007, COLPOLY_SNORMAL(0.9905121326446533), COLPOLY_SNORMAL(0.13742536306381226), COLPOLY_SNORMAL(-5.956655169114811e-09), 0xfa32 },
	{ 0x0000, 0x0002, 0x0007, 0x0000, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.13742536306381226), COLPOLY_SNORMAL(0.9905121326446533), 0xfa32 },
	{ 0x0000, 0x0003, 0x0000, 0x0007, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(-4.334465941724375e-08), 0xfc7c },
};

Vec3s gHammerPegBaseDL_vertices[8] = {
	{ -1375, 900, 1375 },
	{ -1500, 0, -1500 },
	{ -1500, 0, 1500 },
	{ -1375, 900, -1375 },
	{ 1500, 0, -1500 },
	{ 1375, 900, -1375 },
	{ 1500, 0, 1500 },
	{ 1375, 900, 1375 },
};

CollisionHeader gHammerPegBaseDL_collisionHeader = {
	-1500,
	0,
	-1500,
	1500,
	900,
	1500,
	8,
	gHammerPegBaseDL_vertices,
	10,
	gHammerPegBaseDL_polygons,
	gHammerPegBaseDL_polygonTypes,
	0,
	0,
	0
};
