#ifndef __IW4_CLIENTINFO_H__
#define __IW4_CLIENTINFO_H__

#include "lerpframe.h"
#include "clientcontrollers.h"

enum team_t
{
	TEAM_FREE = 0x0,
	TEAM_AXIS = 0x1,
	TEAM_ALLIES = 0x2,
	TEAM_SPECTATOR = 0x3,
	TEAM_NUM_TEAMS = 0x4,
};

struct clientInfo_s	
{
	typedef clientInfo_s this_type;
public:
	int infoValid;
	int nextValid;
	int clientNum;
	char name[16];
	team_t team;
	team_t oldteam;
	char clanIndex;
	char clanAbbrev[8];
	int score;
	int location;
	int health;
	char _pad[4];
	char model[64];
	char attachModelNames[6][64];
	char attachTagNames[6][64];
	int _pad2[6];
	lerpFrame_t legs;
	lerpFrame_t torso;
	float lerpMoveDir;
	float lerpLean;
	float playerAngles[3];
	int leftHandGun;
	int dobjDirty;
	clientControllers_t control;
	unsigned int clientConditions[17][2];
	int *pXAnimTree;
	int iDObjWeapon;
	char _pad3[16];
	int bDeulWeld;
	char _pad4[20];
};

#endif