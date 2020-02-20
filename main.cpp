#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>

/* GLUT callback Handlers */
static void resize(int width, int height)
{
    const float ar = (float) width / (float) height;

    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-ar, ar, -1.0, 1.0, 3.0, 100.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity() ;
}

static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);




    glBegin(GL_POLYGON);//uporer part


        glColor3d(0,128,128);
        glVertex3f(0,6,-20);//1st

        glColor3d(0,128,128);
        glVertex3f(5,3,-20);//2nd

        glColor3d(0,128,128);
        glVertex3f(-5,3,-20);//3rd

        glColor3d(0,128,128);
        glVertex3f(0,6,-20);//4th


    glEnd();

     glBegin(GL_POLYGON);//uporer part


        glColor3d(128,0,0);
        glVertex3f(5,3,-20);//1st

        glColor3d(128,0,0);
        glVertex3f(5,-3,-20);//2nd

          glColor3d(128,0,0);
        glVertex3f(-5,-3,-20);//3rd

          glColor3d(128,0,0);
        glVertex3f(-5,3,-20);//4th


    glEnd();
     glBegin(GL_POLYGON);//uporer part


        glColor3d(0,255,0);
        glVertex3f(3,3,-20);//1st

        glColor3d(0,255,0);
        glVertex3f(3,-3,-20);//2nd

          glColor3d(0,255,0);
        glVertex3f(-3,-3,-20);//3rd

           glColor3d(0,255,0);
        glVertex3f(-3,3,-20);//4th


    glEnd();
    glBegin(GL_POLYGON);//uporer part


           glColor3d(0,0,128);
        glVertex3f(1,0,-20);//1st

          glColor3d(0,0,128);
        glVertex3f(1,-3,-20);//2nd

             glColor3d(0,0,128);
        glVertex3f(-1,-3,-20);//3rd

           glColor3d(0,0,128);
        glVertex3f(-1,0,-20);//4th


    glEnd();










    glutSwapBuffers();
}


static void key(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 27 :
    case 'q':
        exit(0);
        break;
    }
    glutPostRedisplay();
}

static void idle(void)
{
    glutPostRedisplay();
}

/* Program entry point */
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("GLUT quadPoly");

    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutKeyboardFunc(key);
    glutIdleFunc(idle);

    glClearColor(0,0,0,0);

    glutMainLoop();

    return EXIT_SUCCESS;
}
