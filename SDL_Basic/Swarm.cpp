#include "Swarm.h"

namespace particleNamSp {

	Swarm::Swarm():lastTime(0)
	{
		m_particles = new Particle[N_PARTICLES];
	}

	Swarm::~Swarm()
	{
		delete[]m_particles;
	}

	void Swarm::update(int elapsed) {
		int interval = elapsed - lastTime;
		for (int i = 0; i < Swarm::N_PARTICLES; ++i) {
			m_particles[i].update(interval);
		}
		lastTime = elapsed;
	}
}