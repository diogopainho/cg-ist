#ifndef _SHOT_H_
#define _SHOT_H_

#include <GL/glut.h>

namespace Space_Invaders {

	class Shot {

		float _xinit;
		float _ytimer;

	public:

		Shot(float x){
			_xinit = x;
			_ytimer = -2.53;
		}
		~Shot(){};
		void setytimer(float value);
		float getytimer();
		void drawShot();
	};
}

#endif /*_SHOT_H_*/