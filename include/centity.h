#ifndef __IW4_CENTITY_H__
#define __IW4_CENTITY_H__

#include "cpose.h"
#include "entitystate.h"
#include "lerpentitystate.h"

enum entityType
{
	ET_GENERAL = 0x0,
	ET_PLAYER = 0x1,
	ET_PLAYER_CORPSE = 0x2,
	ET_ITEM = 0x3,
	ET_MISSILE = 0x4,
	ET_INVISIBLE = 0x5,
	ET_SCRIPTMOVER = 0x6,
	ET_SOUND_BLEND = 0x7,
	ET_FX = 0x8,
	ET_LOOP_FX = 0x9,
	ET_PRIMARY_LIGHT = 0xA,
	ET_MG42 = 0xB,
	ET_HELICOPTER = 0xC,
	ET_PLANE = 0xD,
	ET_VEHICLE = 0xE,
	ET_VEHICLE_COLLMAP = 0xF,
	ET_VEHICLE_CORPSE = 0x10,
	ET_EVENTS = 0x11,
};

struct centity_s
{
	cpose_t pose; // ^
	LerpEntityState entityState; // ^
	entityState_s nextState;
	int bNextValid ; //0x01D8 
	int bMuzzleFlash ; //0x01DC 
	int bTrailMade ; //0x01E0 
	int previousEventSequence; //0x01E4 
	int miscTime; //0x01E8 
	float lightingOrigin[3]; //0x01EC 
	struct XAnimTreen *tree; //0x01F8 
	int unkint[2];  
};

#endif /* __IW4_CENTITY_H__ */ 