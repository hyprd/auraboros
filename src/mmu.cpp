#include "mmu.h"

bool mmu::rangeCheck(uint16_t address, uint16_t lo, uint16_t hi) {
    return address >= lo && address <= hi;
}

uint16_t mmu::readByte(uint16_t address) {
    // ROM BANKS
    // SWITCHABLE BANKS (0x4000 - 0x7FFF) ARE CONTROLLED BY THE MBC
    if(rangeCheck(address, 0x0000, 0x7FFF)) { return 0; }
    // VRAM
    if(rangeCheck(address, 0x8000, 0x9FFF)) { return 0; } 
    // EXT. RAM
    if(rangeCheck(address, 0xA000, 0xBFFF)) { return 0; }
    // WRAM
    if(rangeCheck(address, 0xC000, 0xDFFF)) { return 0; } 
    // ECHO RAM
    if(rangeCheck(address, 0xE000, 0xFDFF)) { return 0; } 
    // OAM
    if(rangeCheck(address, 0xFE00, 0xFE9F)) { return 0; } 
    // NOT USED
    if(rangeCheck(address, 0xFEA0, 0xFEFF)) { return 0; } 
    // I/O REGISTERS
    if(rangeCheck(address, 0xFF00, 0xFF7F)) { return 0; } 
    // HRAM
    if(rangeCheck(address, 0xFF80, 0xFFFE)) { return 0; } 
    // INTERRUPT ENABLE REGISTER
    if(address == 0xFFFF) { return 0; } 
    return address;
}
