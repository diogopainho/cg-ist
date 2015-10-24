#include "Lighting.hpp"

using namespace Space_Invaders;

void Lighting::draw(int number){

	//Spaceship
	if (number == 0){

		// Set material properties
		GLfloat qaBlack[] = {0.0, 0.0, 0.0, 1.0};
		GLfloat qaGreen[] = {0.0, 1.0, 0.0, 1.0};
		GLfloat qaWhite[] = {1.0, 1.0, 1.0, 1.0};
		glMaterialfv(GL_FRONT, GL_AMBIENT, qaBlack);
		glMaterialfv(GL_FRONT, GL_DIFFUSE, qaGreen);
		glMaterialfv(GL_FRONT, GL_SPECULAR, qaWhite);
		glMaterialf(GL_FRONT, GL_SHININESS, 100.0);
	}

	//Shield
	if (number == 1){

		// Set material properties
		GLfloat ambientLight[] = { 0.153f,0.102f,0.0f, 1.0f };
		GLfloat diffuseLight[] = {0.153f,0.102f,0.0f, 1.0f };
		GLfloat specularLight[] = { 0.153f,0.102f,0.0f, 1.0f };
		glMaterialfv(GL_FRONT, GL_AMBIENT, ambientLight);
		glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuseLight);
		glMaterialfv(GL_FRONT, GL_SPECULAR, specularLight);
		glMaterialf(GL_FRONT, GL_SHININESS, 10.0);
	}

	// Alien1 & 3
	if(number == 2){

		// Set material properties
		GLfloat ambientLight[] = { 0.0f, 1.0f, 0.0f, 1.0f };
		GLfloat diffuseLight[] = { 0.0f, 1.0f, 0.0f, 1.0f };
		GLfloat specularLight[] = { 0.0f, 1.0f, 0.0f, 1.0f };
		glMaterialfv(GL_FRONT, GL_AMBIENT, ambientLight);
		glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuseLight);
		glMaterialfv(GL_FRONT, GL_SPECULAR, specularLight);
		glMaterialf(GL_FRONT, GL_SHININESS, 200.0);
	}

	if(number == 3){

		GLfloat ambientLight[] = { 1.0f, 1.0f, 1.0f, 1.0f };
    	GLfloat diffuseLight[] = { 1.0f, 1.0f, 1.0f, 1.0f };
		GLfloat specularLight[] = { 1.0f, 1.0f, 1.0f, 1.0f };
		glMaterialfv(GL_FRONT, GL_AMBIENT, ambientLight);
		glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuseLight);
		glMaterialfv(GL_FRONT, GL_SPECULAR, specularLight);
		glMaterialf(GL_FRONT, GL_SHININESS, 10.0);
	}

	if(number == 4){

		GLfloat ambientLight[] = { 1.0f, 0.0f, 0.0f, 1.0f };
		GLfloat diffuseLight[] = { 1.0f, 0.0f, 0.0f, 1.0f };
		GLfloat specularLight[] = { 1.0f, 0.0f, 0.0f, 1.0f };
		glMaterialfv(GL_FRONT, GL_AMBIENT, ambientLight);
		glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuseLight);
		glMaterialfv(GL_FRONT, GL_SPECULAR, specularLight);
		glMaterialf(GL_FRONT, GL_SHININESS, 10.0);
	}
}





