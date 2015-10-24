#include "Escudo.hpp" 

using namespace Space_Invaders;

void Escudo::drawEscudo(float shieldposition){
    

    /*ATENCAO LER AS LINHAS DE BAIXO PARA CIMA */
	/*Linha de cubos mais pr�ximos da nave*/
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

	/*Segunda Linha de cubos mais pr�ximos da nave*/
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

	/*3� Linha */

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

	/*4� linha */

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

	/*5� Linha*/

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

	/*6� Linha */ 

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

	/*7� Linha ou (1�) a mais afastada da nave*/

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