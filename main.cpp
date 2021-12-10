#include<windows.h>
#include<mmsystem.h>
#include <GL/glut.h>
#include <math.h>
#define PI 3.1416

static float	tx	=  0.0;
static float	ty	=  0.0;
float p1=-5.0;
float p2= 0;
float p3=-5.0;
float p4=-5;
float p5=-5;
float p6=-5;
float p7=-5;
int day=1;
void Initialize( )
{

	//glClearColor(0.0, 0.8, 1.0, 0.0);
	if(day==1){
        glClearColor(0.6784313, 0.8470588, 0.9019607843, 0.0);
	}
	else if(day==0){
        glClearColor(0.0,0.0,0.0, 0.0);
	}

	glMatrixMode(GL_PROJECTION);
	//gluOrtho2D(0.0, 1000.0, 0.0, 500.0);
	glLoadIdentity();
    //glClearColor (0.0, 0.0, 0.0, 0.0);
gluOrtho2D(-5, 20.0,-5, 20.0);
//sndPlaySound("marriedlife.wav",SND_FILENAME|SND_LOOP);

}
void sky(){
    if(day==1){
        glColor3f(0.6784313, 0.8470588, 0.9019607843);
	}
	else if(day==0){
        glColor3f(0.0,0.0,0.0);
	}
//glColor3f(0.0, 0.0, 0.0);
glBegin(GL_QUADS);
glVertex2f(-5, -5);
glVertex2f(-5,20 );
glVertex2f(20,20);
glVertex2f(20,-5);
glEnd();
}

void circle(float radius,float x,float y) {
    float theta;
    float r=radius+.95;
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++) 	{
            theta=i*3.142/180;
    glVertex2f(x+radius*cos(theta),y+r*sin(theta));
    }
    glEnd();

    }



void circle1(float radius,float x,float y)
{
	int i=0;
	float angle = 0.0;
    float r=radius+.75;
	glBegin(GL_POLYGON);
    glVertex2f(x, y);
		for(i = 0; i < 101; i++)
		{
			angle = 2 * PI * i / 100;

            glVertex2f (x+(cos(angle) * radius),y+( sin(angle) * r));

		}

	glEnd();
}

