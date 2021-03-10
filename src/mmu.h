#include "definitions.h"
#pragma once

class MMU {
     public:
          MMU();
          uint8_t readByte(uint16_t address);
          uint8_t memory[(int)65536];
};