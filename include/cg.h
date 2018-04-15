#ifndef __IW4_CLIENTGAME_H_
#define __IW4_CLIENTGAME_H_

#include "refdef.h"

struct cg_s
{
	int clientNum; 
	int localClientNum;  
	int demoType; 
	int cubemapShot;  
	int cubemapSize;  
	int renderScreen;  
	int latestSnapshotNum;  
	int latestSnapshotTime;
	struct snapshot_s * snap;
	struct snapshot_s * nextSnap;
	char _pad[0x67400];
	struct refdef_s refdef;
	float refdefViewAngles[3];	
	char _pad0[21992];
	int v_dmg_time;  
	float v_dmg_pitch;  
	float v_dmg_roll;  
	float fBobCycle;  
	float xyspeed; 
	float kickAVel[3];  
	float kickAngles[3]; 
	float offsetAngles[3]; 
	float gunAngles[3];
	float gunOfs[3];  
	float weaponModel[4][4];
};
#endif