#ifndef __ALIEN2_H__
#define __ALIEN2_H__

#include <GL/glut.h>

	namespace Space_Invaders {

		class Alien2 {
            
            float _Alien2Position_x;
            float _Alien2Position_y;
            

		public:
			
			Alien2(){}

			~Alien2(){}

			void drawAlien2(float _Alien2Position_x, float _Alien2Position_y);
            float getAlien2Positionx();
            float getAlien2Positiony();
            void setAlien2Positionx(float _newx);
            void setAlien2Positiony(float _newy);
		};
	}

#endif /* __ALIEN2_H__ */