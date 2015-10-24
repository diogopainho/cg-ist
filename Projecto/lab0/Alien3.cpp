#include "Alien3.hpp" 

using namespace Space_Invaders;

float Alien3::getAlien3Positionx(){
    return _Alien3Position_x;
}

float Alien3::getAlien3Positiony(){
    return _Alien3Position_y;
}

void Alien3::setAlien3Positionx(float _newx){
    _Alien3Position_x = _newx;
}

void Alien3::setAlien3Positiony(float _newy){
    _Alien3Position_y = _newy;
}

void Alien3::drawAlien3(float Alien3Position_x, float Alien3Position_y){

	glPushMatrix();
	 //Para posicionar e escalar o alien 3
	 glTranslated(Alien3Position_x, Alien3Position_y, 0.0);
	 glScaled(0.2, 0.2, 0.2);
 
	 //Corpo
	 glPushMatrix();
	 glScaled(2.0, 0.6, 1.0);
	 glutSolidCube(1);
	 glPopMatrix();
 
	 glPushMatrix();
	 glScaled(1.5, 0.8, 1.0);
	 glTranslated(0.0, 0.12, 0.0);
	 glutSolidCube(1);
	 glPopMatrix();
 
	 glPushMatrix();
	 glScaled(0.5, 0.8, 0.5);
     glTranslated(0.0, 0.4, 0.0);
	 glutSolidCube(1);
	 glPopMatrix();
 
	 //Perna Esquerda
     glPushMatrix();
     glScaled(1.0, 1.0, 0.5);
     glPushMatrix();
	 glTranslated(-0.3, -0.4, 0.0);
	 glScaled(0.5, 0.2, 1.0);
     glutSolidCube(1);
	 glPopMatrix();
 
	 glPushMatrix();
	 glTranslated(-0.6, -0.6, 0.0);
	 glScaled(0.5, 0.2, 1.0);
	 glutSolidCube(1);
	 glPopMatrix();
 
	 glPushMatrix();
	 glTranslated(-1.1, -0.8, 0.0);
	 glScaled(0.5, 0.2, 1.0);
	 glutSolidCube(1);
	 glPopMatrix();
     glPopMatrix();
 
 
	 //Perna Direita
	 glPushMatrix();
     glScaled(1.0, 1.0, 0.5);
     glPushMatrix();
	 glTranslated(0.3, -0.4, 0.0);
	 glScaled(0.5, 0.2, 1.0);
     glutSolidCube(1);
	 glPopMatrix();
 
	 glPushMatrix();
	 glTranslated(0.6, -0.6, 0.0);
	 glScaled(0.5, 0.2, 1.0);
	 glutSolidCube(1);
	 glPopMatrix();
 
	 glPushMatrix();
	 glTranslated(1.1, -0.8, 0.0);
	 glScaled(0.5, 0.2, 1.0);
	 glutSolidCube(1);
	 glPopMatrix();
     glPopMatrix();
 
	 GLfloat ambientLight2[] = { 0.0f, 0.0f, 0.0f, 1.0f };
	 GLfloat diffuseLight2[] = { 0.0f, 0.0f, 0.0f, 1.0f };
	 GLfloat specularLight2[] = { 0.0f, 0.0f, 0.0f, 1.0f };
	 glMaterialfv(GL_FRONT, GL_AMBIENT, ambientLight2);
	 glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuseLight2);
	 glMaterialfv(GL_FRONT, GL_SPECULAR, specularLight2);
	 glMaterialf(GL_FRONT, GL_SHININESS, 10.0);

	 //Meio das Pernas
	 glPushMatrix();
	 glTranslated(0.0, -0.55, 0.0);
	 glScaled(0.1, 0.1, 0.1);
     glutSolidCube(1);
	 glPopMatrix();
 
 
	 //Olho Esquerdo
	 glPushMatrix();
	 glTranslated(-0.3, 0.1, 0.0);
	 glScaled(0.4, 0.2, 0.1);
	 glutSolidCube(1);
	 glPopMatrix();
 
	 //Olho Direito
	 glPushMatrix();
	 glTranslated(0.3, 0.1, 0.0);
	 glScaled(0.4, 0.2, 0.1);
	 glutSolidCube(1);
	 glPopMatrix();
 
	 glPopMatrix();
 
 
 }