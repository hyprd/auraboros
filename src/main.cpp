#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <iostream>
#include "mmu.h"

//SDL_Window* gWindow;

int main(int argc, char *args[]) {
    mmu m;
    m.readByte(0x4000);
    // if(SDL_Init(SDL_INIT_VIDEO) < 0) {
    //     printf("Failure!\n");
    //     return 1;
    // } else {
    //     gWindow = SDL_CreateWindow("auraboros", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN );
    //     SDL_Delay(3000);       
    // }
    return 0;
}