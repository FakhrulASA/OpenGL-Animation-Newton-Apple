#include <GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>
#ifdef __APPLE__
#else
#include<windows.h>
#include<math.h>
#endif
float p=50.0; // Display Measurement with ortho starting from the left -10 and right 10
int state = 1;
//void timer(int);
void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy){
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=0;i<=100;i++){
        float angle = 2.0f * 3.1416f * i/100;

        float x = rx * cosf(angle);
        float y = ry * sinf (angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();
}
void display(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor4f(1,0.9,0.3,0.6);  //sunrays
circle(35,35,20,85);
glColor3f(0.1,0.9,0.2); //field
circle(80,50,50,20);
glColor3f(1,0.6,0.1);  //sun
circle(5,5,20,85);

glColor3f(0,0.6,0.2); //gach head
circle(25,15,75,70);
glColor3f(0,0.6,0.2);
circle(10,22,75,70);
glColor3f(0,0.6,0.2);
circle(10,20,78,70);
glColor3f(0,0.6,0.2);
circle(5,17,82,70);
glColor3f(0,0.6,0.2);
circle(8,20,68,70);
glBegin(GL_POLYGON);
glColor3f(0.8,0.4,0); //gach body
glVertex2f(70,20);
glVertex2f(79,20);
glVertex2f(79,72);
glVertex2f(70,72);
glEnd();
glColor4f(1,0.9,0.3,0.6);  //sunrays
circle(3,3,p,p+2);

glEnd();
glColor3f(1,0.6,0.1);  //head
circle(3,5,65,35);
glBegin(GL_POLYGON); //body
glColor3f(1,0.4,0.3);
glVertex2f(63,32);
glVertex2f(63,24);
glVertex2f(69,24);
glVertex2f(67,32);
glEnd();
glBegin(GL_POLYGON); //leg 1
glColor3f(0.1,0.9,1);
glVertex2f(68.5,24);
glVertex2f(68.5,20);
glVertex2f(58,20);
glVertex2f(58,22);
glVertex2f(68.5,24);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.2,0.7,0.9); //leg 2
glVertex2f(68.5,26);
glVertex2f(68.5,22);
glVertex2f(58,22);
glVertex2f(58,24);
glVertex2f(68.5,26);
glEnd();

glColor3f(0.9,0.9,0.95);  //hair
circle(2,2,65,40);

glColor3f(0.9,0.9,0.95);  //hair
circle(2,2,67,38);

glColor3f(0.9,0.9,0.95);  //hair
circle(2,2,69,36);

glColor3f(0.9,0.9,0.95);  //hair
circle(2,2,68,34);
glColor3f(1.0,1.0,1.0);  //eye
circle(1,1,63.5,36.5);
glColor3f(0.0,0.0,0.0);  //eye
circle(0.5,0.5,63.5,36.5);
glColor3f(0.9,0.9,0.95);  //gof
circle(1,0.7,62.8,34.5);
glColor3f(1.0,0.0,0.0);  //mouth
circle(0.7,0.4,62.8,33.5);

glColor3f(1.0,0.0,0.0);  //mouth
circle(1,2,63,63.5);
glColor3f(1.0,0.0,0.0);  //mouth
circle(1,2,61.8,63.5);

glColor3f(1.0,0.0,0.0);  //mouth
circle(1,2,88,73.5);
glColor3f(1.0,0.0,0.0);  //mouth
circle(1,2,86.8,73.5);

glColor3f(1.0,0.0,0.0);  //light
circle(1,2,86.8,73.5);


  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
   glVertex2f(p,30);       // To draw the object position from the left limit,p
   glVertex2f(p+30,30);
   glVertex2f(p+30,-3);
   glVertex2f(p,30);
  glEnd();
glutSwapBuffers();
}
void timer(int){
 /* if(p<=10) //moving limit with the display measurement p=7 when you wants to right side stop
       p=p+.10; // changing the object position for redisplaying

      else
        p=-10; */// For backing the object continuously


switch(state){   // Left to right & Right to left
    case 1: if(p<7)
            p = p + 0.10;
        else
            state = -1;
            break;
    case -1:
            if(p>0)
            p =p - 0.10;
      else
        state = 1;
        break;
      }



    glutPostRedisplay(); // To redraw the object in the display
    glutTimerFunc(1000/60,timer,0); // 60 frames per second,timer function call itself, o is an integer, passed an argument not passed any value that's why keep it 0


}


void init (void)
{
glEnable(GL_BLEND);
glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
glClearColor (.2, 0.7, 1.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 100.0, 0.0, 100.0, -100.0, 100.0);//glOrtho(left, right, bottom, top, near, far)

}



int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize (1200, 900);
glutInitWindowPosition (100, 100);
glutCreateWindow ("Hatti Matim Tim");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
