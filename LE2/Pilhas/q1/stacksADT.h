#include <stdlib.h>
#include <stdbool.h>
#include "P3.h"

/*	ADT Prototype Declarations */
STACK* createStack  (void);
bool   pushStack    (STACK* stack, void* dataInPtr);
void*  popStack     (STACK* stack);
void*  stackTop     (STACK* stack);
bool   emptyStack   (STACK* stack);
bool   fullStack    (STACK* stack);
int    stackCount   (STACK* stack);
STACK* destroyStack (STACK* stack);

