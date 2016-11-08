#include "Image.h"

Image::Image()
{

		m_image = nullptr;

		m_w = m_h = m_numTilesW = m_numTilesH = 0;

	
}

Image::~Image()
{
	SDL_FreeSurface(m_image);
}

bool Image::LoadImage(std::string fn)
{
	return false;
}

SDL_Surface * Image::GetImage(std::string fn)
{
	return nullptr;
}
