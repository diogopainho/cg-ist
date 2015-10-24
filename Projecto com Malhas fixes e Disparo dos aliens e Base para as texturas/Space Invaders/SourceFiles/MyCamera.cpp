#include "MyCamera.hpp"

using namespace Space_Invaders;

void MyCamera::setCamera(int _numbcamera){
    
    _cameratype = _numbcamera;
}

void MyCamera::myCamera(float moveSpaceShip, int _width, int _height, int _cameratype){
    
    //2D Camera
    if(_cameratype == 1){
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        glOrtho(-2.0f* _width/400, 2.0f*_width/400, -2.0f*_height/400, 2.0f*_height/400, -2.0f, 2.0f);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
    }
    //Perspective Camera
    if(_cameratype == 2){
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();

        gluPerspective(90.0, 2.0*(_width/_height), 0.1, 500);
       
		gluLookAt(0, -5.0, 2.5,
                  0.0, 0.0, 0.0,
                  0.0, 0.0, 3.0);

		glTranslated(-moveSpaceShip, 0,0);

		glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
       
    }
    //FPS Camera
    if (_cameratype == 3) {
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        gluPerspective(90.0, 2.0*(_width/_height), 0.1, 500);

        gluLookAt(0, -2.82, 0.2,
                  0.0, 80.0, 0.0,
                  0.0, 0.0, 3.0);

		glTranslated(-moveSpaceShip, 0,0);

        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
    } 
    
    
}

int MyCamera::getCameraState(){
    
    return _cameratype;
}