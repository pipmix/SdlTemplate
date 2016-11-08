#pragma once
#include <SDL.h>
#include <SDL_image.h>


extern SDL_Surface* g_surface;

struct Texture {
	SDL_Surface* tex;
	char* name;
	int w;
	int h;
	int numTilesW;
	int numTilesH;

	Texture(){
		tex = nullptr;
		name = nullptr;
		w = h = numTilesW = numTilesH = 0;

	}
};

class Data {
public:

			Data();
	bool	LoadImage(char* fn);

private:

	Texture textures[25];
};


enum DATA_TEXTURES { DT_PLAYER, DT_EN1};