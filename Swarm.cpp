#include "Swarm.h"

namespace sdlparticle {
	
Swarm::Swarm(){
	m_pParticles = new Particle[NPARTICLES];
}

Swarm::~Swarm(){
	delete[] m_pParticles;
}

} // namespace sdlpractice
