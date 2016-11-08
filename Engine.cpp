#include "Engine.h"

Engine::Engine(int w, int h, char* t) :
	m_prevTime(0.0f),
	m_currentTime(0.0f),
	m_deltaTime(0.0f),
	m_ScreenWidth(w),
	m_ScreenHeight(h),
	m_window(nullptr),
	//m_surface(nullptr),
	m_bitsPerPixel(32),
	m_isRunning(true),
	m_windowTitle(t){
	
}

Engine::~Engine()
{
}

void Engine::Create(){
	SDL_Init(SDL_INIT_VIDEO);

	m_window = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, m_ScreenWidth, m_ScreenHeight, SDL_WINDOW_SHOWN);
	g_surface = SDL_GetWindowSurface(m_window);

}

void Engine::Update(){
	m_prevTime = m_currentTime;
	m_currentTime = SDL_GetTicks();
	m_deltaTime = (m_currentTime - m_prevTime) / 1000.0;


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

	if (!m_game.Update(m_deltaTime))m_isRunning = false;


}

void Engine::Draw()
{
	SDL_FillRect(g_surface, NULL, SDL_MapRGB(g_surface->format, 0x00, 0xFF, 0xFF));
	SDL_UpdateWindowSurface(m_window);
	m_game.Draw();
}


bool Engine::Run() {
	Update();
	Draw();
	return m_isRunning;


}