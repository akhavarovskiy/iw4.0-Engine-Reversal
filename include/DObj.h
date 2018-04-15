#ifndef __IW4_DOBJ_H__
#define __IW4_DOBJ_H__

struct DSkelPartBits
{
  int anim[4];
  int control[4];
  int skel[4];
};

struct DObjAnimMat
{
  float quat[4];
  float trans[3];
  float transWeight;
};

struct DSkel
{
  DSkelPartBits partBits;
  int timeStamp;
  DObjAnimMat *mat;
};

struct DObj_s
{
  void *tree;
  unsigned __int16 duplicateParts;
  unsigned __int16 entnum;
  char duplicatePartsSize;
  char numModels;
  char numBones;
  unsigned int ignoreCollision;
  volatile int locked;
  DSkel skel;
  float radius;
  int hidePartBits[4];
  void **models;
};
	
#endif /* __IW4_DOBJ_H__ */