#include <iostream>
#include <SDL2/SDL.h>
#include "Screen.h"
#include <math.h>
using namespace std;
using namespace sdlparticle;


int	main(){

	Screen screen;

	if(!screen.init()) {
		cout << "Error initialising" << endl;
	}


	while(true){
		//update particle
		//draw particle
		int elapsed = SDL_GetTicks();
		unsigned char green = (1+ sin(elapsed * 0.01)) * 128;


		for(int y = 0; y < Screen::SCREEN_HEIGHT; y++) {
			for (int x=0; x < Screen::SCREEN_WIDTH; x++) {
				screen.setPixel(x, y, 128, green, 255);
			} 
		}

		//draw the box
		screen.update();
		
		//check mesasges
		if(!screen.processEvents()) {
			break;
		}
		
	}


	screen.close();
	return 0;
};
