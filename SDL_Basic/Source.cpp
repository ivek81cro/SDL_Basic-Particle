#include "SDL.h"
#include <iostream>

int main(int argc, char* argv[])
{
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		return 1;
	}
	return 0;
}