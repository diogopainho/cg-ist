#include <iostream>
#include "Gestor.hpp"

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
    
    srand(NULL);
    

}

void Gestor::ShipFire(){

	_vshot.push_back(new Shot(_spaceship->getMovex()));
	_vshotsize = _vshotsize + 1;
}

void Gestor::Shotalien(float x , float y){
    
   r1 = rand() % 11;
    
    for (int i; i < 11; i++) {
        if (_valien3[i] == NULL) {
            _vshotalien.push_back(new ShotAlien(_valien2[i]->getAlien2Positionx(), _alien_y_2));
            _vshotaliensize = _vshotaliensize + 1;
        }

    }
    
    for (int i; i < 11; i++) {
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
	glClear(GL_COLOR_BUFFER_BIT);
	
	glViewport(0, 0, _width, _height);
    //Chama a camera conforme o estado dela (Ortho, Perspective, FPS)
    _camera->myCamera(_spaceship->getMovex(), _width, _height, _camera->getCameraState());    
    
	glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

	int j = 0;
	
	/*Display dos escudos*/

	for(j=0; j < 4 ; j++){
		_light->draw(1);
		_vescudo[j]->drawEscudo(-45 + j * 25);
	}

	/*Display do tiro da nave*/

	for(j=0; j < _vshotsize ; j++){
		_light->draw(4);
		_vshot[j]->drawShot();
	}
    
    /*Display do tiro do alien*/
    
	for(j=0; j < _vshotaliensize; j++){
		_light->draw(4);
		_vshotalien[j]->drawShot();
	}


	/*Display da nave */

	_light->draw(0);
	_spaceship->drawSpaceship();
	
	/*Display do alien1 */
    
	for(j=0; j < 11; j++){
		 _light->draw(2);
		_valien1[j]->drawAlien1(_alien_x + j, _alien_y_1);
	}
    
	/*Display do alien2 */

    for(j = 0; j<11 ;j++){
		_light->draw(3);
		_valien2[j]->drawAlien2(_alien_x + j, _alien_y_2);
	}
	
	/*Display do alien3 */

	for(j = 0; j < 11; j++){
		_light->draw(2);
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
            break;
        case 'a':
			_spaceship->Move_Left();
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
				_move = 0;	//Começa a andar para a esquerda
				_timeElapsed = 0;
                
                for (int i=0; i < 11; i++) {
                    _valien1[i]->setAlien1Positiony(_alien_y_1);
                    _valien2[i]->setAlien2Positiony(_alien_y_2);
                    _valien3[i]->setAlien3Positiony(_alien_y_3);
                    
                    printf("%f\n", _valien1[i]->getAlien1Positiony());
                    
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

	// Set the light position
	GLfloat LightPosition[] = {0.0, 0.0, 5.0, 1.0};
	glLightfv(GL_LIGHT0, GL_POSITION, LightPosition);

	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);

}

