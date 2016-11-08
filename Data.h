#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <string>

const std::string tPath = "C:/Box/Box Sync/Data/Images";
const char* TexturePath = "C:/Box/Box Sync/Data/Images";

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
	//bool	LoadImage(std::string fn);
bool Data::LoadImage(char * fn);

private:

	Texture textures[25];
};


enum DATA_TEXTURES { DT_PLAYER, DT_EN1};

//Textures tt[12];