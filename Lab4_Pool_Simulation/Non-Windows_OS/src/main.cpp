#include "Graphics.h"
#include "poolball.h"
#include "PoolTable.h"

PoolTable Table( MAX_BALLS );
void drawScene(void) {
    clearWindow(); // clear the last scene
    Table.drawBalls();
    glutSwapBuffers();      // double buffering control
}

void animate() {
    // move your objects here
    Table.moveBalls();
    glutPostRedisplay();
    pause_ms(16);
}

// keyboard handler to terminate the program when "q" key is pressed
void handleKey(unsigned char key, int x, int y) {
    switch(key) {
        case 'q':
            exit(0);
            break;
        case 27:
            exit(0);
            break;
    }
}


int main(int argc, char **argv) {
    graphicsSetup(argc, argv);      // initialize the graphics system
    glutDisplayFunc(drawScene);     // tell GLUT what function draws the scene
    glutIdleFunc(animate);          // Move objects when animating
    glutKeyboardFunc(handleKey);    // set up the "q" key to quit
    glutMainLoop();                 // GLUT will control the action
    //glutSwapBuffers();              // double buffering control
}
