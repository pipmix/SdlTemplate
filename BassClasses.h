#pragma once

struct Vect2 {
	float x;
	float y;
	Vect2()						:x(0.0f),	y(0.0f) {}
	Vect2(float xx, float yy)	:x(xx),		y(yy)	{}

};

struct RectF {
	float x;
	float y;
	float w;
	float h;
	RectF() :x(0.0f), y(0.0f), w(0.0f), h(0.0f) {}
};
struct RectI {
	int x;
	int y;
	int w;
	int h;
	RectI() :x(0), y(0), w(0), h(0) {}

};

