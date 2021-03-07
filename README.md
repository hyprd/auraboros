# auraboros

64-bit Windows only.

## Requirements
[SDL2](https://www.libsdl.org/download-2.0.php)

MinGW64 via [winlibs](http://winlibs.com/)

## Building
Extract SDL2.

Point the project makefile to your local *include* and *lib* directories (you want the ones in `x86_64-w64-mingw32`).

`cd` to project folder and run `make`.

Start with `./main`.

Make sure MinGW64 and the `bin` folder of SDL2 are on your PATH.
