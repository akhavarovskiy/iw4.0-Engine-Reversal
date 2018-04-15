#ifndef __IW4_CLIENTGAMESERVER_H__
#define __IW4_CLIENTGAMESERVER_H__

#include "clientinfo.h"
#include "shellshockparms.h"

struct cgs_s
{
  int viewX;
  int viewY;
  int viewWidth;
  int viewHeight;
  float viewAspect;
  int serverCommandSequence;
  int processedSnapshotNum;
  int localServer;
  char gametype[32];
  char szHostName[256];
  char _pad[0x4];
  int maxclients;
  int privateClients;//not there
  char mapname[64];
  int gameEndTime;
  int voteTime;
  int voteYes;
  int voteNo;
  char voteString[256];
  int redCrosshair;
  int *gameModels[512];
  shellshock_parms_t holdBreathParams;
  char teamChatMsgs[8][160];
  int teamChatMsgTimes[8];
  int teamChatPos;
  int teamLastChatPos;
  float compassWidth;
  float compassHeight;
  float compassY;
  struct clientInfo_s corpseinfo[8];
};

#endif /* __IW4_CLIENTGAMESERVER_H__ */