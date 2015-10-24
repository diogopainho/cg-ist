
#ifndef _SHOTALIEN_H_
#define _SHOTALIEN_H_

#include <GL/glut.h>

namespace Space_Invaders {
    
	class ShotAlien {
        
		float _xinit;
		float _ytimer;
        float _random1;
        
	public:
        
		ShotAlien(float x, float y){
			_xinit = x;
			_ytimer = y;

		}
		~ShotAlien(){};
		void setytimer(float value);
        void setxposit(float value);
		float getytimer();
		void drawShot();
	};
}

#endif
