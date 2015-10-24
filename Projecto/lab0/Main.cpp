#include "Gestor.hpp"

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

int main(int argc, char** argv){

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize (400, 400);
	glutInitWindowPosition (-1, -1);
	glutCreateWindow("Teste");
	glutDisplayFunc(myDisplay);
	glutReshapeFunc(myReshape);
	glutIdleFunc(idleFunc);
	glutKeyboardFunc(readKeyboard);
	glutTimerFunc(100, timerFunc, 0);
	gestor->activate();
	glutMainLoop();

    return 0;
}