#include "Engine.h"


SDL_Surface* g_surface = nullptr;

int main(int argc, char ** argv) {


		Engine engine(720,480,"test");
		engine.Create();
		while (true) 
			if (!engine.Run())break;
		


		return 0;
	

}

