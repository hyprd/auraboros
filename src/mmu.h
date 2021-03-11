#include "definitions.h"
#pragma once

class MMU {
     public:
          MMU();
          uint8_t readByte(uint16_t address);
          uint8_t memory[MMU_MEMORY_SIZE] = {0};
          uint8_t rom[ROM_SIZE];
          void printROM();
};