void circle2(float radius,float x,float y)
{
	int i=0;
	float angle = 0.0;

	glBegin(GL_POLYGON);
    glVertex2f(x, y);
		for(i = 0; i < 101; i++)
		{
			angle = 2 * PI * i / 100;
			if(x<3.7)
            {
                glVertex2f (x-0.2+(cos(angle) * radius),y+1+( sin(angle) * radius));
            }
            else
            {
                glVertex2f (x+0.15+(cos(angle) * radius),y+1+( sin(angle) * radius));
            }


		}

	glEnd();
}
void circle3(float radius,float x,float y)
{
	int i=0;
	float angle = 0.0;

	glBegin(GL_POLYGON);
    glVertex2f(x, y);
		for(i = 0; i < 51; i++)
		{
			angle = 2 * PI * i / 100;

            glVertex2f (x+(cos(angle) * radius),y+( sin(angle) * radius));

		}

	glEnd();
}
void circle4(float radius,float x,float y)
{
	int i=0;
	float angle = 0.0;
   // float x=2.0;
   // float y=7;
	double twicePi = 2.0 * 3.142;
   // x = 0, y = 0;
    glBegin(GL_TRIANGLE_FAN); //BEGIN CIRCLE
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius * cos(i * twicePi / 20))), (y + (radius * sin(i * twicePi / 20)))
            );
    }

	glEnd();
}
void circle5(float radius,float x,float y)
{
	int i=0;
	float angle = 0.0;
   // r=radius+.075
	glBegin(GL_POLYGON);
    glVertex2f(x, y);
		for(i = 0; i < 101; i++)
		{
			angle = 2 * PI * i / 100;

            glVertex2f (x+(cos(angle) * radius),y+( sin(angle) * radius));

		}

	glEnd();
}
void cloud4(){
///CLOUD4

glColor3f(1.25, 0.924, 0.930);
circle3(1,11.5,5);
glEnd();
glColor3f(1.25, 0.924, 0.930);
circle3(1.5,13,5);
glEnd();
glColor3f(1.25, 0.924, 0.930);
circle3(1,14.5,5);
glEnd();
	glFlush();

}
void cloud5(){
///CLOUD5

glColor3f(1.25, 0.924, 0.930);
circle1(.5,10,14);
glEnd();
glColor3f(1.25, 0.924, 0.930);
circle1(1,11,14);
glEnd();
glColor3f(1.25, 0.924, 0.930);
circle1(1.5,12,14);
glEnd();
glColor3f(1.25, 0.924, 0.930);
circle1(1,13,14);
glEnd();
glColor3f(1.25, 0.924, 0.930);
circle1(.5,14,14);
glEnd();
}
void Draw()
{

///HOUSE
///ROOF
glColor3f(0.545098039, 0.2705882353, 0.0745098);
glBegin(GL_QUADS);
glVertex2f(1, 8);
glVertex2f(2,11 );
glVertex2f(4.6, 11);
glVertex2f(5.6, 8);
glEnd();
///BODY
glColor3f(0.5, 1.0, 0.0);
glBegin(GL_QUADS);
glVertex2f(1.5, 5);
glVertex2f(1.5,8 );
glVertex2f(5.1,8);
glVertex2f(5.1, 5);
glEnd();
///FIRE
glColor3f(0.0,0,0);
glBegin(GL_QUADS);
glVertex2f(3.3, 11);
glVertex2f(3.3,12 );
glVertex2f(3.7,12);
glVertex2f(3.7,11);
glEnd();
glColor3f(0.0, 0.0, 0.0);
glBegin(GL_QUADS);
glVertex2f(3.25, 12);
glVertex2f(3.25,12.2 );
glVertex2f(3.75,12.2);
glVertex2f(3.75,12);
glEnd();
///BALLON LINES
///0
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_LINES);
glVertex2f(3.26, 12.2);
glVertex2f(2.8, 15);
glEnd();
glColor3f(0.4862745, 0.98823529, 0.0);;
circle2(0.5,2.8,15);
glEnd();
///1
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_LINES);
glVertex2f(3.26, 12.2);
glVertex2f(3, 14);
glEnd();
glColor4f(1.0, 0.0, 1.0, 0.0);
circle2(0.5,3,14);
glEnd();
///2
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_LINES);
glVertex2f(3.27, 12.2);
glVertex2f(3.1, 15);
glEnd();
glColor4f(1.0, 0.0, 0.0, 0.0);
circle2(0.5,3.1,15);
glEnd();
///3
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_LINES);
glVertex2f(3.29, 12.2);
glVertex2f(3.3, 14);
glEnd();
glColor4f(1.0, 1.0, 0.0, 0.0);
circle2(0.5,3.3,14);
glEnd();
///4
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_LINES);
glVertex2f(3.32, 12.2);
glVertex2f(3.5, 14.5);
glEnd();
glColor3f(0.0, 0.0, 1.0);
circle2(0.5,3.5,14.5);
glEnd();
///5
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_LINES);
glVertex2f(3.39, 12.2);
glVertex2f(3.6, 15.5);
glEnd();
glColor3f(0.0, 1.0, 0.0);
circle2(0.5,3.6,15.5);
glEnd();
///6
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_LINES);
glVertex2f(3.45, 12.2);
glVertex2f(3.7, 15);
glEnd();
glColor3f(0.0, 1.0, 1.0);
circle2(0.5,3.7,15);
glEnd();
///7
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_LINES);
glVertex2f(3.55, 12.2);
glVertex2f(3.72, 13);
glEnd();
glColor4f(0.0, 0.5, 0.0, 0.0);
circle2(0.5,3.72,13);
glEnd();
///8
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_LINES);
glVertex2f(3.62, 12.2);
glVertex2f(3.75, 13.5);
glEnd();
glColor4f(1.0, 0.0, 1.0, 0.0);
circle2(0.5,3.75,13.5);
glEnd();
///9
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_LINES);
glVertex2f(3.65, 12.2);
glVertex2f(3.8, 15.5);
glEnd();
glColor3f(0.0, 0.0, 1.0);
circle2(0.5,3.8,15.5);
glEnd();
///10
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_LINES);
glVertex2f(3.69, 12.2);
glVertex2f(3.9, 14);
glEnd();
glColor3f(1.0, 0.0, 0.0);
circle2(0.5,3.9,14);
glEnd();
///11
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_LINES);
glVertex2f(3.71, 12.2);
glVertex2f(4, 14.5);
glEnd();
glColor4f(1.0, 1.0, 0.0, 0.0);
circle2(0.5,4,14.5);
glEnd();
///12
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_LINES);
glVertex2f(3.72, 12.2);
glVertex2f(4.2, 15);
glEnd();
glColor3f(0.0, 1.0, 0.0);
circle2(0.5,4.2,15);
glEnd();
///13
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_LINES);
glVertex2f(3.74, 12.2);
glVertex2f(4.4, 14);
glEnd();
glColor3f(0.0, 1.0, 1.0);
circle2(0.5,4.4,14);
glEnd();
///**************************************LEFT SIDE*************************************
///LEFT SIDE BLUE AREA
glColor3f(0.5, 1.0, 1.0);
glBegin(GL_QUADS);
glVertex2f(1.5,7);
glVertex2f(1.5,8);
glVertex2f(4,8);
glVertex2f(4,7);
glEnd();
///WHITE AREA
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_QUADS);
glVertex2f(1.5,6.8);
glVertex2f(1.5,7);
glVertex2f(3.6,7);
glVertex2f(3.6,6.8);
glEnd();
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_QUADS);
glVertex2f(1.5,5);
glVertex2f(1.5,8);
glVertex2f(1.6,8);
glVertex2f(1.6,5);
glEnd();

