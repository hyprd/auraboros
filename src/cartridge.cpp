#include "cartridge.h"
#include "definitions.h"

void Cartridge::printCartridgeInfo() {
    // Cartridge Title

    // GB Type (CGB/GB)

    // Cartridge Type
    // https://gbdev.io/pandocs/#_0147-cartridge-type

    // RAM Size

    // ROM Size

    // Japanese/non-japanese release

}

bool Cartridge::loadCartridge(char* name) {
    bool success = true;
    // read ROM 
    FILE* f = fopen(name, "rb");
    // get size of ROM
    if(f == 0) {
        printf("[ERROR] Could not find the file specified\n");
        success = false;
    }
    // start at beginning of stream, move to end 
    // catch size of SEEK_END then reposition stream to the start
    // bind file stream to MMU ROM
    // inspect size
    // close file 
    return success;
}