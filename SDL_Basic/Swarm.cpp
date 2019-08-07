#include "Swarm.h"

namespace particleNamSp {

	Swarm::Swarm()
	{
		m_particles = new Particle[N_PARTICLES];
	}


	Swarm::~Swarm()
	{
		delete[]m_particles;
	}

	void Swarm::update() {
		for (int i = 0; i < Swarm::N_PARTICLES; ++i) {
			m_particles[i].update();
		}
	}
}