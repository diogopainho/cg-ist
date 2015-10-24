#include "ShotAlien.hpp"

using namespace Space_Invaders;


void ShotAlien::setytimer(float value){
    
	_ytimer += value;
}
void ShotAlien::setxposit(float value){
    _xinit += value;
}
float ShotAlien::getytimer(){
    
	return _ytimer;
}

void ShotAlien::drawShot(){
    
	glPushMatrix();
	glTranslated(_xinit, _ytimer-0.1, 0.0);
	glScaled(0.5, 1.2, 1.0);
	glutSolidCube(0.1);
	glPopMatrix();
    
}