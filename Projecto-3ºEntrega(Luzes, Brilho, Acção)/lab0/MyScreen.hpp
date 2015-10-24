#ifndef _MYSCREEN_H_
#define _MYSCREEN_H_

#include <GL/glut.h>

namespace Space_Invaders {
    
    class MyScreen {
        
		float _width;
        float _height;
        
        
    public:
        
        MyScreen(){
            _width = 800;
            _height = 400;
        }
        
        ~MyScreen(){}
        
        
       // void initScreen(int argc, char** argv);
        int getWidth();
        int getHeigth();
        void setWidth(int _newwidth);
        void setHeight(int _newheight);
        
    };
}

#endif
