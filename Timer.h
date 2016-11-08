#pragma once
#include <SDL.h>

class Timer {
public:
	Timer();
	void Update();
	double GetDelta();
private:
	
	double m_prevTime;
	double m_currentTime;
	double m_deltaTime;



};