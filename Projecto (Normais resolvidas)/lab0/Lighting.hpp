#ifndef _LIGHTING_H_
#define _LIGHTING_H_

#include <GL/glut.h>

namespace Space_Invaders {

	class Lighting {

	public:
		Lighting(){};
		~Lighting(){};
		void drawLight (int number, int xpos);


	};
}

#endif