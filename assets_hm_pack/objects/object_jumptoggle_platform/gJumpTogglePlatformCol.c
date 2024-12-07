#include "ultra64.h"
#include "z64.h"
#include "macros.h"

SurfaceType gJumpTogglePlatformCol_polygonTypes[] = {
	{ 0x00000000, 0x00000002 },
};

CollisionPoly gJumpTogglePlatformCol_polygons[] = {
	{ 0x0000, 0x2000, 0x0001, 0x0002, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), 0xfdca },
	{ 0x0000, 0x2000, 0x0002, 0x0003, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), 0xfdca },
	{ 0x0000, 0x2003, 0x0002, 0x0004, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xfb4a },
	{ 0x0000, 0x2003, 0x0004, 0x0005, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xfb4a },
	{ 0x0000, 0x2005, 0x0004, 0x0006, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), 0xfdca },
	{ 0x0000, 0x2005, 0x0006, 0x0007, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), 0xfdca },
	{ 0x0000, 0x2004, 0x0002, 0x0001, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(-4.2093674323950836e-08), 0xff98 },
	{ 0x0000, 0x2004, 0x0001, 0x0006, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(-4.2093674323950836e-08), 0xff98 },
	{ 0x0000, 0x2008, 0x0009, 0x0000, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x0000 },
	{ 0x0000, 0x2009, 0x0007, 0x0000, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x0000 },
	{ 0x0000, 0x200a, 0x0009, 0x0008, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(4.2093674323950836e-08), 0xff98 },
	{ 0x0000, 0x200a, 0x0008, 0x000b, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(4.2093674323950836e-08), 0xff98 },
	{ 0x0000, 0x2000, 0x0007, 0x0001, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x0000 },
	{ 0x0000, 0x2007, 0x0006, 0x0001, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x0000 },
	{ 0x0000, 0x200a, 0x0005, 0x0007, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), 0xfdca },
	{ 0x0000, 0x200a, 0x0007, 0x0009, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), 0xfdca },
	{ 0x0000, 0x200b, 0x0003, 0x0005, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xfb4a },
	{ 0x0000, 0x200b, 0x0005, 0x000a, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xfb4a },
	{ 0x0000, 0x2008, 0x0000, 0x0003, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), 0xfdca },
	{ 0x0000, 0x2008, 0x0003, 0x000b, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), 0xfdca },
};

Vec3s gJumpTogglePlatformCol_vertices[12] = {
	{ 0, 0, 566 },
	{ 0, 104, 566 },
	{ -1206, 104, 566 },
	{ -1206, 0, 566 },
	{ -1206, 104, -566 },
	{ -1206, 0, -566 },
	{ 0, 104, -566 },
	{ 0, 0, -566 },
	{ 0, -104, 566 },
	{ 0, -104, -566 },
	{ -1206, -104, -566 },
	{ -1206, -104, 566 },
};

CollisionHeader gJumpTogglePlatformCol_collisionHeader = {
	-1206,
	-104,
	-566,
	0,
	104,
	566,
	12,
	gJumpTogglePlatformCol_vertices,
	20,
	gJumpTogglePlatformCol_polygons,
	gJumpTogglePlatformCol_polygonTypes,
	0,
	0,
	0
};
