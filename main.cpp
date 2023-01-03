#include <iostream>
#include <SDL2/SDL.h>
#include "Screen.h"
#include "Particle.h"
#include "Swarm.h"
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
using namespace sdlparticle;


int	main(){

	srand(time(NULL));

	Screen screen;

	if(!screen.init()) {
		cout << "Error initialising" << endl;
	}
	
	Swarm swarm;


	while(true){
		//update particle
		//draw particle

	int elapsed = SDL_GetTicks();

	screen.clear();
	swarm.update();
	
	unsigned char green = (unsigned char)((1 + sin(elapsed * 0.001)) * 128);
	unsigned char red = (unsigned char)((1 + sin(elapsed * 0.002)) * 128);
	unsigned char blue = (unsigned char)((1+ sin(elapsed * 0.003)) * 128);

	const Particle * const pParticles = swarm.getParticles();

	for(int i=0; i<Swarm::NPARTICLES; i++) {
		Particle particle = pParticles[i];

		int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH/2;
		int y = (particle.m_y + 1) * Screen::SCREEN_HEIGHT/2;

		screen.setPixel(x, y, red, green, blue);

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
