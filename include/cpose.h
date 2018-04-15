#ifndef __IW4_CPOSE_H__
#define __IW4_CPOSE_H__

struct cpose_t
{
	unsigned __int16 lightingHandle;
	char eType;
	char eTypeUnion;
	char localClientNum ;
	short cullIn;
	char isRagdoll;
	int ragdollHandle;
	int killcamRagdollHandle;
	int physObjId;
	float origin[3];
	float angles[3];

	//Can be further reversed
	union EntityInfoUnion
	{
		int EntityInfo[15];
	};
	EntityInfoUnion m_placeholder;
};
#endif