#include "Alien2.hpp" 

using namespace Space_Invaders;

float Alien2::getAlien2Positionx(){
    return _Alien2Position_x;
}

float Alien2::getAlien2Positiony(){
    return _Alien2Position_y;
}

void Alien2::setAlien2Positionx(float _newx){
    _Alien2Position_x = _newx;
}

void Alien2::setAlien2Positiony(float _newy){
    _Alien2Position_y = _newy;
}


/*void Alien2::updateAlien2(int value){
    
    _Alien2Position_x += 1.0;
}*/

void Alien2::drawAlien2(float Alien2Position_x, float Alien2Position_y)
{

	glPushMatrix();
	glTranslated(Alien2Position_x, Alien2Position_y, 0.0);
    glScaled(0.2, 0.2, 0.2);
    
    
    //Margem Superior e Inferior
    glPushMatrix();
    glScaled(1.25, 1.25, 1.0);
    glutSolidCube(1);
    glPopMatrix();
    
    //Margens Laterais
    glPushMatrix();
    glScaled(1.65, 1.0, 0.4);
    glutSolidCube(1);
    glPopMatrix();
    
    //Corpo Central
    glPushMatrix();
    glScaled(1.25, 1.0, 1.0);
    glutSolidCube(1);
    glPopMatrix();
    
    //Pata Esquerda
    glPushMatrix();
    
    glPushMatrix();
    glTranslated(-0.2, -0.7, 0.0);
    glScaled(0.2, 0.2, 0.2);
    glutSolidCube(1);
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-0.4, -0.9, 0.0);
    glScaled(0.2, 0.2, 0.2);
    glutSolidCube(1);
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-0.6, -1.1, 0.0);
    glScaled(0.2, 0.2, 0.2);
    glutSolidCube(1);
    glPopMatrix();
    
    glPopMatrix();
    
    
    //Pata Direita
    glPushMatrix();
    
    glPushMatrix();
    glTranslated(0.2, -0.7, 0.0);
    glScaled(0.2, 0.2, 0.2);
    glutSolidCube(1);
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(0.4, -0.9, 0.0);
    glScaled(0.2, 0.2, 0.2);
    glutSolidCube(1);
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(0.6, -1.1, 0.0);
    glScaled(0.2, 0.2, 0.2);
    glutSolidCube(1);
    glPopMatrix();
    
    glPopMatrix();
    
	//Parte preta do alien2

	GLfloat ambientLight2[] = { 0.0f, 0.0f, 0.0f, 1.0f };
	GLfloat diffuseLight2[] = { 0.0f, 0.0f, 0.0f, 1.0f };
	GLfloat specularLight2[] = { 0.0f, 0.0f, 0.0f, 1.0f };
	glMaterialfv(GL_FRONT, GL_AMBIENT, ambientLight2);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuseLight2);
	glMaterialfv(GL_FRONT, GL_SPECULAR, specularLight2);
	glMaterialf(GL_FRONT, GL_SHININESS, 200.0);

    //Olho Esquerdo
    glPushMatrix();
    glTranslated(-0.3, 0.1, 0.0);
    glScaled(0.3, 0.3, 0.5);
    glutSolidCube(1);
    glPopMatrix();
    
    //Olho Direito
    glPushMatrix();
    glTranslated(0.3, 0.1, 0.0);
    glScaled(0.3, 0.3, 0.5);
    glutSolidCube(1);
    glPopMatrix();
    
    glPopMatrix();
    
}