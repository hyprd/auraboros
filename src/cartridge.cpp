#include "cartridge.h"
#include "definitions.h"

void Cartridge::printCartridgeInfo(MMU* mmu) {
    // https://gbdev.io/pandocs/#_0147-cartridge-type
    printf("----   ROM INFO   ----\nTitle: ");
    std::cout << +title << std::endl;
    if(strcmp(&gbType, "-128")) {
        std::cout << "CGB Flag: 1" << std::endl;
    } else {
        std::cout << "CGB Flag: 0" << std::endl;
    }
    std::cout << "Cartridge Type: "<< +cartType << std::endl;
    std::cout << "ROM Size: " << +sizeROM << std::endl;
    std::cout << "RAM Size: " << +sizeRAM << std::endl;

    printf("\n----------------------");
}

bool Cartridge::loadCartridge(char* name, MMU* mmu) {
    std::ifstream f (name, std::ios::binary);
    if(f.is_open()) {
        f.seekg(0x134);
        f.read(title, 16);
        // -------- CGB SUPPORT
        // -128 ->  YES
        // -64  ->  NO
        f.seekg(0x143);
        f.read(&gbType, 1);
        // -------- CARTRIDGE TYPE
        f.seekg(0x147);
        f.read(&cartType, 1);
        f.read(&sizeROM, 1);
        f.read(&sizeRAM, 1);

        for(int i = 0x0000; i < 0x3FFF; i++) {
            f.seekg(i);
            f.read(&mmu->rom[i], 1);
            //std::cout << +mmu->rom[i] << " " << i << std::endl;
        }
    }    
    return true;
}