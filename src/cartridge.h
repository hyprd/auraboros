#include "MMU.h"
#pragma once

class Cartridge {
    public:
        bool loadCartridge(char* name, MMU* mmu);
        void disassembleCartridge();
        void printCartridgeInfo(MMU* mmu);

        char title[16];
        char cartManufacturer[4];
        char gbType;
        char cartType;
        char sizeROM;
        char sizeRAM;
    
};