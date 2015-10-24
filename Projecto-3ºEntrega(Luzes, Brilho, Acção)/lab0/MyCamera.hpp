#ifndef _MYCAMERA_H_
#define _MYCAMERA_H_

#include <GL/glut.h>

namespace Space_Invaders {
    
    class MyCamera {
        
        int _cameratype;
        
    public:
        
        MyCamera(){_cameratype = 1;}
        
        ~MyCamera(){}
        
        
        void myCamera(float moveSpaceShip, int _width, int height, int _cameratype);
        void setCamera(int _numbcamera);
        int getCameraState();
    };
}

#endif
