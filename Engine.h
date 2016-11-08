#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include "Game.h"

extern SDL_Surface* g_surface;

class Engine {

public:
	Engine(int w, int h, char* t);
	~Engine();
	void Create();
	void Update();
	void Draw();
	bool Run();


private:

	double m_prevTime;
	double m_currentTime;
	double m_deltaTime;
	int m_ScreenWidth;
	int m_ScreenHeight;
	int m_bitsPerPixel;
	bool m_isRunning;
	char* m_windowTitle;
	SDL_Window* m_window;
	//SDL_Surface* m_surface;
	SDL_Event	m_event;
	Game m_game;
};