#ifndef __IW4_TRACE_T_H__
#define __IW4_TRACE_T_H__

/* Not tested, then again not really needed */
enum TraceHitType
{
  TRACE_HITTYPE_NONE = 0x0,
  TRACE_HITTYPE_ENTITY = 0x1,
  TRACE_HITTYPE_DYNENT_MODEL = 0x2,
  TRACE_HITTYPE_DYNENT_BRUSH = 0x3,
};

/* cod4.idb trace_t structure, still applicable in MW2*/
struct trace_t
{
  float fraction;
  float normal[3];
  int surfaceFlags;
  int contents;
  const char *material;
  TraceHitType hitType;
  unsigned __int16 hitId;
  unsigned __int16 modelIndex;
  unsigned __int16 partName;
  unsigned __int16 partGroup;
  bool allsolid;
  bool startsolid;
  bool walkable;
};

#endif