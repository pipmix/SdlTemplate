#include "Game.h"

Game::Game():m_isRunning(true){
	
}

bool Game::Run() {

	ProcessEvents();
	Update();
	Draw();
	return m_isRunning;
}

void Game::Update(){
	m_timer.Update();
	double delta = m_timer.GetDelta();

	if (load == false)Load();
	x1 += 0.05;
	x2 += 1;
}

void Game::Draw(){
	SDL_FillRect(g_surface, NULL, SDL_MapRGB(g_surface->format, 0x00, 0xFF, 0xFF));
	

	SDL_Rect sourceRect;
	SDL_Rect destRect;

	sourceRect.x = 0;
	sourceRect.y = 0;
	sourceRect.w = 32;
	sourceRect.h = 32;


	destRect.x = x1;
	destRect.y = 32;
	destRect.w = 64;
	destRect.h = 64;


	//SDL_BlitSurface(i01.GetImage(), &sourceRect, g_surface, &destRect);
	SDL_BlitSurface(i01.GetImage(), 0, g_surface, &destRect);

	destRect.x = (int)x1;
	destRect.y = 96;

	SDL_BlitSurface(i01.GetImage(), 0, g_surface, &destRect);

	destRect.x = x2;
	destRect.y = 128;

	SDL_BlitSurface(i01.GetImage(), 0, g_surface, &destRect);
	SDL_UpdateWindowSurface(g_window);
}

void Game::Load(){
	//i01.LoadImage("test.bmp");
	i01.LoadImage("hudBars.png");
	i02.LoadImage("char.png");
	i02.SetTileMapProp(32, 32, 8, 8);
	load = true;
}

void Game::CleanUp()
{
}

void Game::ProcessEvents(){
	while (SDL_PollEvent(&m_event)) {
		switch (m_event.type) {
		case SDL_QUIT:
			m_isRunning = false;
			break;
		case SDL_KEYDOWN:
			switch (m_event.key.keysym.sym) {
			case SDLK_ESCAPE:
				m_isRunning = false;
				break;
			}
			break;
		}
	}
}