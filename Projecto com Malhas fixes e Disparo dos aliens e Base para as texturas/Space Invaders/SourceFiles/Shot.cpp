#include "Shot.hpp"

using namespace Space_Invaders;


void Shot::setytimer(float value){

	_ytimer += value;
}

float Shot::getytimer(){

	return _ytimer;
}

void Shot::drawShot(){

	glPushMatrix();
	glTranslated(_xinit, _ytimer, 0.0);
	glScaled(0.5, 1.2, 1.0);
	glutSolidCube(0.1);
	glPopMatrix();

}