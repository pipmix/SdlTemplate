#pragma once
#include <SDL.h>
#include "BassClasses.h"

extern SDL_Surface* g_surface;

class Object {
public:
			Object();
	RectI GetSourceRect();

	void Update(double dt);
	void Draw();

private:
	Vect2 pos;
	Vect2 origin;
	Vect2 vel;
	RectI sourceRect;




};