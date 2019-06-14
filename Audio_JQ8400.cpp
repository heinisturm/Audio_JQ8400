/*
  Audio_JQ8400.cpp - Library for playing sound via a JQ8400 module.
  Created by Heini Sturm, June 13, 2019.
  Released into the public domain.
*/

#include "Arduino.h"
#include "Audio_JQ8400.h"

void Audio_JQ8400::playIndex(uint16_t idx)
{
  Serial.write(0xaa);
  Serial.write(0x07);
  Serial.write(0x02);
  
  Serial.write((uint8_t)(idx>>8));
  Serial.write((uint8_t)(idx&0xff));
  
  Serial.write(0xaa + 0x07 + 0x02 + (uint8_t)(idx>>8) + (uint8_t)(idx&0xff));
}

void Audio_JQ8400::playNext()
{
  Serial.write(0xAA);
  Serial.write(0x06);
  Serial.write((uint8_t)0x00);
  Serial.write(0xB0);
}

void Audio_JQ8400::setVolume(uint8_t vol) 
{
  Serial.write(0xAA);
  Serial.write(0x13);
  Serial.write(0x01);
  Serial.write(vol);
  Serial.write(0xaa + 0x01 + 0x13 + vol);
}

void Audio_JQ8400::setEQ(EQMode eq)
{
  Serial.write(0xAA);
  Serial.write(0x1A);
  Serial.write(0x01);
  Serial.write(eq);
  Serial.write(0xaa + 0x1a + 0x01 + eq);
}
