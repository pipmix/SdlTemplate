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




}



void Game::Draw(){
	SDL_FillRect(g_surface, NULL, SDL_MapRGB(g_surface->format, 0x00, 0xFF, 0xFF));
	SDL_UpdateWindowSurface(g_window);


}

void Game::Load()
{
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