///BROWN AREA
glColor4f(0.9, 0.9, 0.0, 0.0);
glBegin(GL_QUADS);
glVertex2f(1.6,5.3);
glVertex2f(1.6,6.8);
glVertex2f(3.6,6.8);
glVertex2f(3.6,5.3);
glEnd();
///MIDDLE WHITE
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_QUADS);
glVertex2f(2.5,5);
glVertex2f(2.5,8);
glVertex2f(2.6,8);
glVertex2f(2.6,5);
glEnd();
///MIDDLE LAST BROWN
glColor4f(0.9, 0.4, 0.0, 0.0);
glBegin(GL_QUADS);
glVertex2f(2.6,5);
glVertex2f(2.6,5.3);
glVertex2f(3.6,5.3);
glVertex2f(3.6,5);
glEnd();
///STAIRS
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_QUADS);
glVertex2f(2.6,5.25);
glVertex2f(2.6,5.3);
glVertex2f(3.6,5.3);
glVertex2f(3.6,5.25);
glEnd();
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_QUADS);
glVertex2f(2.6,5.15);
glVertex2f(2.6,5.2);
glVertex2f(3.6,5.2);
glVertex2f(3.6,5.15);
glEnd();
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_QUADS);
glVertex2f(2.6,5.05);
glVertex2f(2.6,5.1);
glVertex2f(3.6,5.1);
glVertex2f(3.6,5.05);
glEnd();
///DOOR & WINDOW
///DOOR
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_QUADS);
glVertex2f(2.95,5.3);
glVertex2f(2.95,6.3);
glVertex2f(3.25,6.3);
glVertex2f(3.25,5.3);
glEnd();
glColor4f(1.0, 0.1, 0.0, 0.0);
glBegin(GL_QUADS);
glVertex2f(3,5.3);
glVertex2f(3,6.2);
glVertex2f(3.2,6.2);
glVertex2f(3.2,5.3);
glEnd();

