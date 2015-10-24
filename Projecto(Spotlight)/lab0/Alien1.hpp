#ifndef __ALIEN1_H__
#define __ALIEN1_H__

#include <GL/glut.h>

	namespace Space_Invaders {

		class Alien1 {
            
            float _Alien1Position_x;
            float _Alien1Position_y;

		public:
			
			Alien1(){}

			~Alien1(){};

			void drawAlien1(float _Alien1Position_x, float _Alien1Position_y);
            float getAlien1Positionx();
            float getAlien1Positiony();
            void setAlien1Positionx(float _newx);
            void setAlien1Positiony(float _newy);
            void updateAlien1();
            
            

		};
	}

#endif /* __ALIEN1_H__ */