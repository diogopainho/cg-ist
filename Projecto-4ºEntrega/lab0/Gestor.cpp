#include <iostream>
#include "Gestor.hpp"
#include "BMPReader.h"

using namespace Space_Invaders;



Gestor::Gestor(){

				_alien_x = -5;
				_alien_y_1 = 3;
				_alien_y_2 = 2;
				_alien_y_3 = 1;
				_time = 0;
				_move = 1;
				_vshotsize = 0;
				_vshotaliensize = 0;
				_timeElapsed = 0;
				
				int i = 0;

				_width = 0;
				_height = 0;

				//Insercao dos elementos em vectores

				_camera = new MyCamera();

				for(i=0; i < 11; i++){
				_valien1.push_back(new Alien1());
				}

				for(i=0; i < 11; i++){
				_valien2.push_back(new Alien2());
				}

				for(i=0; i < 11; i++){
				_valien3.push_back(new Alien3());
				}

				for(i=0; i < 4; i++){
					_vescudo.push_back(new Escudo());
				}
			
				_spaceship = new Spaceship();

				_light = new Lighting();

				_spotlight = new Spotlight();

				srand(NULL);

}

void Gestor::ShipFire(){

	_vshot.push_back(new Shot(_spaceship->getMovex()));
	_vshotsize = _vshotsize + 1;
}

void Gestor::Shotalien(float x , float y){
    
   r1 = rand() % 11;
    
    for (int i=0; i < 11; i++) {
        if (_valien3[i] == NULL) {
            _vshotalien.push_back(new ShotAlien(_valien2[i]->getAlien2Positionx(), _alien_y_2));
            _vshotaliensize = _vshotaliensize + 1;
        }

    }
    
    for (int i=0; i < 11; i++) {
        if (_valien2[i] == NULL) {
            _vshotalien.push_back(new ShotAlien(_valien1[i]->getAlien1Positionx(), _alien_y_1));
            _vshotaliensize = _vshotaliensize + 1;
        }
        else {
            _vshotalien.push_back(new ShotAlien(_valien3[r1]->getAlien3Positionx(), _alien_y_3));
            _vshotaliensize = _vshotaliensize + 1;

        }
        
    }
    
 
}

void Gestor::myReshape(GLsizei w, GLsizei h) {
    _width = w;
	_height = h;
}


void Gestor::myDisplay(void) {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
	
	glViewport(0, 0, _width, _height);
    //Chama a camera conforme o estado dela (Ortho, Perspective, FPS)
    _camera->myCamera(_spaceship->getMovex(), _width, _height, _camera->getCameraState());    

	switch (_camera->getCameraState()){

	case 1:
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		glPushMatrix();
		glNormal3f(0.0, 0.0, 1.0);
		initTexture();
		glPopMatrix();
		drawHUD();
		break;

	case 2:
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		glPushMatrix();
		glNormal3f(0.0, 0.0, -1.0);
		glTranslatef(0.0f, 10.0f, 0.0f);
		glRotatef(-97.5f, 1.0f, 0.0f, 0.0f);
		glScalef(2.5f, -2.5, 1.0);
		initTexture();
		glPopMatrix();
		drawHUD();
		break;

	case 3:
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		glPushMatrix();
		glNormal3f(0.0, 0.0, -1.0);
		glTranslatef(0.0f, 10.0f, 0.0f);
		glRotatef(-97.5f, 1.0f, 0.0f, 0.0f);
		glScalef(2.5f, -2.5, 1.0);
		initTexture();
		glPopMatrix();
		drawHUD();
		break;
	}

	int j = 0;
	
	/*Display dos escudos*/

	for(j=0; j < 4 ; j++){
		//activate();
		_vescudo[j]->drawEscudo(-45 + j * 25);
	}

	/*Display do tiro*/

	for(j=0; j < _vshotsize ; j++){
		//activate();
		_vshot[j]->drawShot();
	}

	/*Display do tiro do alien*/
    
	for(j=0; j < _vshotaliensize; j++){
		//activate();
		_vshotalien[j]->drawShot();
	}
	
	/*Display do alien1 */
    
	for(j=0; j < 11; j++){
		 //activate();
		_valien1[j]->drawAlien1(_alien_x + j, _alien_y_1);
	}

	/*Display da nave */

	//activate();
	_spaceship->drawSpaceship();
    
	/*Display do alien2 */

    for(j = 0; j<11 ;j++){
		//activate();
		_valien2[j]->drawAlien2(_alien_x + j, _alien_y_2);
	}
	
	/*Display do alien3 */

	for(j = 0; j < 11; j++){
		//activate();
		_valien3[j]->drawAlien3(_alien_x + j, _alien_y_3);
	}

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glFlush();
}


void Gestor::readKeyboard(unsigned char key, int mousex, int mousey){
    
    switch(key){
        case 'd':
			_spaceship->Move_Right();
			_spotlight->Move_Right();
            break;
        case 'a':
			_spaceship->Move_Left();
			_spotlight->Move_Left();
            break;
            
        case '1':
            _camera->setCamera(1);
            break;
        
        case '2':
            _camera->setCamera(2);
            break;
            
        case '3':
            _camera->setCamera(3);
            break;

		case '4':
			_spotlight->drawSpotlight(_spaceship->getMovex());
			break;

		case '5':
			_light->drawLight();
			break;
		
		case ' ':
			ShipFire();
			break;

    }
}

