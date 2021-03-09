#include "definitions.h"

class mmu {

    /* 
       --- MEMORY MAP ---
       ---> ROM
            0x0000 0x3FFF - 16KB ROM BANK (FIXED)
            0x4000 0x7FFF - 16KB ROM BANK (SWITCHABLE)
       --> RAM
            0x8000 0x9FFF - 8KB VRAM 
            0xA000 0xBFFF - 8KB EXT. RAM
            0xC000 0xCFFF - 4KB WRAM
            0xD000 0xDFFF - 4KB WRAM (SWITCHABLE IN CGB)
            0xE000 0xFDFF - ECHO RAM (DON'T USE)
            0xFE00 0xFE9F - SPRITE ATTRIBUTE TABLE (OAM)
            0xFF80 0xFFFE - HRAM
       --> REGISTERS      
            0xFF00 0xFF7F - I/O REGISTERS
            0xFFFF 0xFFFF - INTERRUPTS ENABLE REGISTER
    */

    public:
        std::vector<uint8_t> ROM_0;
        std::vector<uint8_t> ROM_1;
        std::vector<uint8_t> VRAM;
        std::vector<uint8_t> WRAM;
        std::vector<uint8_t> ERAM;
        std::vector<uint8_t> OAM;
        std::vector<uint8_t> HRAM;
        bool rangeCheck(uint16_t address, uint16_t lo, uint16_t hi);
        uint16_t readByte(uint16_t address);

};