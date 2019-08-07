#include<SDL.h>
#include"Screen.h"
#include<iostream>
#include<cmath>
#include<chrono>
#include"Swarm.h"
#include"Particle.h"

int main(int argc, char* argv[])
{
	srand(time(NULL));
	particleNamSp::Screen screen;

	if (!screen.init()) {
		std::cout << "Error iitalising SDL!" << std::endl;
	}

	particleNamSp::Swarm swarm;

	while(true) {
		//update particles
		//draw particles
		
		int elapsed = SDL_GetTicks();

		screen.clear();
		swarm.update();

		unsigned char green = (unsigned char)((1 + sin(elapsed * 0.0001)) * 128);
		unsigned char red = (unsigned char)((1 + sin(elapsed * 0.0002)) * 128);
		unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.0003)) * 128);

		const particleNamSp::Particle * const particle = swarm.getParticles();
		for (int i = 0; i < swarm.N_PARTICLES; ++i) {
			particleNamSp::Particle pParticle = particle[i];
			int x = (pParticle.m_x + 1)*screen.SCREEN_WIDTH / 2;
			int y = pParticle.m_y *screen.SCREEN_WIDTH / 2 + screen.SCREEN_HEIGHT/2;

			screen.setPixel(x, y, red, green, blue);
		}

		
		//draw screen
		screen.update();
		//check for events

		if (!screen.processEvents()) {
			break;
		}
	}
	screen.close();

	return 0;
}