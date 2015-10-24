#ifndef _GESTOR_H_
#define _GESTOR_H_

#include <vector>
#include <GL/glut.h>
#include "Escudo.hpp"
#include "Spaceship.hpp"
#include "Alien1.hpp"
#include "Alien2.hpp"
#include "Alien3.hpp"
#include "MyCamera.hpp"
#include "MyScreen.hpp"
#include "Shot.hpp"

	namespace Space_Invaders {

		class Gestor {

			float _width;
			float _height;

			float _alien_x;
			float _alien_y_1;
			float _alien_y_2;
			float _alien_y_3;
			int _time;
			int _move;
			int _vshotsize;

			int _timeElapsed;

			MyCamera *_camera;
			std::vector<Alien1*> _valien1;
			std::vector<Alien2*> _valien2;
			std::vector<Alien3*> _valien3;
			std::vector<Escudo*> _vescudo;
			std::vector<Shot*> _vshot;
			Spaceship *_spaceship;

		public:
			Gestor();

			~Gestor(){}

			void ShipFire();
			void myReshape(GLsizei w, GLsizei h);
			void myDisplay(void);
			void idleFunc ();
			void readKeyboard(unsigned char key, int mousex, int mousey);
			void myCamera(int _cameratype);
			MyCamera getCamera();
			void myTimer();
			void activate();
	};

}

#endif
