#include "Timer.h"

Timer::Timer(){
	m_prevTime = m_currentTime = m_deltaTime = 0.0f;
}

void Timer::Update(){
	m_prevTime = m_currentTime;
	m_currentTime = SDL_GetTicks();
	m_deltaTime = (m_currentTime - m_prevTime) / 1000.0;
}

double Timer::GetDelta(){
	return m_deltaTime;
}
