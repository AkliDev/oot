#ifndef Z_TREE_ELEVATOR_H
#define Z_TREE_ELEVATOR_H

#include "ultra64.h"
#include "global.h"

struct TreeElevator;

typedef void (*TreeElevatorActionFunc)(struct TreeElevator*, PlayState*);


typedef struct TreeElevator {
    DynaPolyActor dyna;
    TreeElevatorActionFunc actionFunc;
} TreeElevator; 

#endif