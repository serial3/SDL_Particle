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

	bool quit = false;
	while(true){
		//update particle
		//draw particle
		for(int y = 0; y < Screen::SCREEN_HEIGHT; y++) {
			for (int x=0; x < Screen::SCREEN_WIDTH; x++) {
				screen.setPixel(x, y, 128, 0, 255);
			} 
		}

		screen.setPixel(400, 300, 255, 255, 255);

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
