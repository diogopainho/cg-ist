#include "MyScreen.hpp"

using namespace Space_Invaders;


int MyScreen::getWidth(){
    
    return _width;
}

int MyScreen::getHeigth(){
    return _height;
}

void MyScreen::setWidth(int _newwidth){
    
    _width = _newwidth;

}

void MyScreen::setHeight(int _newheight){
    
    _height = _newheight;

}
