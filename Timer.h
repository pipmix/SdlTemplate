#pragma once
#include <SDL.h>

class Timer {
public:
	
	void Update();
	double GetDelta();
private:
	Timer();
	double m_prevTime;
	double m_currentTime;
	double m_deltaTime;



};