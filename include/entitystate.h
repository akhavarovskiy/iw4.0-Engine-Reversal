#ifndef __IW4_ENTITYSTATE_H__
#define __IW4_ENTITYSTATE_H__

#include "lerpentitystate.h"

struct entityState_s
{
	int number;
	int eType;
	LerpEntityState lerp;
	int time2;
	int otherEntityNum;
	int attackerEntityNum;
	int groundEntityNum;
	int loopSound;
	int surfType;
	int index;
	int clientNum;
	int iHeadIcon;
	int iHeadIconTeam;
	int solid;
	unsigned int eventParm;
	int eventSequence;
	int events[4];
	int eventParms[4];
	int weapon;
	int weaponModel;
	int legsAnim;
	int torsoAnim;
	int ScaleEvent;
	int nade;
	float fTorsoPitch;
	float fWaistPitch;
	int partBits[4];
};

#endif