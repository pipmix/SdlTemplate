#include "Object.h"

Object::Object()
{
}

RectI Object::GetSourceRect(){


	RectI sR;

	sR.x = (int)(pos.x - origin.x);
	sR.y = (int)(pos.y - origin.y);
	//sR.w = tileWidth;
	//sR.w = tileHeight;




	return sR;
}

void Object::Update(double dt)
{
}

void Object::Draw(){
	//SDL_Rect location = GetSourceRect();
	//SDL_Rect clip = GetFrameBounds();

	SDL_Rect destRect;

	destRect.x = pos.x;
	//destRect.y = Y;

	//SDL_BlitSurface(g_surface, &clip, g_surface, &location);


	//SDL_BlitSurface(Surf_Src, NULL, g_surface, &destRect);

}


void Object::SetImage(int num) {
	imageNumber = num;
	sourceRect = ASSET_IMG_PROPERTIES[imageNumber].GetSourceRect();

	sourceRect.x = 0;
	sourceRect.y = 0;
	sourceRect.w = ASSET_IMG_PROPERTIES[imageNumber].tileWidth;
	sourceRect.h = ASSET_IMG_PROPERTIES[imageNumber].tileHeight;
}