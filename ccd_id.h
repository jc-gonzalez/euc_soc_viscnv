/******************************************************************************
 * File:    ccd_id.h
 *          This file is part of Tools
 *
 * Domain:  tools.CcdId
 *
 * Last update:  1.0
 *
 * Date:    20191126
 *
 * Author:  J C Gonzalez
 *
 * Copyright (C) 2015-2020 Euclid SOC Team / J C Gonzalez
 *_____________________________________________________________________________
 *
 * Topic: General Information
 *
 * Purpose:
 *   Declare CcdId class
 *
 * Created by:
 *   J C Gonzalez
 *
 * Status:
 *   Prototype
 *
 * Dependencies:
 *   TBD
 *
 * Files read / modified:
 *   none
 *
 * History:
 *   See <Changelog> file
 *
 * About: License Conditions
 *   See <License> file
 *
 ******************************************************************************/

#ifndef CCDID_H
#define CCDID_H

//============================================================
// Group: External Dependencies
//============================================================

//------------------------------------------------------------
// Topic: System headers
//   - iostream
//------------------------------------------------------------
#include <iostream>

//------------------------------------------------------------
// Topic: External packages
//------------------------------------------------------------

//------------------------------------------------------------
// Topic: Project headers
//------------------------------------------------------------

//==========================================================================
// Class: CcdId
//==========================================================================
class CcdId {

public:
    //----------------------------------------------------------------------
    // Constructor
    //----------------------------------------------------------------------
    CcdId();

    //----------------------------------------------------------------------
    // Destructor
    //----------------------------------------------------------------------
    virtual ~CcdId();

protected:

private:
    //----------------------------------------------------------------------
    // Method: init
    //----------------------------------------------------------------------
    virtual void init();

private:
    int id;
};

#endif // CCDID_H
