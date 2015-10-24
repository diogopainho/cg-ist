#include "Gestor.hpp"
#include "BMPLoader.h"

using namespace Space_Invaders; 

Gestor *gestor = new Gestor();


void myDisplay(){
	gestor->myDisplay();
}

void myReshape(GLsizei w, GLsizei h){
	gestor->myReshape(w, h);
}

void idleFunc(){
	gestor->idleFunc();
}

void timerFunc(int t){
	gestor->myTimer();
	glutTimerFunc(100, timerFunc, 0);
}
void readKeyboard(unsigned char key, int mousex, int mousey){
	gestor->readKeyboard(key, mousex, mousey);
}


void LoadTexture( const string & textureFilename)
{
	BMPloader * bitmap = new BMPloader( textureFilename);
	if ( bitmap->Isvalid() ){
		glPixelStoref(GL_UNPACK_ALIGNMENT, 1);
		glEnable(GL_TEXTURE_2D);
		glTexImage2D( GL_TEXTURE_2D, 0, GL_RGB, bitmap->Width(), bitmap->Heigth(), 0, GL_RGB, GL_UNSIGNED_BYTE, bitmap->Image());
		glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
		glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
		glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
		glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
		glTexEnvf( GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);


	}
	
	delete bitmap;
}

int main(int argc, char** argv){

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowSize (800, 800);
	glutInitWindowPosition (-1, -1);
	glutCreateWindow("Space Invaders");
	glutDisplayFunc(myDisplay);
	glutReshapeFunc(myReshape);
	glutIdleFunc(idleFunc);
	glutKeyboardFunc(readKeyboard);
	glutTimerFunc(100, timerFunc, 0);
	gestor->activate();
	LoadTexture("space.bmp");
	glutMainLoop();

    return 0;
}
