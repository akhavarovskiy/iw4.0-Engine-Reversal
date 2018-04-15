#ifndef __IW4_CLIENTACTIVE_H__
#define __IW4_CLIENTACTIVE_H__

// credit: kolbybrooks
struct usercmd_s
{
	int			serverTime;
	int			buttons;
	int			angles[3];
	int			weapon;
	signed char	forwardmove, rightmove, upmove;
	char		unkPad0[0xC];
};

// partial struct, full struct is much larger.
struct clientActive_s
{
	float fViewAngles[3];
	usercmd_s cmds[128];
	int cmdNumber; 
};

#endif /* __IW4_CLIENTACTIVE_H__ */
