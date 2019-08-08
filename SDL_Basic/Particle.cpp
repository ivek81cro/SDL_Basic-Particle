#include "Particle.h"
#include<iostream>
#include"Screen.h"
#include<cmath>

namespace particleNamSp {

	Particle::Particle():m_x(0),m_y(0)
	{
		/*m_x = 2.0 * rand() / RAND_MAX - 1;
		m_y = 2.0 * rand() / RAND_MAX - 1;*/
		/*m_xSpeed = 0.001*(((2.0*rand()) / RAND_MAX) - 1);
		m_ySpeed = 0.001*(((2.0*rand()) / RAND_MAX) - 1);*/
		m_direction = (2*M_PI*rand()) / RAND_MAX;
		m_speed = (0.08*rand()) / RAND_MAX;

		m_speed *= m_speed;
	}


	Particle::~Particle()
	{
	}

	void Particle::update(int interval) {
		double m_xSpeed = m_speed * cos(m_direction);
		double m_ySpeed = m_speed * sin(m_direction);
		m_x += m_xSpeed * interval;
		m_y += m_ySpeed * interval;

		/*if (m_x<-1.0 || m_x>1.0) {
			m_xSpeed = -m_xSpeed;
		}
		if (m_y<-1.0 || m_y>1.0) {
			m_ySpeed = -m_ySpeed;
		}*/
	}
}