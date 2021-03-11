#include "cartridge.h"

void printCartridgeInfo() {
    // Cartridge Title

    // GB Type (CGB/GB)

    // Cartridge Type
    // https://gbdev.io/pandocs/#_0147-cartridge-type

    // RAM Size

    // ROM Size

    // Japanese/non-japanese release

}

bool loadCartridge() {
    bool success = true;
    // read ROM 
    // get size of ROM
    // start at beginning of stream, move to end 
    // catch size of SEEK_END then reposition stream to the start
    // bind file stream to MMU ROM
    // inspect size
    // close file 
    // disassembleCartridge()
    return success;
}