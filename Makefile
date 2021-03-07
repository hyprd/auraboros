GXX = g++
DEPS = src/main.cpp
ARGS = -g -Wall

# Specify where SDL2's include and library are located here:
SDL_DEVELOPMENT_INC := C:\libs\SDL2\x86_64-w64-mingw32\include\SDL2
SDL_DEVELOPMENT_DIR := C:\libs\SDL2\x86_64-w64-mingw32\lib

INC = -I$(SDL_DEVELOPMENT_INC)
LIB = -L$(SDL_DEVELOPMENT_DIR)

all:
	$(GXX) $(ARGS) $(INC) $(DEPS) -o main $(LIB) -lSDL2 -lSDL2main
	
clean:
	rm main.exe
