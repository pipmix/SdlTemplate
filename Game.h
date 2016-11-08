#pragma once
#include <SDL.h>



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
};