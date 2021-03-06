/* $Id: unit.h 1836 2011-06-20 20:10:22Z truebrain $ */

/** @file src/pool/unit.h %Unit pool definitions. */

#ifndef POOL_UNIT_H
#define POOL_UNIT_H

enum {
	UNIT_INDEX_MAX = 102,                                   /*!< The highest possible index for any Unit. */

	UNIT_INDEX_INVALID = 0xFFFF
};

struct PoolFindStruct;

extern struct Unit *g_unitFindArray[UNIT_INDEX_MAX];
extern uint16 g_unitFindCount;

extern struct Unit *Unit_Get_ByIndex(uint16 index);
extern struct Unit *Unit_Find(struct PoolFindStruct *find);

extern void Unit_Init();
extern void Unit_Recount();
extern struct Unit *Unit_Allocate(uint16 index, uint8 type, uint8 houseID);
extern void Unit_Free(struct Unit *u);

#endif /* POOL_UNIT_H */
