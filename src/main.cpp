#define SDL_MAIN_HANDLED
#include "definitions.h"
#include "mmu.h"

char* cartName; 

int main(int argc, char *argv[]) {
    if(argc < 2) {
        printf("[ERROR] Please specify a .gb file to launch\n");
        printf("[ERROR] Usage: ./main [file]");
        return EXIT_FAILURE;
    }
    MMU* mmu = new MMU; 
    
    return 0;
}