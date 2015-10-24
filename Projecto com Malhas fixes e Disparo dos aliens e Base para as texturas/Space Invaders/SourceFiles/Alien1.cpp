#include "Alien1.hpp" 

using namespace Space_Invaders;


float Alien1::getAlien1Positionx(){
    return _Alien1Position_x;
}

float Alien1::getAlien1Positiony(){
    return _Alien1Position_y;
}

void Alien1::setAlien1Positionx(float _newx){
    _Alien1Position_x = _newx;
}

void Alien1::setAlien1Positiony(float _newy){
    _Alien1Position_y = _newy;
}


void Alien1::drawAlien1(float _Alien1Position_x, float _Alien1Position_y){
	

	 glPushMatrix();

	 //Transformaçoes para posicionar este alien (A escala ajusta-se no fim)
	 glTranslated(_Alien1Position_x, _Alien1Position_y, 0.0);
	 glScaled(0.2, 0.2, 0.2);
 
 
	 //Pata Direita
	 glPushMatrix();
 
	 glPushMatrix();
	 glTranslated(0.2, -0.6, 0.0);
	 glScaled(0.2, 0.2, 0.5);
	 glutSolidCube(1);
	 glPopMatrix();
 
	 glPushMatrix();
	 glTranslated(0.4, -0.8, 0.0);
	 glScaled(0.2, 0.2, 0.5);
	 glutSolidCube(1);
	 glPopMatrix();
 
	 glPushMatrix();
	 glTranslated(0.6, -1.0, 0.0);
	 glScaled(0.2, 0.2, 0.5);
	 glutSolidCube(1);
	 glPopMatrix();
 
	 glPopMatrix();
 
	 //Pata Esquerda
	 glPushMatrix();
 
	 glPushMatrix();
	 glTranslated(-0.2, -0.6, 0.0);
	 glScaled(0.2, 0.2, 0.5);
	 glutSolidCube(1);
	 glPopMatrix();
 
	 glPushMatrix();
	 glTranslated(-0.4, -0.8, 0.0);
	 glScaled(0.2, 0.2, 0.5);
	 glutSolidCube(1);
	 glPopMatrix();
 
	 glPushMatrix();
	 glTranslated(-0.6, -1.0, 0.0);
	 glScaled(0.2, 0.2, 0.5);
	 glutSolidCube(1);
	 glPopMatrix();
 
	 glPopMatrix();
 
 
	 //Orelha Direita
	 glPushMatrix();
	 glTranslated(-0.2, 0.0, 0.0);
	 glPushMatrix();
	 glTranslated(1.0, 0.6, 0.0);
	 glScaled(0.2, 0.2, 0.5);
	 glutSolidCube(1);
	 glPopMatrix();
 
	 glPushMatrix();
	 glTranslated(0.8, 0.8, 0.0);
	 glScaled(0.2, 0.2, 0.5);
	 glutSolidCube(1);
	 glPopMatrix();
 
	 glPushMatrix();
	 glTranslated(0.4, 0.8, 0.0);
	 glScaled(0.2, 0.2, 0.5);
	 glutSolidCube(1);
	 glPopMatrix();
 
	 glPushMatrix();
	 glTranslated(0.6, 1.0, 0.0);
	 glScaled(0.2, 0.2, 0.5);
	 glutSolidCube(1);
	 glPopMatrix();
 
	 glPopMatrix();
 
	 //Orelha Esquerda
	 glPushMatrix();
	 glTranslated(0.2, 0.0, 0.0);
 
	 glPushMatrix();
	 glTranslated(-1.0, 0.6, 0.0);
	 glScaled(0.2, 0.2, 0.5);
	 glutSolidCube(1);
	 glPopMatrix();
 
	 glPushMatrix();
	 glTranslated(-0.8, 0.8, 0.0);
	 glScaled(0.2, 0.2, 0.5);
	 glutSolidCube(1);
	 glPopMatrix();
 
	 glPushMatrix();
	 glTranslated(-0.4, 0.8, 0.0);
	 glScaled(0.2, 0.2, 0.5);
	 glutSolidCube(1);
	 glPopMatrix();
 
	 glPushMatrix();
	 glTranslated(-0.6, 1.0, 0.0);
	 glScaled(0.2, 0.2, 0.5);
	 glutSolidCube(1);
	 glPopMatrix();
 
	 glPopMatrix();
 
 
	 //Corpo Do Alien
	 glPushMatrix();
	 glutSolidCube(1);
	 glPopMatrix();

	 //Parte preta do alien1
 
	 GLfloat ambientLight2[] = { 0.0f, 0.0f, 0.0f, 1.0f };
	 GLfloat diffuseLight2[] = { 0.0f, 0.0f, 0.0f, 1.0f };
	 GLfloat specularLight2[] = { 0.0f, 0.0f, 0.0f, 1.0f };
	 glMaterialfv(GL_FRONT, GL_AMBIENT, ambientLight2);
	 glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuseLight2);
	 glMaterialfv(GL_FRONT, GL_SPECULAR, specularLight2);
	 glMaterialf(GL_FRONT, GL_SHININESS, 10.0);

	 //Olho Esquerdo
	 glPushMatrix();
	 glTranslated(-0.3, 0.2, 0.0);
	 glScaled(0.2, 0.2, 0.5);
     glutSolidCube(1);
	 glPopMatrix();
 
	 //Olho Direito
	 glPushMatrix();
	 glTranslated(0.3, 0.2, 0.0);
	 glScaled(0.2, 0.2, 0.5);
	 glutSolidCube(1);
	 glPopMatrix();
 
	 //Boca
	 glPushMatrix();
	 glScaled(0.5, 0.1, 0.5);
	 glTranslated(0.0, -2.0, 0.0);
	 glutSolidCube(1);
	 glPopMatrix();
 
	 glPopMatrix();
}

