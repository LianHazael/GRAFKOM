/*
 * Praktikum 2
 * 11S16066
 * Lian Agusman Marpaung
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */
#include <windows.h>
#include <GL/glut.h>



void init(void) {
    glClearColor(1.0, 1.0, 1.0, 0.0);

    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 200.0, 0.0, 150.0);
    }

void Triangle(void){
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.9, 0.3, 0.2);

int p1[]={200,100};
int p2[]={400,100};
int p3[]={550,300};
int p4[]={400,480};
int p5[]={200,480};
int p6[]={50,300};

glBegin (GL_TRIANGLE_FAN);
glVertex2iv (p1);
glVertex2iv (p2);
glVertex2iv (p3);
glVertex2iv (p4);
glVertex2iv (p5);
glVertex2iv (p6);

    glEnd();

    glFlush();
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(50, 100);
    glutInitWindowSize(640, 480);
    glutCreateWindow("OpenGL Practicum 02 TRIANGLE");

    init ();
    glutDisplayFunc(Triangle);
    glutMainLoop();
    return 0;
    }