///LOWER WHITE
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_QUADS);
glVertex2f(1.5,5.5);
glVertex2f(1.5,5.7);
glVertex2f(2.5,5.7);
glVertex2f(2.5,5.5);
glEnd();
///WINDOW
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_QUADS);
glVertex2f(1.9,5.9);
glVertex2f(1.9,6.6);
glVertex2f(2.3,6.6);
glVertex2f(2.3,5.9);
glEnd();
///WINDOW Upper Glass
glColor3f(0.0, 0.0, 0.0);
glBegin(GL_QUADS);
glVertex2f(2,6.3);
glVertex2f(2,6.5);
glVertex2f(2.2,6.5);
glVertex2f(2.2,6.3);
glEnd();
///WINDOW LOWER Glass
glColor3f(0.0, 0.0, 0.0);
glBegin(GL_QUADS);
glVertex2f(2,6);
glVertex2f(2,6.2);
glVertex2f(2.2,6.2);
glVertex2f(2.2,6);
glEnd();
///BROWN UNDER WINDOW
glColor4f(0.9, 0.4, 0.0, 0.0);
glBegin(GL_QUADS);
glVertex2f(1.85,5.1);
glVertex2f(1.85,5.2);
glVertex2f(2.35,5.2);
glVertex2f(2.35,5.1);
glEnd();
///**************************************RIGHT SIDE*************************************
///WINDOW1
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_QUADS);
glVertex2f(3.8,5.5);
glVertex2f(3.8,6.6);
glVertex2f(4.2,6.6);
glVertex2f(4.2,5.5);
glEnd();
///WINDOW1 Upper Glass
glColor3f(0.0, 0.0, 0.0);
glBegin(GL_QUADS);
glVertex2f(3.9,6.1);
glVertex2f(3.9,6.5);
glVertex2f(4.1,6.5);
glVertex2f(4.1,6.1);
glEnd();
///WINDOW1 LOWER Glass
glColor3f(0.0, 0.0, 0.0);
glBegin(GL_QUADS);
glVertex2f(3.9,5.6);
glVertex2f(3.9,6);
glVertex2f(4.1,6);
glVertex2f(4.1,5.6);
glEnd();
///WINDOW2
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_QUADS);
glVertex2f(4.4,5.5);
glVertex2f(4.4,6.6);
glVertex2f(4.8,6.6);
glVertex2f(4.8,5.5);
glEnd();
///WINDOW2 Upper Glass
glColor3f(0.0, 0.0, 0.0);
glBegin(GL_QUADS);
glVertex2f(4.5,6.1);
glVertex2f(4.5,6.5);
glVertex2f(4.7,6.5);
glVertex2f(4.7,6.1);
glEnd();
///WINDOW2 LOWER Glass
glColor3f(0.0, 0.0, 0.0);
glBegin(GL_QUADS);
glVertex2f(4.5,5.6);
glVertex2f(4.5,6);
glVertex2f(4.7,6);
glVertex2f(4.7,5.6);
glEnd();
///BROWN UNDER WINDOW
glColor4f(0.9, 0.4, 0.0, 0.0);///WINDOW1
glBegin(GL_QUADS);
glVertex2f(3.75,5.1);
glVertex2f(3.75,5.2);
glVertex2f(4.25,5.2);
glVertex2f(4.25,5.1);
glEnd();
glColor4f(0.9, 0.4, 0.0, 0.0);///WINDOW2
glBegin(GL_QUADS);
glVertex2f(4.35,5.1);
glVertex2f(4.35,5.2);
glVertex2f(4.85,5.2);
glVertex2f(4.85,5.1);
glEnd();
///WHITE BELOW WINODW
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_QUADS);
glVertex2f(3.6,5.5);
glVertex2f(3.6,5.6);
glVertex2f(5,5.6);
glVertex2f(5,5.5);
glEnd();
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_QUADS);
glVertex2f(3.6,5.3);
glVertex2f(3.6,5.4);
glVertex2f(5,5.4);
glVertex2f(5,5.3);
glEnd();
///RIGHT SIDE PINK
glColor4f(1.0, 0.0, 1.0, 0.0);
glBegin(GL_QUADS);
glVertex2f(5,5);
glVertex2f(5,8);
glVertex2f(5.1,8);
glVertex2f(5.1,5);
glEnd();

///***************************ROOF SHADE******************
///BIG SHADE1
glColor3f(0.0, 0.5, 1.0);
glBegin(GL_TRIANGLES);
glVertex2f(3.4, 8);
glVertex2f(4.2,13 );
glVertex2f(5,8);
glEnd();
///BIG SHADE1
glColor4f(1.0, 1.0, 0.0, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(3.5,8);
glVertex2f(4.2,12);
glVertex2f(4.9,8);
glEnd();
///BIG SHADE WINDOW
glColor4f(1.0, 1.0, 0.0, 0.0);
glBegin(GL_QUADS);
glVertex2f(3.6,7);
glVertex2f(3.6,8);
glVertex2f(4.8,8);
glVertex2f(4.8,7);
glEnd();
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_QUADS);
glVertex2f(4,8.5);
glVertex2f(4,10);
glVertex2f(4.4,10);
glVertex2f(4.4,8.5);
glEnd();
///SHADE1 Upper Glass
glColor3f(0.0, 0.0, 0.0);
glBegin(GL_QUADS);
glVertex2f(4.1,9.3);
glVertex2f(4.1,9.7);
glVertex2f(4.3,9.7);
glVertex2f(4.3,9.3);
glEnd();
///SHADE1 LOWER Glass
glColor3f(0.0, 0.0, 0.0);
glBegin(GL_QUADS);
glVertex2f(4.1,8.8);
glVertex2f(4.1,9.2);
glVertex2f(4.3,9.2);
glVertex2f(4.3,8.8);
glEnd();



