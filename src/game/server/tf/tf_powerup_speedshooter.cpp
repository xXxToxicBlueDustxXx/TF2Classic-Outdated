//====== Copyright � 1996-2013, Valve Corporation, All rights reserved. =======//
//
// Purpose: The Speedshooter powerup. A powerup which increases your firing and
//			reload time for a certain (yet undetermined) period of time
//
//=============================================================================//
#include "cbase.h"
#include "tf_powerup_speedshooter.h"

// memdbgon must be the last include file in a .cpp file!!!
#include "tier0/memdbgon.h"

//=============================================================================

BEGIN_DATADESC( CTFPowerupSpeedshooter )
END_DATADESC()

LINK_ENTITY_TO_CLASS( item_powerup_speedshooter, CTFPowerupSpeedshooter );

//=============================================================================

//-----------------------------------------------------------------------------
// Purpose: Constructor 
//-----------------------------------------------------------------------------
CTFPowerupSpeedshooter::CTFPowerupSpeedshooter()
{
	m_flEffectDuration = 15.0f;
}
