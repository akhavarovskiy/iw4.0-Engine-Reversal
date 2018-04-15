#ifndef _MW2_TRAJECTORY_H_
#define _MW2_TRAJECTORY_H_

enum trType_t
{
  TR_STATIONARY = 0x0,
  TR_INTERPOLATE = 0x1,
  TR_LINEAR = 0x2,
  TR_LINEAR_STOP = 0x3,
  TR_SINE = 0x4,
  TR_GRAVITY = 0x5,
  TR_ACCELERATE = 0x6,
  TR_DECELERATE = 0x7,
  TR_PHYSICS = 0x8,
  TR_RAGDOLL = 0x9,
};

struct trajectory_t
{
  trType_t trType;
  int trTime;
  int trDuration;
  float trBase[3];
  float trDelta[3];
};
#endif