///SMALL SHADE
glColor3f(0.0, 0.5, 1.0);//for rgb
glBegin(GL_TRIANGLES);
glVertex2f(2.5, 10);
glVertex2f(2.8,11.5 );
glVertex2f(3.1,10);//F
glEnd();
glColor4f(1.0, 1.0, 0.0, 0.0);//for rgb
glBegin(GL_TRIANGLES);
glVertex2f(2.6,10);//F
glVertex2f(2.8,11);//FOR CREATING LINE
glVertex2f(3,10);//F
glEnd();
///SMALL SHADE WINDOW
glColor4f(1.0, 1.0, 0.0, 0.0);
glBegin(GL_QUADS);
glVertex2f(2.62,9);
glVertex2f(2.62,10);
glVertex2f(2.98,10);
glVertex2f(2.98,9);
glEnd();
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_QUADS);
glVertex2f(2.7,9.6);
glVertex2f(2.7,10.4);
glVertex2f(2.9,10.4);
glVertex2f(2.9,9.6);
glEnd();
///SHADE1 Upper Glass
glColor3f(0.0, 0.0, 0.0);
glBegin(GL_QUADS);
glVertex2f(2.75,10.1);
glVertex2f(2.75,10.3);
glVertex2f(2.85,10.3);
glVertex2f(2.85,10.1);
glEnd();
///SHADE1 LOWER Glass
glColor3f(0.0, 0.0, 0.0);
glBegin(GL_QUADS);
glVertex2f(2.75,9.7);
glVertex2f(2.75,9.9);
glVertex2f(2.85,9.9);
glVertex2f(2.85,9.7);
glEnd();
}

void cloud1(){
///ClOUDS
///CLOUD1

glColor3f(1.25, 0.924, 0.930);
circle1(1,-2,11);
glEnd();
glColor3f(1.25, 0.924, 0.930);
circle1(1.5,-1,11);
glEnd();
glColor3f(1.25, 0.924, 0.930);
circle1(1,0,11);
glEnd();
}
void cloud2(){
///CLOUD2

glColor3f(1.25, 0.924, 0.930);
circle1(.5,7,9);
glEnd();
glColor3f(1.25, 0.924, 0.930);
circle1(1,8,9);
glEnd();
glColor3f(1.25, 0.924, 0.930);
circle1(1.5,9,9);
glEnd();
glColor3f(1.25, 0.924, 0.930);
circle1(1,10,9);
glEnd();
glColor3f(1.25, 0.924, 0.930);
circle1(.5,11,9);
glEnd();
}
void cloud3(){
///CLOUD3

glColor3f(1.25, 0.924, 0.930);
circle3(1,13,13);
glEnd();
glColor3f(1.25, 0.924, 0.930);
circle3(1.5,14,13);
glEnd();
glColor3f(1.25, 0.924, 0.930);
circle3(2,15,13);
glEnd();
glColor3f(1.25, 0.924, 0.930);
circle3(1,16.5,13);
glEnd();
}


