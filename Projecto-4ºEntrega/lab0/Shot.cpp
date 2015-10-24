#include "Shot.hpp"

using namespace Space_Invaders;


void Shot::setytimer(float value){

	_ytimer += value;
}

float Shot::getytimer(){

	return _ytimer;
}

void Shot::drawShot(){

		GLfloat diffuseLight[] = { 1.0f, 0.0f, 0.0f, 1.0f };
		GLfloat specularLight[] = { 1.0f, 0.0f, 0.0f, 1.0f };
		glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuseLight);
		glMaterialfv(GL_FRONT, GL_SPECULAR, specularLight);

	glPushMatrix();
	glTranslated(_xinit, _ytimer, 0.0);
	glScaled(0.5, 1.2, 1.0);
	glutSolidCube(0.1);
	glPopMatrix();

}