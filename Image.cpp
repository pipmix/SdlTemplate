#include "Image.h"

Image::Image(){

	m_imageW = m_imageH = m_numCol = m_numRows = m_tileW = m_tileH = 0;
	m_image = NULL;
	m_isTileMap = false;

	
}

Image::~Image(){
	SDL_FreeSurface(m_image);
}

void Image::LoadImage(std::string fn){
	m_name = fn;
	std::string completePath = IMAGE_PATH + m_name;
	
	m_image = IMG_Load(completePath.c_str());
	//m_image = IMG_Load("test.bmp");

	if (m_image == NULL)SDL_Quit();
	//printf( "Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError() );
}

SDL_Surface * Image::GetImage()
{
	return m_image;
}

void Image::SetTileMapProp(int tW, int tH, int nC, int nR){
	m_numCol = nC;
	m_numRows = nR;
	m_tileW = tW;
	m_tileH = tH;
	m_isTileMap = true;
}

/*	
m_name = fn;
	std::string completePath = IMAGE_PATH + m_name;
	
	SDL_Surface* temp = IMG_Load(completePath.c_str());
	
	m_image = SDL_ConvertSurface(temp, g_surface->format, NULL);
	//m_image = IMG_Load("test.bmp");

	if (m_image == NULL)SDL_Quit();
	//printf( "Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError() );
	SDL_FreeSurface(temp);
*/