#ifndef __IW4_LERPENTITYSTATE_H__
#define __IW4_LERPENTITYSTATE_H__

#include "trajectory.h"

enum eFlags
{
	EF_STANDING  = 0x0,
	EF_CROUCHING = 0x4,
	EF_PHRONE    = 0x8,
	EF_INMENU    = 0x100,
	EF_FIRING    = 0x200,
	EF_TURRENT   = 0x800,
	EF_VAULTING  = 0x10000,
	EF_SCOPED    = 0x40000,
};

struct LerpEntityState
{
	int eFlags;
	trajectory_t pos;
	trajectory_t apos;
	
	union LerpEntityStateTypeUnion
	{
		int m_data[9];
	};
	LerpEntityStateTypeUnion m_placeholder;
};

#endif