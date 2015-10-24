#include "Lighting.hpp"

using namespace Space_Invaders;


void Lighting::drawLight(){

		//GLfloat ambient[] = { 0.3, 0.3, 0.3, 1.0 };
		GLfloat diffuse[] = { 1.0, 1.0, 1.0, 1.0 };
		GLfloat specular[] = { 1.0, 1.0, 1.0, 1.0 };
		//glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
		glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
		glLightfv(GL_LIGHT0, GL_SPECULAR, specular);
		//glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambient);
		const GLfloat pos[] = {0.0f, -5.0f, 5.0f, 0.0 };
		glLightfv( GL_LIGHT0, GL_POSITION, pos);
		glEnable(GL_LIGHT0);
		glDisable(GL_LIGHT1);

	}





