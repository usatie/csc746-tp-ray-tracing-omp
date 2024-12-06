#ifndef LIKWID_STUFF_H
#define LIKWID_STUFF_H
#ifdef LIKWID_PERFMON
#include <likwid.h>
#define MY_MARKER_REGION_NAME "RayTracing_Region"
#else
#define LIKWID_MARKER_INIT
#define LIKWID_MARKER_THREADINIT
#define LIKWID_MARKER_SWITCH
#define LIKWID_MARKER_REGISTER(regionTag)
#define LIKWID_MARKER_START(regionTag)
#define LIKWID_MARKER_STOP(regionTag)
#define LIKWID_MARKER_CLOSE
#define LIKWID_MARKER_GET(regionTag, nevents, events, time, count)
#endif
#endif
