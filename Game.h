#pragma once
#include <SDL.h>
#include "Image.h"
#include "Timer.h"
#include "Data.h"

extern SDL_Window* g_window;
extern SDL_Surface* g_surface;

enum GameState{ GS_TitleScreen, GS_TitleMenu, GS_GameStart, GS_GameMenu};

class Game {


public:
			Game();

	bool	Run();
	void	ProcessEvents();
	void	Update();
	void	Draw();
	void	Load();
	void	CleanUp();


private:

	GameState gameState;
	bool m_isRunning;
	SDL_Event m_event;
	Image i01;
	Image i02;
	bool load = false;
	Timer m_timer;

	Data gameData;


	float x1 = 0.0f;
	float y1 = 0.0f;
	int x2 = 0;
	int y2 = 0;
};