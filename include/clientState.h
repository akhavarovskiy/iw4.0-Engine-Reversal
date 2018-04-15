#ifndef __IW4_CLIENTSTATE_H__
#define __IW4_CLIENTSTATE_H__

#include "clientinfo.h"

struct clientState_s
{
  int clientIndex;
  team_t team;
  int modelindex;
  int attachModelIndex[7];
  int attachTagIndex[7];
  char name[24];
  int rank;
  int perks;
  int voiceConnectivityBits;
  int clanIndex;
  char clanAbbrev[8];
  int attachedVehEntNum;
  int attachedVehSlotIndex;
};

#endif