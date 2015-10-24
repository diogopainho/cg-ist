#ifndef _SPOTLIGHT_H_
#define _SPOTLIGHT_H_

#include <GL/glut.h>

namespace Space_Invaders {

	class Spotlight {

		double _x;

	public:
		Spotlight(){ _x = 0; };
		~Spotlight(){};
		double getX(){ return _x;};
		void Move_Right();
		void Move_Left();
		void drawSpotlight (double xpos);


	};
}

#endif