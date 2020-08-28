#include <GL/gl.h>
#include <GL/glut.h>
#include<iostream>
#include<stdio.h>
#ifdef __APPLE_
#else
#include<windows.h>
#include<mmsystem.h>
#include<math.h>
#endif
float p=1.0; // Display Measurement with ortho starting from the left -10 and right 10
int state = 1;
float p2=1.0;
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
circle(35,35,25-p,80-p+0.10);

glColor3f(1,0.6,0.1);  //sun
circle(5,5,25-p,80-p+0.10);


glColor3f(0.3,0.6,0.9);  //bird1
circle(3,1.5,90+p2+1,95);
glColor3f(0.3,0.6,0.9);  //bird(head)
circle(1,1,87+p2+1,95);
glColor3f(0.0,0.0,0.0);  //birdeye
circle(0.3,0.3,86.5+p2+1,95);
glBegin(GL_POLYGON);
glColor3f(0.8,0.7,0.2);//mouth
glVertex2f(86+p2+1,94.5);
glVertex2f(84.5+p2+1,95);
glVertex2f(86+p2+1,95.5);
glVertex2f(86+p2+1,94.5);
glEnd();
/*
glBegin(GL_POLYGON);
glColor3f(0.5,0.7,1.0);//wing
glVertex2f(93+p2+1,95);
glVertex2f(95+p2+1,98);
glVertex2f(95+p2+1,95);
glVertex2f(93+p2+1,93);
glEnd();*/
glBegin(GL_POLYGON);
glColor3f(0.9,0.8,0.0);//wing
glVertex2f(90+p2+1,96);
glVertex2f(92+p2+1,99);
glVertex2f(92+p2+1,96);
glVertex2f(90+p2+1,94);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.9,0.8,0.0);//wing
glVertex2f(89+p2+1,96);
glVertex2f(91+p2+1,99);
glVertex2f(91+p2+1,96);
glVertex2f(89+p2+1,94);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.9,0.8,0.0);//leza
glVertex2f(93+p2+1,95);
glVertex2f(96+p2+1,98);
glVertex2f(96+p2+1,95);
glVertex2f(93+p2+1,94);
glEnd();

glColor3f(0.1,0.9,0.2); //field
circle(80,50,50,20);
for(int i=0;i<50;i=i+10){
int j=50, k=-5;
glColor3f(0.9,0,0.1);  //flower
circle(1.5,1.5,10+i-k,10+j);
glColor3f(0.9,0.8,0.0);  //flower
circle(1.5,1.5,10+i-k,13+j);
glColor3f(0.9,0.8,0.0);  //flower
circle(1.5,1.5,10+i-k,7+j);
glColor3f(0.9,0.8,0.0);  //flower
circle(1.5,1.5,7+i-k,10+j);
glColor3f(0.9,0.8,0.0);  //flower
circle(1.5,1.5,13+i-k,10+j);
}
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

glColor3f(1.0,0.0,0.0);  //apple
circle(1.5,2,65.5,63.5-p);
glColor3f(1.0,0.0,0.0);  //apple
circle(1.5,2,64.3,63.5-p);
glColor3f(1.0,0.0,0.0);  //apple
circle(1.5,2,76.5,75.5);
glColor3f(1.0,0.0,0.0);  //apple
circle(1.5,2,75.3,75.5);
glColor3f(1.0,0.0,0.0);  //apple
circle(1.5,2,80.5,86.5);
glColor3f(1.0,0.0,0.0);  //apple
circle(1.5,2,79.3,86.5);
glColor3f(1.0,0.0,0.0);  //apple
circle(1.5,2,56.5,75.5);
glColor3f(1.0,0.0,0.0);  //apple
circle(1.5,2,55.3,75.5);
glEnd();
glColor3f(1,0.6,0.1);  //head
circle(3,5,65,35);
glBegin(GL_POLYGON); //body
glColor3f(1,0.4,0.3);
glVertex2f(62,32);
glVertex2f(62,24);
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
glBegin(GL_POLYGON);
glColor3f(0.2,0.7,0.9); //hamd
glVertex2f(64,32);
glVertex2f(58,35);
glVertex2f(58,31);
glVertex2f(64,31);