///******************************STATIC OBJECTS**************************
void sun(){

///SUN
if(day==1){
    glColor4f(1.0, 1.0, 0.0, 0.0);
circle(1,0,16);
glEnd();
}
else if(day==0)
{
 glColor3f(1.25, 0.924, 0.930);
circle(1,16,16);
glEnd();
}
}
void hill_small(){
///GREEN
glColor3f(0.5, 0.8, 0.0);
glBegin(GL_QUADS);
glVertex2f(-5,-5);
glVertex2f(-5,0);
glVertex2f(20,0);
glVertex2f(20,-5);
glEnd();
///BROWN
glColor3f(0.823529, 0.7058823, 0.5490196);
glBegin(GL_QUADS);
glVertex2f(-5,-2);
glVertex2f(-5,0);
glVertex2f(20,0);
glVertex2f(20,-2);
glEnd();

///HILLS
///HILL1
glColor3f(0.5, 0.7, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(-5,0);
glVertex2f(-3,4);
glVertex2f(-1,0);
glEnd();
///HILL2
glColor3f(0.5, 0.5, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(-1,0);
glVertex2f(1,2);
glVertex2f(3,0);
glEnd();
///HILL3
glColor3f(0.5, 0.5, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(2.5,0);
glVertex2f(3,2);
glVertex2f(4,0);
glEnd();
///HILL4
glColor3f(0.5, 0.4, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(4,0);
glVertex2f(6,4);
glVertex2f(8,0);
glEnd();
///HILL5
glColor3f(0.5, 0.5, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(7.5,0);
glVertex2f(9,3);
glVertex2f(10,0);
glEnd();
///HILL6
glColor3f(0.5, 0.3, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(10,0);
glVertex2f(12,2);
glVertex2f(15,0);
glEnd();
///HILL7
glColor3f(0.5, 0.4, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(14,0);
glVertex2f(16,3);
glVertex2f(17,0);
glEnd();
///HILL8
glColor3f(0.5, 0.6, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(17,0);
glVertex2f(18.5,4);
glVertex2f(20,0);
glEnd();


///TREE1
glColor3f(0.5, 1.0, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(-4,0.5);
glVertex2f(-3,1.5);
glVertex2f(-2,0.5);
glEnd();
glColor3f(0.5, 1.0, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(-4,0);
glVertex2f(-3,1);
glVertex2f(-2,0);
glEnd();
glColor3f(0.5, 1.0, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(-4,-.5);
glVertex2f(-3,0.5);
glVertex2f(-2,-.5);
glEnd();
glColor3f(0.38, 0.21, 0.26);
glBegin(GL_QUADS);
glVertex2f(-2.9,-3);
glVertex2f(-2.9,-.5);
glVertex2f(-3.1,-.5);
glVertex2f(-3.1,-3);
glEnd();

///TREE2
glColor3f(0.5, 1.0, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(-2,0.5);
glVertex2f(-1,1.5);
glVertex2f(0,0.5);
glEnd();
//glColor3f(0.431372549, 0.545098039, 0.239215686);//bottle green
glColor3f(0.5, 1.0, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(-2,0);
glVertex2f(-1,1);
glVertex2f(0,0);
glEnd();
glColor3f(0.5, 1.0, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(-2,-0.5);
glVertex2f(-1,.5);
glVertex2f(0,-0.5);
glEnd();
glColor3f(0.38, 0.21, 0.26);
glBegin(GL_QUADS);
glVertex2f(-1.1,-3);
glVertex2f(-1.1,-0.5);
glVertex2f(-0.9,-0.5);
glVertex2f(-0.9,-3);
glEnd();
///TREE3
glColor3f(0.5, 1.0, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(3,0.5);
glVertex2f(4,1.5);
glVertex2f(5,0.5);
glEnd();
glColor3f(0.5, 1.0, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(3,0);
glVertex2f(4,1);
glVertex2f(5,0);
glEnd();
glColor3f(0.5, 1.0, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(3,-.5);
glVertex2f(4,0.5);
glVertex2f(5,-.5);
glEnd();
glColor3f(0.38, 0.21, 0.26);
glBegin(GL_QUADS);
glVertex2f(3.9,-3);
glVertex2f(3.9,-.5);
glVertex2f(4.1,-.5);
glVertex2f(4.1,-3);
glEnd();
///TREE4
glColor3f(0.5, 1.0, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(5,0.5);
glVertex2f(6,1.5);
glVertex2f(7,0.5);
glEnd();
glColor3f(0.5, 1.0, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(5,0);
glVertex2f(6,1);
glVertex2f(7,0);
glEnd();
glColor3f(0.5, 1.0, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(5,-.5);
glVertex2f(6,0.5);
glVertex2f(7,-.5);
glEnd();
glColor3f(0.38, 0.21, 0.26);
glBegin(GL_QUADS);
glVertex2f(5.9,-3);
glVertex2f(5.9,-.5);
glVertex2f(6.1,-.5);
glVertex2f(6.1,-3);
glEnd();
///TREE5
glColor3f(0.5, 1.0, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(7,0.5);
glVertex2f(8,1.5);
glVertex2f(9,0.5);
glEnd();
glColor3f(0.5, 1.0, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(7,0);
glVertex2f(8,1);
glVertex2f(9,0);
glEnd();
glColor3f(0.5, 1.0, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(7,-.5);
glVertex2f(8,0.5);
glVertex2f(9,-.5);
glEnd();
glColor3f(0.38, 0.21, 0.26);
glBegin(GL_QUADS);
glVertex2f(7.9,-3);
glVertex2f(7.9,-.5);
glVertex2f(8.1,-.5);
glVertex2f(8.1,-3);
glEnd();
///TREE6
glColor3f(0.5, 1.0, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(9,0.5);
glVertex2f(10,1.5);
glVertex2f(11,0.5);
glEnd();
glColor3f(0.5, 1.0, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(9,0);
glVertex2f(10,1);
glVertex2f(11,0);
glEnd();
glColor3f(0.5, 1.0, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(9,-.5);
glVertex2f(10,0.5);
glVertex2f(11,-.5);
glEnd();
glColor3f(0.38, 0.21, 0.26);
glBegin(GL_QUADS);
glVertex2f(9.9,-3);
glVertex2f(9.9,-.5);
glVertex2f(10.1,-.5);
glVertex2f(10.1,-3);
glEnd();
///TREE7
glColor3f(0.5, 1.0, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(14,0.5);
glVertex2f(15,1.5);
glVertex2f(16,0.5);
glEnd();
glColor3f(0.5, 1.0, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(14,0);
glVertex2f(15,1);
glVertex2f(16,0);
glEnd();
glColor3f(0.5, 1.0, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(14,-.5);
glVertex2f(15,0.5);
glVertex2f(16,-.5);
glEnd();
glColor3f(0.38, 0.21, 0.26);
glBegin(GL_QUADS);
glVertex2f(14.9,-3);
glVertex2f(14.9,-.5);
glVertex2f(15.1,-.5);
glVertex2f(15.1,-3);
glEnd();
///TREE8
glColor3f(0.5, 1.0, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(16,0.5);
glVertex2f(17,1.5);
glVertex2f(18,0.5);
glEnd();
glColor3f(0.5, 1.0, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(16,0);
glVertex2f(17,1);
glVertex2f(18,0);
glEnd();
glColor3f(0.5, 1.0, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f(16,-.5);
glVertex2f(17,0.5);
glVertex2f(18,-.5);
glEnd();
glColor3f(0.38, 0.21, 0.26);
glBegin(GL_QUADS);
glVertex2f(16.9,-3);
glVertex2f(16.9,-.5);
glVertex2f(17.1,-.5);
glVertex2f(17.1,-3);
glEnd();
///************************SMALL HOUSES****************
///ROOF1
glColor4f(1.0, 0.4, 0.0, 0.0);
glBegin(GL_QUADS);
glVertex2f(0.5, -1);
glVertex2f(0.5,1 );
glVertex2f(2.5, 0);
glVertex2f(2.5, -1);
glEnd();
///BODY1
glColor3f(1.0, 0.82745098, 0.60784313);
glBegin(GL_QUADS);
glVertex2f(.7, -3);
glVertex2f(.7,-1 );
glVertex2f(2.3, -1);
glVertex2f(2.3, -3);
glEnd();
///WINODW
glColor4f(0.0, 0.0, 0.0, 0.0);
glBegin(GL_QUADS);
glVertex2f(.8, -2.5);
glVertex2f(.8,-1.5 );
glVertex2f(1.1, -1.5);
glVertex2f(1.1, -2.5);
glEnd();
glColor4f(0.0, 0.0, 0.0, 0.0);
glBegin(GL_QUADS);
glVertex2f(1.9, -2.5);
glVertex2f(1.9,-1.5 );
glVertex2f(2.2, -1.5);
glVertex2f(2.2, -2.5);
glEnd();
///DOOR
glColor4f(0.0, 0.0, 0.0, 0.0);
glBegin(GL_QUADS);
glVertex2f(1.3, -3);
glVertex2f(1.3,-1.5 );
glVertex2f(1.7, -1.5);
glVertex2f(1.7, -3);
glEnd();
///ROOF2
glColor4f(1.0, 0.4, 0.0, 0.0);
glBegin(GL_QUADS);
glVertex2f(11.5, -1);
glVertex2f(11.5,1 );
glVertex2f(13.5, 0);
glVertex2f(13.5, -1);
glEnd();
///BODY1
glColor3f(1.0, 0.82745098, 0.60784313);
glBegin(GL_QUADS);
glVertex2f(11.7, -3);
glVertex2f(11.7,-1 );
glVertex2f(13.3, -1);
glVertex2f(13.3, -3);
glEnd();
///WINODW
glColor3f(0.0,0,0);
//glColor3f(0.6470588,0.1647,0.1647);
glBegin(GL_QUADS);
glVertex2f(11.8, -2.5);
glVertex2f(11.8,-1.5 );
glVertex2f(12.1, -1.5);
glVertex2f(12.1, -2.5);
glEnd();
glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex2f(12.9, -2.5);
glVertex2f(12.9,-1.5 );
glVertex2f(13.2, -1.5);
glVertex2f(13.2, -2.5);
glEnd();
///DOOR
glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex2f(12.3, -3);
glVertex2f(12.3,-1.5 );
glVertex2f(12.7, -1.5);
glVertex2f(12.7, -3);
glEnd();

}
void Move2()
{
    glPushMatrix();

   glTranslatef(p1,p2,0);


   Draw();


   glPopMatrix();



    if(p1<=20.0){
      p1=p1+0.01;
      if(p1>=-7 && p1<=5 )
      {
          p2=p2+0.004;
      }
      else{
        p2=p2-0.003;
      }

    }
  else{
       p1=-10;
       p2=0;

  }

 glutPostRedisplay();

}
void move3(){
    glPushMatrix();
   glTranslatef(p3,0,0);
   cloud1();
   glPopMatrix();


    if(p3<=25.0){
      p3=p3+0.09;
    }
  else{
       p3=-20;

  }
 glutPostRedisplay();

}
void move4(){
    glPushMatrix();
   glTranslatef(p4,0,0);
   cloud2();
   glPopMatrix();


    if(p4<=25){
      p4=p4+0.05;
    }
  else{
       p4=-20;

  }
 glutPostRedisplay();

}
void move5(){
    glPushMatrix();
   glTranslatef(p5,0,0);
   cloud3();
   glPopMatrix();


    if(p5<=25.0){
      p5=p5+0.07;
    }
  else{
       p5=-20;

  }
 glutPostRedisplay();

}
void move6(){
    glPushMatrix();
   glTranslatef(p6,0,0);
   cloud4();
   glPopMatrix();


    if(p6<=20.0){
      p6=p6+0.03;
    }
  else{
       p6=-20;

  }
 glutPostRedisplay();

}
void move7(){
    glPushMatrix();
   glTranslatef(p7,0,0);
   cloud5();
   glPopMatrix();


    if(p7<=20.0){
      p7=p7+0.08;
    }
  else{
       p7=-20;

  }
 glutPostRedisplay();

}


void display(void)
{
glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 1.0);

	sky();

    if(day==1){
    //glPushMatrix();
     sun();
        hill_small();
        //glPopMatrix();
         glPushMatrix();
     move5();
      glPopMatrix();
       glPushMatrix();
     move7();
      glPopMatrix();
 //glPushMatrix();
     Move2();
      //glPopMatrix();
 glPushMatrix();
     move3();
      glPopMatrix();

glPushMatrix();
     move4();
      glPopMatrix();
glPushMatrix();
     move6();
      glPopMatrix();}
      else if(day==0)
      {
           //glPushMatrix();
     sun();
        hill_small();
       // glPopMatrix();
      //  glPushMatrix();
     Move2();
     // glPopMatrix();
 glPushMatrix();
      }
	glutSwapBuffers();

}
void spe_key(int key, int x, int y)
{


	switch (key) {

		case GLUT_KEY_LEFT:
				day=1;
				glutPostRedisplay();
				break;

		case GLUT_KEY_RIGHT:
				day=0;

				glutPostRedisplay();
				break;
	  default:
			break;
	}
}


int main(int iArgc , char** cppArgv)
{
glutInit(&iArgc , cppArgv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(600,600);
glutInitWindowPosition(100,100);
glutCreateWindow("HOUSE IN THE SKY");
Initialize();
glutDisplayFunc(display);
PlaySound("marriedlife2.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
glutSpecialFunc(spe_key);

glutMainLoop();
return 0;
}
