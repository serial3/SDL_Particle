#include <iostream>
#include <SDL2/SDL.h>
#include "Screen.h"
using namespace std;
using namespace sdlparticle;


int	main(){

	Screen screen;

	if(!screen.init()) {
		cout << "Error initialising" << endl;
	}

	SDL_Event event;

	bool quit = false;
	while(!quit){
		//update particle
		//draw particle
		//check mesasges
		while (SDL_PollEvent(&event)) {
			if(event.type == SDL_QUIT) {
				quit = true;
			}
		}
		
	}
	screen.close();
	return 0;
};
