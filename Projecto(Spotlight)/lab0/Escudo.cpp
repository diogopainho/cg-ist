#include "Escudo.hpp" 

using namespace Space_Invaders;

void Escudo::drawEscudo(float shieldposition){
    

	// Set material properties
	GLfloat ambientLight[] = { 1.0f,1.0f,0.0f, 1.0f };
	GLfloat diffuseLight[] = {0.0f,0.0f,0.0f, 1.0f };
	GLfloat specularLight[] = { 0.0f,0.0f,0.0f, 1.0f };
	glMaterialfv(GL_FRONT, GL_AMBIENT, ambientLight);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuseLight);
	glMaterialfv(GL_FRONT, GL_SPECULAR, specularLight);
	glMaterialf(GL_FRONT, GL_SHININESS, 10.0);

    /*ATENCAO LER AS LINHAS DE BAIXO PARA CIMA */
	/*Linha de cubos mais próximos da nave*/
    glPushMatrix();
    glScaled(0.1, 0.1, 0.1);
    glTranslated(shieldposition, -15.0, 0.0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glPopMatrix();

	/*Segunda Linha de cubos mais próximos da nave*/
	glPushMatrix();
    glScaled(0.1, 0.1, 0.1);
    glTranslated(shieldposition, -13.7, 0.0);
	glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
	glutSolidCube(1);
	glPopMatrix();

	/*3ª Linha */

	glPushMatrix();
    glScaled(0.1, 0.1, 0.1);
    glTranslated(shieldposition, -12.4, 0.0);
	glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
	glutSolidCube(1);
	glTranslated(3.9, 0.0, 0);
	glColor3f(0.85,0.85,0.10);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(3.9, 0.0, 0);
	glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glPopMatrix();

	/*4ª linha */

	glPushMatrix();
    glScaled(0.1, 0.1, 0.1);
    glTranslated(shieldposition, -11.1, 0.0);
	glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
	glutSolidCube(1);
	glTranslated(3.9, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(3.9, 0.0, 0);
	glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glPopMatrix();

	/*5ª Linha*/

	glPushMatrix();
    glScaled(0.1, 0.1, 0.1);
    glTranslated(shieldposition, -9.8, 0.0);
	glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
	glutSolidCube(1);
	glTranslated(3.9, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(3.9, 0.0, 0);
	glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glPopMatrix();

	/*6ª Linha */ 

	glPushMatrix();
    glScaled(0.1, 0.1, 0.1);
    glTranslated(shieldposition, -8.5, 0.0);
	glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
	glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
	glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
	glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
	glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glPopMatrix();

	/*7ª Linha ou (1ª) a mais afastada da nave*/

	glPushMatrix();
    glScaled(0.1, 0.1, 0.1);
    glTranslated(shieldposition, -7.2, 0.0);
	glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
	glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
	glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
	glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
	glutSolidCube(1);
	glTranslated(1.3, 0.0, 0);
    glutSolidCube(1);
	glPopMatrix();

}