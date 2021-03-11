#include "MMU.h"
#pragma once

class Cartridge {
    public:
        bool loadCartridge(char* name, MMU* mmu);
        void disassembleCartridge();
        void printCartridgeInfo();
};