#ifndef __SPACESHIP_H__
#define __SPACESHIP_H__

#include <GL/glut.h>
namespace Space_Invaders {

		class Spaceship {

		float move_x;

		public:
			
			Spaceship(){
			move_x = 0.0;
			}

			~Spaceship(){}

			double Move_Right();
			double Move_Left();
			void drawSpaceship();
            double getMovex();
		};
	}

#endif /* __SPACESHIP_H__ */