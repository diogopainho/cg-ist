#include "Lighting.hpp"

using namespace Space_Invaders;


void Lighting::drawLight(int number, int xpos){

	if(number == 0){
 
	GLfloat ambientLight[] = { 0.0f, 0.0f, 0.0f, 1.0f };
    GLfloat diffuseLight[] = { 1.0f, 1.0f, 1.0f, 1.0f };
	GLfloat specularLight[] = { 1.0f, 1.0f, 1.0f, 1.0f };
	GLfloat LightPosition[] = {xpos, -3.0, 5.0, 1.0};
	GLfloat spotDir[] = { 0.0f, 1.0f ,0.0f };

	glLightfv(GL_FRONT, GL_AMBIENT, ambientLight);
	glLightfv(GL_FRONT, GL_DIFFUSE, diffuseLight);
	glLightfv(GL_FRONT, GL_SPECULAR, specularLight);
	glLightfv(GL_LIGHT0, GL_POSITION, LightPosition);
	glLightf(GL_FRONT, GL_SHININESS, 10.0);
    glLightf(GL_LIGHT0,GL_SPOT_CUTOFF,60.0);
    glLightf(GL_LIGHT0,GL_SPOT_EXPONENT,128.0);
    glLightfv(GL_LIGHT0,GL_SPOT_DIRECTION,spotDir);
    glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	}

	if(number == 1){
		GLfloat ambientLight[] = { 0.0f, 0.0f, 0.0f, 1.0f };
		GLfloat diffuseLight[] = { 1.0f, 1.0f, 1.0f, 1.0f };
		GLfloat specularLight[] = { 1.0f, 1.0f, 1.0f, 1.0f };
		GLfloat LightPosition[] = {xpos, 0.0, 5.0, 1.0};

		glLightfv(GL_FRONT, GL_AMBIENT, ambientLight);
		glLightfv(GL_FRONT, GL_DIFFUSE, diffuseLight);
		glLightfv(GL_FRONT, GL_SPECULAR, specularLight);
		glLightf(GL_FRONT, GL_SHININESS, 10.0);
		glLightfv(GL_LIGHT0, GL_POSITION, LightPosition);
		glEnable(GL_LIGHTING);
		glEnable(GL_LIGHT0);
	}


	

}





