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
    
    // Set material properties
	GLfloat ambientlight[] = {0.0, 1.0, 0.0, 1.0};
	GLfloat diffuse[] = {0.0, 1.0, 0.0, 1.0};
	GLfloat spectural[] = {0.0, 0.0, 0.0, 1.0};
	glMaterialfv(GL_FRONT, GL_AMBIENT, ambientlight);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, spectural);
	glMaterialf(GL_FRONT, GL_SHININESS, 100.0);   
    
    //Translate da Nave
    glPushMatrix();
    glTranslated(move_x, -3.0, 0.0);
    
    //Canhao
    glPushMatrix();
    glTranslated(0.0, 0.1, 0);
    glScaled(0.03, 1.09, 0.03);
    glutSolidCube(0.5);
    glPopMatrix();
    
    //Mira Canhao
    glPushMatrix();
    glTranslated(0.0, 0.36, 0.0);
    glutSolidSphere(0.03, 25, 25);
    glPopMatrix();
    
    
    //Nave
    glPushMatrix();
        
    
    glScalef(0.5, 0.5, 0.5);
    
    glTranslated(-0.5, -0.5, 0.0);
	
    //Front - normal (0, 0, -1) (Mais perto do utilizador)
    glBegin(GL_POLYGON);
    glNormal3f(0.0, 1.0, 0.0);
    glVertex3f(  0.0, 0.0, 1.0);
    glVertex3f(  1.0,  0.0, 1.0 );
    glVertex3f( 1.0,  0.0, 0.0 );
    glVertex3f( 0.0, 0.0, 0.0 );
    glEnd();
	
    
    //Back - normal () (Mais longe do utilizador)
    glBegin(GL_POLYGON);
    glNormal3f(0.0, -1.0, 0.0);
    glVertex3f(  0.0, 1.0, 1.0);
    glVertex3f(  1.0,  1.0, 1.0 );
    glVertex3f( 1.0,  1.0, 0.0 );
    glVertex3f( 0.0, 1.0, 0.0 );
    glEnd();
    
    
    //Top - normal ()
    glBegin(GL_POLYGON);
    glNormal3f(0.0, 0.0, 1.0);
    glVertex3f(  0.0, 0.0, 1.0);
    glVertex3f(  0.0,  1.0, 1.0 );
    glVertex3f( 1.0,  1.0, 1.0 );
    glVertex3f( 1.0, 0.0, 1.0 );
    glEnd();
    
    
    //Botom - normal()
     glBegin(GL_POLYGON);
     glNormal3f(0.0, 0.0, -1.0);
     glVertex3f(  0.0, 0.0, 0.0);
     glVertex3f(  0.0,  1.0, 0.0 );
     glVertex3f( 1.0,  1.0, 0.0 );
     glVertex3f( 1.0, 0.0, 0.0 );
     glEnd();
    
    
    
    //Left
    
    glBegin(GL_POLYGON);
    glNormal3f(-1.0, 0.0, 0.0);
    glVertex3f(  0.0, 0.0, 0.0);
    glVertex3f(  0.0,  0.0, 1.0 );
    glVertex3f( 0.0,  1.0, 1.0 );
    glVertex3f( 0.0, 1.0, 0.0 );
    glEnd();

    glBegin(GL_POLYGON);
    glNormal3f(1.0, 0.0, 0.0);
    glVertex3f(  1.0, 0.0, 0.0);
    glVertex3f(  1.0,  0.0, 1.0 );
    glVertex3f( 1.0,  1.0, 1.0 );
    glVertex3f( 1.0, 1.0, 0.0 );
    glEnd();
    
    
    
    glPopMatrix();
    
    glPopMatrix();
    
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}