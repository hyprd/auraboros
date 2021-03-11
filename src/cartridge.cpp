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

bool Cartridge::loadCartridge(char* name, MMU* mmu) {
    FILE* f = fopen(name, "rb");
    if(f == 0) {
        printf("[ERROR] Could not find the file specified\n");
        return false;
    }
    fseek(f, 0, SEEK_END);
    uint32_t sizeROM = ftell(f);
    // reset the file pointer to the start
    rewind(f);
    if(fread(mmu->rom, 1, sizeROM, f) != sizeROM){
        printf("[ERROR] ROM could not be loaded successfully\n");
        return false;
    }
    fclose(f);
    return true;
}