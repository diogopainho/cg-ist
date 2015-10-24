#include "Spotlight.hpp"

using namespace Space_Invaders;


void Spotlight::drawSpotlight(double xpos){

	_x = xpos;
	GLfloat ambient[] = { 0.0, 0.0, 0.0, 1.0 };
	GLfloat diffuse[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat specular[] = { 1.0, 1.0, 1.0, 1.0 };
	glLightfv(GL_LIGHT1, GL_DIFFUSE, diffuse);
	glLightfv(GL_LIGHT1, GL_SPECULAR, specular);
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambient);
	const GLfloat position[] = {_x, -3.0, 0.0, 1.0 };
	const GLfloat dir[] = {0.0, 1.0, 0.0};
	glLightfv( GL_LIGHT1, GL_POSITION, position);
	glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION, dir);
	glLightf(GL_LIGHT1, GL_SPOT_CUTOFF, 15.0f);
	glLightf(GL_LIGHT1, GL_SPOT_EXPONENT, 1.);
	glEnable(GL_LIGHT1);
	glDisable(GL_LIGHT0);

}

void Spotlight::Move_Left(){

	if(_x <=5.7)
	  _x = _x - 0.20;
}

void Spotlight::Move_Right(){
	if(_x <=5.7)
	  _x = _x + 0.20;
}