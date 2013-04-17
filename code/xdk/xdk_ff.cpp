// Filename:-	win_video.cpp
//
// leave this as first line for PCH reasons...
//
#include "../server/exe_headers.h"

#include "xdk_local.h"

//#include "../client/client.h"
//#include "../client/fffx.h"
//#include "../ff/common_headers.h"
////#include "../ff/ff_public.h"

typedef int	ffHandle_t;
typedef int	ffFX_e;

void CL_InitFF( void )
{
}

void CL_ShutdownFF( void )
{
}

qboolean IsLocalClient( int clientNum )
{
	return false;
}

void CL_FF_Start( ffHandle_t ff, int clientNum )
{
}

void CL_FF_Stop( ffHandle_t ff, int clientNum )
{
}


void CL_FF_AddLoopingForce( ffHandle_t ff, int clientNum )
{
}


void _FF_PlayFXSlot(int iSlotNum)
{

}


#ifdef _IMMERSION
int FF_StopAll(void)
{
	return 0;
}
void FF_Stop(ffFX_e fffx)
{

}
void FF_EnsurePlaying(ffFX_e fffx)
{

}
void FF_Play(ffFX_e fffx)
{

}
#else
qboolean FF_StopAll(void)
{
	return false;
}
qboolean FF_Stop(ffFX_e fffx)
{
	return false;
}

qboolean FF_EnsurePlaying(ffFX_e fffx)
{
	return false;
}
qboolean FF_Play(ffHandle_t ff)
{
	return false;
}
#endif

void FF_Shutdown(void)
{

}

qboolean FF_Init( void )
{
	return false;
}

ffHandle_t FF_Register( const char *name, int channel, qboolean notfound )
{
	ffHandle_t ff = FF_HANDLE_NULL;

	return ff;
}

int FF_Shake(int intensity, int duration)
{
	return 0;
}
