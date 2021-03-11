#define SDL_MAIN_HANDLED
#include "definitions.h"
#include "mmu.h"
#include "cartridge.h"

int main(int argc, char *argv[]) {
    if(argc < 2) {
        printf("[ERROR] Please specify a .gb file to launch\n");
        printf("[ERROR] Usage: ./main [file]");
        return EXIT_FAILURE;
    }
    Cartridge* cart = new Cartridge;
    MMU* mmu = new MMU; 
    char* cartridgeName = argv[1];
    if(!cart->loadCartridge(cartridgeName, mmu)) {
        printf("[ERROR] Could not load cartridge\n");
        return EXIT_FAILURE;
    }


    return EXIT_SUCCESS;
}