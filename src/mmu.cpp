#include "mmu.h"


uint8_t mmu::readByte(uint16_t addr) {
    if(addr < 0x4000) { return ROM_0[addr]; } 
    else if(addr < 0x8000) { return ROM_1[addr]; }
    return addr;
}


void mmu::writeByte(uint16_t addr, uint16_t val) {

}