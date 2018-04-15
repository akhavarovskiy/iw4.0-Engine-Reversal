#ifndef __IW4_LERPFRAME_H__
#define __IW4_LERPFRAME_H__

typedef struct lerpFrame_s
{
	float yawAngle;
	int yawing;
	float pitchAngle;
	int pitching;
	int animationNumber;
	struct animation_s *animation;
	int animationTime;
	float oldFramePos[3];
	float animSpeedScale;
	int oldFrameSnapshotTime;
}lerpFrame_t;

#endif /* __IW4_LERPFRAME_H__ */