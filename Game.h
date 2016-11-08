#pragma once
#include "ObjectManager.h"

enum GameState{ GS_TitleScreen, GS_TitleMenu, GS_GameStart, GS_GameMenu};

class Game {


public:
			Game();
	bool	Update(double dt);
	void	Draw();
	void	Load();


private:

	GameState gameState;
	ObjectManger objectManger;
};