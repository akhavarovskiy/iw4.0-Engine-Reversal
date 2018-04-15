#ifndef __IW4_GFX_VIEWINFO_H__
#define __IW4_GFX_VIEWINFO_H__

struct GfxViewport
{
	__int32 x;
	__int32 y;
	__int32 width; 
	__int32 height; 
};

struct GfxSceneDef
{
	__int32 time; 
	float floatTime; 
	float viewOffset[3]; 
};

struct GfxViewParms
{
#ifdef __D3DX9_H__
	D3DXMATRIX viewMatrix;
	D3DXMATRIX projectionMatrix; 
	D3DXMATRIX viewProjectionMatrix; 
	D3DXMATRIX inverseViewProjectionMatrix; 
#else
	float viewMatrix[4][4];
	float projectionMatrix[4][4]; 
	float viewProjectionMatrix[4][4];
	float inverseViewProjectionMatrix[4][4]; 
#endif
	float origin[3]; 
	float axis[3][3]; 
	__int32 pad[2];
	float scalex;
	float scaley;
	float fovX;
	float fovY;
	char _pad[8];
};

struct GfxViewInfo_s
{
	GfxViewParms viewParms;
	GfxViewport sceneViewport; 
	GfxViewport displayViewport;
	GfxViewport windowViewport;  
	GfxSceneDef sceneDef; 
};

#endif /* __IW4_LERPFRAME_H__ */

