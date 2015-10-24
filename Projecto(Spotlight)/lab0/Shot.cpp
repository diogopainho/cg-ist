#include "Shot.hpp"

using namespace Space_Invaders;


void Shot::setytimer(float value){

	_ytimer += value;
}

float Shot::getytimer(){

	return _ytimer;
}

void Shot::drawShot(){

	GLfloat ambientLight[] = { 1.0f, 0.0f, 0.0f, 1.0f };
		GLfloat diffuseLight[] = { 0.0f, 0.0f, 0.0f, 1.0f };
		GLfloat specularLight[] = { 0.0f, 0.0f, 0.0f, 1.0f };
		glMaterialfv(GL_FRONT, GL_AMBIENT, ambientLight);
		glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuseLight);
		glMaterialfv(GL_FRONT, GL_SPECULAR, specularLight);
		glMaterialf(GL_FRONT, GL_SHININESS,10.0);

	glPushMatrix();
	glTranslated(_xinit, _ytimer, 0.0);
	glScaled(0.5, 1.2, 1.0);
	glutSolidCube(0.1);
	glPopMatrix();

}