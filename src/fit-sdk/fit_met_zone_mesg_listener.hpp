///////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Garmin International, Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2022 Garmin International, Inc.
///////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.84Release
// Tag = production/akw/21.84.00-0-g894a113c
///////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_MET_ZONE_MESG_LISTENER_HPP)
#define FIT_MET_ZONE_MESG_LISTENER_HPP

#include "fit_met_zone_mesg.hpp"

namespace fit
{

class MetZoneMesgListener
{
public:
    virtual ~MetZoneMesgListener() {}
    virtual void OnMesg(MetZoneMesg& mesg) = 0;
};

} // namespace fit

#endif // !defined(FIT_MET_ZONE_MESG_LISTENER_HPP)
