#include "Spaceship.hpp"



using namespace Space_Invaders;



double Spaceship::getMovex(){
    return move_x;
}

double Spaceship::Move_Right(){
	if(move_x <=5.7)
	return move_x = move_x + 0.20;
}

double Spaceship::Move_Left(){
	if(move_x >=-5.7)
	return move_x = move_x - 0.20;
    
}



void Spaceship::drawSpaceship(){
    
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
       
    
    //Translate da Nave
    glPushMatrix();
    glTranslated(move_x, -3.0, 0.0);
    
    
	// Set material properties
	GLfloat qaBlack[] = {0.0, 0.0, 0.0, 1.0};
	GLfloat qaGreen[] = {0.0, 1.0, 0.0, 1.0};
	GLfloat qaWhite[] = {1.0, 1.0, 1.0, 1.0};
	glMaterialfv(GL_FRONT, GL_AMBIENT, qaBlack);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, qaGreen);
	glMaterialfv(GL_FRONT, GL_SPECULAR, qaWhite);
	glMaterialf(GL_FRONT, GL_SHININESS, 100.0);
    
    //Canhao
    glPushMatrix();
    glTranslated(0.0, 0.1, 0);
    glScaled(0.03, 1.09, 0.03);
    glColor3f(0.5, 0.7, 0.0);
    glutSolidCube(0.5);
    glPopMatrix();
    
    //Mira Canhao
    glPushMatrix();
    glTranslated(0.0, 0.36, 0.0);
    glColor3f(1.0, 0.0, 0.0);
    glutSolidSphere(0.03, 25, 25);
    glPopMatrix();
    
    
    //Nave
    glPushMatrix();
        
    glColor3f(0.85,0.85,0.10);
    glScalef(0.5, 0.5, 0.5);
    
    glBegin(GL_POLYGON);
    glNormal3f(0.0, 0.0, 1.0);
	glVertex3f(  0.5, -0.5, -0.5 );
    glVertex3f(  0.5,  0.5, -0.5 );
    glVertex3f( -0.5,  0.5, -0.5 );
    glVertex3f( -0.5, -0.5, -0.5 );
    glEnd();
    
    //BACK - normal (0, 0, -1)
    glBegin(GL_POLYGON);
    glNormal3f(0, 0, -1); 
	glVertex3f(  0.5, -0.5, 0.5 );
    glVertex3f(  0.5,  0.5, 0.5 );
    glVertex3f( -0.5,  0.5, 0.5 );
    glVertex3f( -0.5, -0.5, 0.5 );
    glEnd();
    
    //RIGHT - normal (1, 0, 0)
    glBegin(GL_POLYGON);
	glNormal3f(1, 0, 0);
    glVertex3f( 0.5, -0.5, -0.5 );
    glVertex3f( 0.5,  0.5, -0.5 );
    glVertex3f( 0.5,  0.5,  0.5 );
    glVertex3f( 0.5, -0.5,  0.5 );
    glEnd();
    
    //LEFT - normal (-1, 0, 0) 
    glBegin(GL_POLYGON);
    glNormal3f(-1, 0, 0);
	glVertex3f( -0.5, -0.5,  0.5 );
    glVertex3f( -0.5,  0.5,  0.5 );
    glVertex3f( -0.5,  0.5, -0.5 );
    glVertex3f( -0.5, -0.5, -0.5 );
    glEnd();
    
    //TOP - normal (0, 1, 0)
    glBegin(GL_POLYGON);
	glNormal3f(0, 1, 0);
    glVertex3f(  0.5,  0.5,  0.5 );
    glVertex3f(  0.5,  0.5, -0.5 );
    glVertex3f( -0.5,  0.5, -0.5 );
    glVertex3f( -0.5,  0.5,  0.5 );
    glEnd();
    
    //BOTTOM - normal (0, -1, 0)
    glBegin(GL_POLYGON);
	glNormal3f(0, -1, 0);
    glVertex3f(  0.5, -0.5, -0.5 );
    glVertex3f(  0.5, -0.5,  0.5 );
    glVertex3f( -0.5, -0.5,  0.5 );
    glVertex3f( -0.5, -0.5, -0.5 );
    glEnd();
    glPopMatrix();
    
    glPopMatrix();
    
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}