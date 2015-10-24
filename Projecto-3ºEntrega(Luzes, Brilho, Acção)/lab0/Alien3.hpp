#ifndef __ALIEN3_H__
#define __ALIEN3_H__

#include <GL/glut.h>

	namespace Space_Invaders {

		class Alien3 {
            float _Alien3Position_x;
            float _Alien3Position_y;

		public:
			
			Alien3(){}
			~Alien3(){}

			void drawAlien3(float Alien3Position_x, float Alien3Position_y);
            float getAlien3Positionx();
            float getAlien3Positiony();
            void setAlien3Positionx(float _newx);
            void setAlien3Positiony(float _newy);
		};
	}

#endif /* __ALIEN3_H__ */