glEnd();
for(int i=0;i<50;i=i+10){
glColor3f(0.9,0,0.1);  //flower
circle(1.5,1.5,10+i,10);
glColor3f(0.9,0.8,0.0);  //flower
circle(1.5,1.5,10+i,13);
glColor3f(0.9,0.8,0.0);  //flower
circle(1.5,1.5,10+i,7);
glColor3f(0.9,0.8,0.0);  //flower
circle(1.5,1.5,7+i,10);
glColor3f(0.9,0.8,0.0);  //flower
circle(1.5,1.5,13+i,10);
}
for(int i=0;i<50;i=i+10){
int j=10, k=5;
glColor3f(0.9,0,0.1);  //flower
circle(1.5,1.5,10+i-k,10+j);
glColor3f(0.9,0.8,0.0);  //flower
circle(1.5,1.5,10+i-k,13+j);
glColor3f(0.9,0.8,0.0);  //flower
circle(1.5,1.5,10+i-k,7+j);
glColor3f(0.9,0.8,0.0);  //flower
circle(1.5,1.5,7+i-k,10+j);
glColor3f(0.9,0.8,0.0);  //flower
circle(1.5,1.5,13+i-k,10+j);
}
for(int i=0;i<50;i=i+10){
int j=20, k=1;
glColor3f(0.9,0,0.1);  //flower
circle(1.5,1.5,10+i-k,10+j);
glColor3f(0.9,0.8,0.0);  //flower
circle(1.5,1.5,10+i-k,13+j);
glColor3f(0.9,0.8,0.0);  //flower
circle(1.5,1.5,10+i-k,7+j);
glColor3f(0.9,0.8,0.0);  //flower
circle(1.5,1.5,7+i-k,10+j);
glColor3f(0.9,0.8,0.0);  //flower
circle(1.5,1.5,13+i-k,10+j);
}

for(int i=0;i<50;i=i+10){
int j=30, k=5;
glColor3f(0.9,0,0.1);  //flower
circle(1.5,1.5,10+i-k,10+j);
glColor3f(0.9,0.8,0.0);  //flower
circle(1.5,1.5,10+i-k,13+j);
glColor3f(0.9,0.8,0.0);  //flower
circle(1.5,1.5,10+i-k,7+j);
glColor3f(0.9,0.8,0.0);  //flower
circle(1.5,1.5,7+i-k,10+j);
glColor3f(0.9,0.8,0.0);  //flower
circle(1.5,1.5,13+i-k,10+j);
}
for(int i=0;i<50;i=i+10){
int j=40, k=1;
glColor3f(0.9,0,0.1);  //flower
circle(1.5,1.5,10+i-k,10+j);
glColor3f(0.9,0.8,0.0);  //flower
circle(1.5,1.5,10+i-k,13+j);
glColor3f(0.9,0.8,0.0);  //flower
circle(1.5,1.5,10+i-k,7+j);
glColor3f(0.9,0.8,0.0);  //flower
circle(1.5,1.5,7+i-k,10+j);
glColor3f(0.9,0.8,0.0);  //flower
circle(1.5,1.5,13+i-k,10+j);
}

glColor3f(1,0.6,0.1);  //findger
circle(1.5,0.7,58,33);
glColor3f(1,0.6,0.1);  //findger
circle(1.5,0.7,58,34);
glColor3f(1,0.6,0.1);  //findger
circle(1.5,0.7,58,32);
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
circle(1,2,88,73.5);
glColor3f(1.0,0.0,0.0);  //mouth
circle(1,2,86.8,73.5);

glColor3f(1.0,0.0,0.0);  //light
circle(1,2,86.8,73.5);

glBegin(GL_POLYGON);
glColor3f(0.1,0.9,0.2); //spacer
glVertex2f(58,0);
glVertex2f(68,0);
glVertex2f(68,20);
glVertex2f(58,20);

glEnd();
glutSwapBuffers();
}
void timer(int){
if(p<=20) //moving limit with the display measurement p=7 when you wants to right side stop
       p=p+.20; // changing the object position for redisplaying

      else
        p=-.20;



switch(state){   // Left to right & Right to left
    case 1: if(p<10)
        {


        p = p - 0.11;
        }


         if(p2<10)
        {

        p2=p2-0.3;

        }

        else
            state = -1;
            break;
    case -1:

            if(p>50)
            {


            p =p +0.11;

            p2=p2+0.2;


            }
                 if(p2>50)
            {




            p2=p2+0.3;


            }

      else

          state = 0;
        break;
      }



    glutPostRedisplay(); // To redraw the object in the display
    glutTimerFunc(1000/60,timer,0); // 60 frames per second,timer function call itself, o is an integer, passed an argument not passed any value that's why keep it 0



}

void timer2(int){
 /* if(p<=10) //moving limit with the display measurement p=7 when you wants to right side stop
       p=p+.10; // changing the object position for redisplaying

      else
        p=-10; */// For backing the object continuously


switch(state){   // Left to right & Right to left
    case 1: if(p2<50)


        p2 = p2 - 5;




        else
            state = -1;
            break;
    case -1:

            if(p2>50)
            p2 =p2 +5;

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
glClearColor (.7, 1.0, 1.0, 0.0);
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

glutCreateWindow ("NEWTON");
init ();
glutDisplayFunc(display);
 glutTimerFunc(0,timer,0);
sndPlaySound("sound.wav",SND_ASYNC);
glutMainLoop();
return 0;
}
