#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <string>

const std::string IMAGE_PATH = "C:/Box/Box Sync/Data/Images/";
const char* TexturePath = "C:/Box/Box Sync/Data/Images/";

extern SDL_Surface* g_surface;

class Image {
public:
	Image();
	~Image();

	bool LoadImage(std::string fn);
	SDL_Surface* GetImage(std::string fn);

private:
	SDL_Surface* m_image;
	std::string m_name;
	int m_w;
	int m_h;
	int m_numTilesW;
	int m_numTilesH;


};