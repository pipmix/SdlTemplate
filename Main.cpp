#include "Game.h"

SDL_Window* g_window = NULL;
SDL_Surface* g_surface = NULL;

int main(int argc, char ** argv) {

	int screenWidth = 720;
	int screenHeight = 480;
	int bitsPerPixel = 32;
	bool isRunning = true;
	char* windowTitle = "Title";

	
	
	Game game;

	SDL_Init(SDL_INIT_EVERYTHING);
	//int imgFlags = IMG_INIT_PNG;
	IMG_Init(IMG_INIT_PNG);

	g_window = SDL_CreateWindow(windowTitle, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, screenWidth, screenHeight, 0);
	g_surface = SDL_GetWindowSurface(g_window);


	double deltaTime = 0;

	while (game.Run());


	game.CleanUp();
	SDL_FreeSurface(g_surface);
	g_surface = nullptr;
	SDL_DestroyWindow(g_window);
	g_window = nullptr;
	SDL_Quit();

	return 0;
	

}

