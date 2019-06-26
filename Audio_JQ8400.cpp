/*
  Audio_JQ8400.cpp - Library for playing sound via a JQ8400 module.
  Created by Heini Sturm, June 13, 2019.
  Released into the public domain.
*/

#include "Arduino.h"
#include "Audio_JQ8400.h"

Audio_JQ8400::Audio_JQ8400(HardwareSerial &_ser)
{
  ser = &_ser;
}

Audio_JQ8400::Audio_JQ8400()
{
  ser = &Serial;
}

void Audio_JQ8400::playIndex(uint16_t idx)
{
  ser->write(0xaa);
  ser->write(0x07);
  ser->write(0x02);
  
  ser->write((uint8_t)(idx>>8));
  ser->write((uint8_t)(idx&0xff));
  
  ser->write(0xaa + 0x07 + 0x02 + (uint8_t)(idx>>8) + (uint8_t)(idx&0xff));
}

void Audio_JQ8400::playNext()
{
  ser->write(0xAA);
  ser->write(0x06);
  ser->write((uint8_t)0x00);
  ser->write(0xB0);
}

void Audio_JQ8400::setVolume(uint8_t vol) 
{
  ser->write(0xAA);
  ser->write(0x13);
  ser->write(0x01);
  ser->write(vol);
  ser->write(0xaa + 0x01 + 0x13 + vol);
}

void Audio_JQ8400::setEQ(EQMode eq)
{
  ser->write(0xAA);
  ser->write(0x1A);
  ser->write(0x01);
  ser->write(eq);
  ser->write(0xaa + 0x1a + 0x01 + eq);
}
