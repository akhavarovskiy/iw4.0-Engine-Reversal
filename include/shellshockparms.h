#ifndef __IW4_SHELLSHOCK_PARAMS_H__
#define __IW4_sHELLSHOCK_PARAMS_H__

struct shellshock_parms_t
{
	int blurredFadeTime; //0x0000 
	int blurredEffectTime; //0x0004 
	int flashWhiteFadeTime; //0x0008 
	int flashShotFadeTime; //0x000C 
	int type; //0x0010 
	int fadeTime; //0x0014 
	float kickRate; //0x0018 
	float kickRadius; //0x001C 
	char affect; //0x0020 
	char loop[64]; //0x0021 
	char loopSilent[64]; //0x0061 
	char end[64]; //0x00A1 
	char endAbort[64]; //0x00E1 
	char _pad[3]; //0x0121 
	int fadeInTime; //0x0124 
	int fadeOutTime; //0x0128 
	float drylevel; //0x012C 
	float wetlevel; //0x0130 
	char roomtype[16]; //0x0134 
	float N00B1D996[64]; //0x0144 
	int modEndDelay; //0x0244 
	int loopFadeTime; //0x0248 
	int loopEndDelay; //0x024C 
	int bAffect; //0x0250 
	int fadeTime2; //0x0254 
	float mouseSensitivity; //0x0258 
	float maxPitchSpeed; //0x025C 
	float maxYawSpeed; //0x0260 
	int affect2; //0x0264 
};//Size=0x0268

#endif /* _MW2_SHELLSHOCK_PARAMS_H_ */