#include "Lighting.hpp"

using namespace Space_Invaders;


void Lighting::drawLight(int number, int xpos){

	if(number == 0){
 
	GLfloat ambient[] = { 0.0, 0.0, 0.0, 1.0 };
	GLfloat diffuse[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat specular[] = { 1.0, 1.0, 1.0, 1.0 };
	glLightfv(GL_LIGHTING, GL_DIFFUSE, diffuse);
	glLightfv(GL_LIGHTING, GL_SPECULAR, specular);
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambient);
	const GLfloat position[] = {xpos, -4.0, 0.0, 1.0 };
	const GLfloat dir[] = {0.0, 1.0, 0.0};
	glLightfv( GL_LIGHTING, GL_POSITION, position);
	glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION, dir);
	glLightf(GL_LIGHT1, GL_SPOT_CUTOFF, 25.0f);
	glLightf(GL_LIGHT1, GL_SPOT_EXPONENT, 1.);
	glEnable(GL_LIGHT1);
	glDisable(GL_LIGHT0);
	}

	if(number == 1){

		/*GLfloat ambientLight[] = { 0.0f, 0.0f, 0.0f, 1.0f };
		GLfloat diffuseLight[] = { 0.0f, 0.0f, 0.0f, 1.0f };
		GLfloat specularLight[] = { 1.0f, 1.0f, 1.0f, 1.0f };
		GLfloat LightPosition[] = {xpos, -5.0, 5.0, 1.0};

		glLightfv(GL_LIGHT0, GL_AMBIENT, ambientLight);
		glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuseLight);
		glLightfv(GL_LIGHT0, GL_SPECULAR, specularLight);
		glLightfv(GL_LIGHT0, GL_POSITION, LightPosition);
		glEnable(GL_LIGHT0);
		glDisable(GL_LIGHT1);*/
		//glEnable(GL_DEPTH_TEST);
		//glShadeModel(GL_SMOOTH);
		//glEnable(GL_LIGHTING);
		GLfloat ambient[] = { 0.3, 0.3, 0.3, 1.0 };
		GLfloat diffuse[] = { 0.0, 1.0, 0.0, 1.0 };
		GLfloat specular[] = { 1.0, 1.0, 1.0, 1.0 };
		glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
		glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
		glLightfv(GL_LIGHT0, GL_SPECULAR, specular);
		glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambient);
		const GLfloat dir[] = {xpos, -5.0f, 5.0f, 0.0 };
		glLightfv( GL_LIGHT0, GL_POSITION, dir);
		glEnable(GL_LIGHT0);
		glDisable(GL_LIGHT1);
	}


	

}





