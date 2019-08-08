#ifndef PART_H
#define PART_H

namespace particleNamSp {
	struct Particle
	{
		double m_x;
		double m_y;
		/*double m_xSpeed;
		double m_ySpeed;*/
		double m_speed;
		double m_direction;
	public:
		Particle();
		~Particle();
		void update(int interval);
	};
}
#endif // !PART_H