void Gestor::idleFunc () {
    
	glutPostRedisplay();
	//glutTimerFunc(1000, update, 0);
    
}

void Gestor::myTimer(){
	
	int j=0;
	_timeElapsed += 100;

	for(j=0; j <_vshotaliensize ; j++) {
        _vshotalien[j]->setytimer(-0.2);
    }

	for(j=0; j < _vshotsize ; j++){
		_vshot[j]->setytimer(0.1);
	}

	if(_timeElapsed == 1000){
		Shotalien(_alien_x, _alien_y_3);

		if(_move == 1){

			if(_time < 4){
				_alien_x += 0.1;
				_time++;
				_timeElapsed = 0;

				for (int i=0; i < 11; i++) {
                    _valien1[i]->setAlien1Positionx(_alien_x + i);
                    _valien2[i]->setAlien2Positionx(_alien_x + i);
                    _valien3[i]->setAlien3Positionx(_alien_x + i);
                    
                }

				return;
			}

			if(_time == 4){
				_alien_y_1 -= 0.1;
				_alien_y_2 -= 0.1;
				_alien_y_3 -= 0.1;
				_time = 0;
				_move = 0;	//Come�a a andar para a esquerda
				_timeElapsed = 0;

				for (int i=0; i < 11; i++) {
                    _valien1[i]->setAlien1Positiony(_alien_y_1);
                    _valien2[i]->setAlien2Positiony(_alien_y_2);
                    _valien3[i]->setAlien3Positiony(_alien_y_3);
                }

				return;
			}

		} else {
	
			if(_time < 4){
				_alien_x -= 0.1;
				_time++;
				_timeElapsed = 0;

				for (int i=0; i < 11; i++) {
                    _valien1[i]->setAlien1Positionx(_alien_x + i);
                    _valien2[i]->setAlien2Positionx(_alien_x + i);
                    _valien3[i]->setAlien3Positionx(_alien_x + i);
                    
                }

				return;
			}

			if(_time == 4){
				_alien_y_1 -= 0.1;
				_alien_y_2 -= 0.1;
				_alien_y_3 -= 0.1;
				_time = 0;
				_move = 1;	//Anda para a direita
				_timeElapsed = 0;

				for (int i=0; i < 11; i++) {
                    _valien1[i]->setAlien1Positiony(_alien_y_1);
                    _valien2[i]->setAlien2Positiony(_alien_y_2);
                    _valien3[i]->setAlien3Positiony(_alien_y_3);
                    
                }

				return;
			}

		}

	}


}

void Gestor::activate(){

	glEnable(GL_DEPTH_TEST);
	glShadeModel(GL_SMOOTH);
	glEnable(GL_LIGHTING);
	glEnable(GL_TEXTURE_2D);
	/*Display da luz ambient*/

	_light->drawLight();

}

void Gestor::initTexture(){


	GLfloat text_a[] = {1.0, 1.0, 1.0, 1.0};
	GLfloat text_d[] = {1.0, 1.0, 1.0, 1.0};
	GLfloat text_s[] = {1.0, 1.0, 1.0, 1.0};
	GLfloat text_e[] = {0.0, 0.0, 0.0, 0.0};
	GLfloat text_sh[] = {128};
	
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_AMBIENT, text_a);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, text_d);
	glMaterialfv(GL_FRONT, GL_SPECULAR, text_s);
	glMaterialfv(GL_FRONT, GL_EMISSION, text_e);
	glMaterialfv(GL_FRONT, GL_SHININESS, text_sh);
	
	glScalef(2.0, 2.0, 1.0);
	glBegin(GL_POLYGON);
	
	for(int i=0; i<256; i++){
		for(int j=0; j<256; j++){
			glBegin(GL_TRIANGLE_STRIP);
			glTexCoord2f(0.00390625*j, 1.0-0.00390625*i); glVertex3f(-10.0+0.078125*j, 10.0-0.078125*i, -2.0);
			glTexCoord2f(0.00390625*(j+1), 1.0-0.00390625*i); glVertex3f(-10.0+0.078125*(j+1), 10.0-0.078125*i, -2.0);
			glTexCoord2f(0.00390625*j, 1.0-0.00390625*(i+1)); glVertex3f(-10.0+0.078125*j, 10.0-0.078125*(i+1), -2.0);
			glTexCoord2f(0.00390625*(j+1), 1.0-0.00390625*(i+1)); glVertex3f(-10.0+0.078125*(j+1), 10.0-0.078125*(i+1), -2.0);
			glEnd();
		}
	}
	glPopMatrix();

}

void Gestor::drawHUD(){

    char string[60];    
    float ambient[] = {1.0f, 1.0f, 1.0f, 1.0f};
	float difuse[] = {1.0f, 1.0f, 1.0f, 1.0f};
    
	glMaterialfv(GL_FRONT, GL_AMBIENT, ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, difuse);
	sprintf(string, "Score %d",_spaceship->getScore()); 
	glPushMatrix();
        int len, i;
        glRasterPos3f(-5.0f, 7.5f, 4.0f);
        glColor3f(1.0f, 1.0f, 0.0f);
        len = (int) strlen(string);
        for (i = 0; i < len; i++)
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string[i]);

	glPopMatrix();
}