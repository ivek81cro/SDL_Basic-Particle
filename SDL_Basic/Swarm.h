#ifndef SWARM_H
#define SWARM_H
#include"Particle.h"

namespace particleNamSp {
	class Swarm
	{
	private:
		Particle *m_particles;
		int lastTime;
	public:
		const static int N_PARTICLES = 10000;
		Swarm();
		~Swarm();
		const Particle *const getParticles() { return m_particles; }
		void update(int elapsed);
	};
}

#endif