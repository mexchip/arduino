/*
 * Firmata is a generic protocol for communicating with microcontrollers
 * from software on a host computer. It is intended to work with
 * any host computer software package.
 *
 * To download a host software package, please clink on the following link
 * to open the download page in your default browser.
 *
 * http://firmata.org/wiki/Download
 */

/*
  Copyright (C) 2006-2008 Hans-Christoph Steiner.  All rights reserved.
  Copyright (C) 2010-2011 Paul Stoffregen.  All rights reserved.
  Copyright (C) 2009 Shigeru Kobayashi.  All rights reserved.
  Copyright (C) 2009-2013 Jeff Hoefs.  All rights reserved.
  Copyright (C) 2013 Norbert Truchsess. All rights reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  See file LICENSE.txt for further informations on licensing terms.

  formatted using the GNU C formatting and indenting
*/

#ifndef ToneFirmata_h
#define ToneFirmata_h

#include <Firmata.h>
#include <utility/FirmataFeature.h>

#define TONE_TONE     0x00
#define TONE_NO_TONE  0x01

class ToneFirmata:public FirmataFeature
{
public:
  boolean handlePinMode(byte pin, int mode);
  void handleCapability(byte pin);
  boolean handleSysex(byte command, byte argc, byte *argv);
  void reset();
};

#endif