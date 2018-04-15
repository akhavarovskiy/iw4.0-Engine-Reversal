#ifndef __IW4_REFDEF_H__
#define __IW4_REFDEF_H__

struct refdef_s
{
	unsigned int x;
	unsigned int y;
	unsigned int width;
	unsigned int height;
	float tanHalfFovX;
	float tanHalfFovY;
	float vieworg[3];
	float viewaxis[3][3];
	char _unk[4];
	float viewOffset[3];
	int time;
	char _pad[16132];
};
#endif