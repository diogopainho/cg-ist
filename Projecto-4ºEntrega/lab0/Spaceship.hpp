#ifndef __SPACESHIP_H__
#define __SPACESHIP_H__

#include <GL/glut.h>

	namespace Space_Invaders {

		class Spaceship {

		float move_x;
		int score = 1;
		int life = 3;
		public:
			
			Spaceship(){
			move_x = 0.0;
			}

			~Spaceship(){}

			void Move_Right();
			void Move_Left();
			void drawSpaceship();
            double getMovex();
			int getScore();
			int getLife();
		};
	}

#endif /* __SPACESHIP_H__ */