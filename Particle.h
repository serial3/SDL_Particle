#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace sdlparticle {

struct Particle {
	double m_x;
	double m_y;

public:
	Particle();
	virtual ~Particle();
};

}

#endif