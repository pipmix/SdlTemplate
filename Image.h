#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <string>

const std::string IMAGE_PATH = "C:/Box/Box Sync/Data/Images/";


extern SDL_Surface* g_surface;

class Image {
public:
	Image();
	~Image();

	void LoadImage(std::string fn);
	SDL_Surface* GetImage();
	void SetTileMapProp(int tW, int tH, int nC, int nR);

private:
	SDL_Surface* m_image;
	std::string m_name;
	int m_imageW;
	int m_imageH;
	int m_numCol;
	int m_numRows;
	int m_tileW;
	int m_tileH;
	bool m_isTileMap;
};