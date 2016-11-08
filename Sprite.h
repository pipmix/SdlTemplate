#pragma once
#include "Image.h"


class Sprite {

public:
	Sprite();
	~Sprite();

	void Draw();
	void Update(double delta);


	SDL_Rect GetSourceRectIndex(int index);
	SDL_Rect GetSourceRectIndex(int index_X, int index_Y);

	void SetSourceRect(int index);
	void SetSourceRect(int index_X, int index_Y);

	void LoadImage(std::string fn);
	void SetTileMapProp(int tW, int tH, int nC, int nR);

private:
	SDL_Rect m_sourceRect;
	Image* m_image;

	int m_currentAnimFrame;
};