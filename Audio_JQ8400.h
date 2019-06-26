/*
  Audio_JQ8400.h - Library for playing sound via a JQ8400 module.
  Created by Heini Sturm, June 13, 2019.
  Released into the public domain.
*/

#ifndef _AUDIO_JQ8400_H_
#define _AUDIO_JQ8400_H_

#include "Arduino.h"

class Audio_JQ8400
{
public:
	Audio_JQ8400(HardwareSerial &ser);
	Audio_JQ8400();

	enum EQMode {
		EQ_Normal = 0,
		EQ_POP,
		EQ_Rock,
		EQ_Jazz,
		EQ_Classic
	};

	void playIndex(uint16_t idx);
	void playNext();
	void setVolume(uint8_t vol);
	void setEQ(EQMode eq);
private:
	HardwareSerial *ser;
};

#endif
