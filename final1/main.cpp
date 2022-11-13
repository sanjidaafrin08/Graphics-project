#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float windowWidth=800;
float windowHeight=600;
float bx=0;
bool bscale=false;
float sx=0;
bool sscale=false;
float cx=0;

void sun(){
glPushMatrix();
glColor3ub(255,128,0);
glutSolidSphere(12,100,8);
glPopMatrix();
glEnd();
}
void cloud(){
glPushMatrix();
glColor3ub(255,255,255);
glutSolidSphere(8,100,8);
glPopMatrix();
glEnd();
}
void one(){
glPushMatrix();
glColor3ub(0,100,0);
glutSolidSphere(8,100,8);
glPopMatrix();
glEnd();

}

void house(){
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(21,2,2);
    glVertex2f(-10,-65);
    glVertex2f(20,-65);
    glVertex2f(19.5,-60);
    glVertex2f(-10.5,-60);
    glEnd();

glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(21,2,2);
    glVertex2f(-40,-64.5);
    glVertex2f(-10,-65);
    glVertex2f(-10.5,-60);
    glVertex2f(-40.5,-59.5);
    glEnd();
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub (218,215,215);
    glVertex2f(-10.5,-60);
    glVertex2f(-10.5,-52);
    glVertex2f(19.5,-52);
    glVertex2f(19.5,-60);
    glEnd();
glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(204,102,0);
    glVertex2f(-38,-51);
    glVertex2f(-40.5,-51);
    glVertex2f(-30,-30);
    glVertex2f(-25.5,-30);
    glEnd();
glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3ub (218,215,215);
    glVertex2f(-36.7,-48);
    glVertex2f(-10,-48);
    glVertex2f(-26,-30);
    glEnd();
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub (218,215,215);
    glVertex2f(-36.7,-60);
    glVertex2f(-36.7,-48);
    glVertex2f(-9.5,-48);
    glVertex2f(-9.5,-60);
    glEnd();
glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(204,102,0);
    glVertex2f(-10.5,-52);
    glColor3ub(255,255,0);
    glVertex2f(19.5,-52);
    glColor3ub(204,102,0);
    glVertex2f(4.5,-30);
    glColor3ub(204,102,0);
    glVertex2f(-25.5,-30);
    glEnd();
//door
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub (75,72,65);
    glVertex2f(-30,-60);
    glColor3ub(0,0,0);
    glVertex2f(-30,-48);
    glVertex2f(-20,-48);
    glColor3ub(75,72,65);
    glVertex2f(-20,-60);
    glEnd();
glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-13,-60);
    glVertex2f(-13,-48);
    glEnd();
glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-36.7,-60);
    glVertex2f(-36.7,-48);
    glEnd();
glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(19.5,-52);
    glVertex2f(19.5,-60);
    glEnd();
glPushMatrix();
glBegin(GL_LINE_STRIP);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-10.5,-52);
glVertex2f(19.5,-52);
    glVertex2f(4.5,-30);
    glVertex2f(-25.5,-30);


    glEnd();
    glPushMatrix();
glBegin(GL_LINE_STRIP);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-38,-51);
glVertex2f(-40.5,-51);
    glVertex2f(-30,-30);
    glVertex2f(-25.5,-30);
glEnd();
glPushMatrix();
glBegin(GL_LINE_STRIP);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-36.7,-48);
glVertex2f(-26,-30);
glEnd();
glPushMatrix();
   glBegin(GL_LINE_STRIP);
glVertex2f(-30,-60);
    glVertex2f(-30,-48);
    glVertex2f(-20,-48);
    glVertex2f(-20,-60);
glEnd();
glPopMatrix();
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-80,120,-80,80);

    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();

    glViewport(0, 0 ,windowWidth ,windowHeight);

//sky
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(118,201,236);
    glVertex2f(-80,45);
    glColor3ub (224,255,255);
    glVertex2f(-80,80);
    glColor3ub (36,114,216);
    glVertex2f(120,80);
    glColor3ub (36,114,216);
glVertex2f(120,45);
    glEnd();

    //river
    glPushMatrix();
         glBegin(GL_QUADS);
    glColor3ub(30,144,255);
    glVertex2f(-80,-10);
    glVertex2f(-80,45.5);
    glColor3ub (135,206,250);
    glVertex2f(120,45.5);
    glVertex2f(120,-10);
    glEnd();

    //forest
        glPushMatrix();
         glBegin(GL_QUADS);
    glColor3ub (34,139,34);
    glVertex2f(-80,-80);
    glColor3ub (153,153,0);
    glVertex2f(-80,-10);
    glColor3ub (153,153,0);
    glVertex2f(120,-10);
    glColor3ub (34,139,34);
    glVertex2f(120,-80);
    glEnd();
    glPushMatrix();

    //road
glBegin(GL_QUADS);
    glColor3ub (210,105,30);
    glVertex2f(28,-80);
    glColor3ub (255,255,255);
    glVertex2f(47,-10);
    glColor3ub (210,105,30);
    glVertex2f(67,-10);

    glVertex2f(48,-80);
    glEnd();

    //fence
    glPushMatrix();
         glBegin(GL_QUADS);
    glColor3ub (153,73,0);
    glVertex2f(68,-12);
    glVertex2f(66,-11);
    glVertex2f(120,-11);
    glVertex2f(120,-12);
    glEnd();
    glPushMatrix();
         glBegin(GL_QUADS);
    glColor3ub (153,73,0);
    glVertex2f(66,-16);
    glVertex2f(64,-17);
    glVertex2f(120,-16);
    glVertex2f(120,-17);
    glEnd();
    glPushMatrix();
         glBegin(GL_QUADS);
    glColor3ub (153,73,0);
    glVertex2f(66,-20);
    glVertex2f(64,-21);
    glVertex2f(120,-21);
    glVertex2f(120,-20);
    glEnd();

    glPushMatrix();
         glBegin(GL_QUADS);
    glColor3ub (153,73,0);
    glVertex2f(116,-22);
    glVertex2f(116,-12);
    glVertex2f(118,-12);
    glVertex2f(118,-22);
    glEnd();
    glPushMatrix();
         glBegin(GL_QUADS);
    glColor3ub (153,73,0);
    glVertex2f(101,-22);
    glVertex2f(101,-12);
    glVertex2f(103,-12);
    glVertex2f(103,-22);
    glEnd();
    glPushMatrix();
         glBegin(GL_QUADS);
    glColor3ub (153,73,0);
    glVertex2f(84,-22);
    glVertex2f(84,-12);
    glVertex2f(86,-12);
    glVertex2f(86,-22);
    glEnd();
    glPushMatrix();
         glBegin(GL_QUADS);
    glColor3ub (153,73,0);
    glVertex2f(67,-22);
    glVertex2f(67,-12);
    glVertex2f(69,-12);
    glVertex2f(69,-22);
    glEnd();

//boat
    glPushMatrix();
         glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(10 +bx,0);
    glVertex2f(45+bx,0);
    glVertex2f(55+bx,10);
    glVertex2f(0+bx,10);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255+bx,178,102);

    glVertex2f(8+bx,10);
    glVertex2f(17+bx,10);
    glVertex2f(12.5+bx,18);
    glEnd();


    glPushMatrix();
         glBegin(GL_QUADS);
    glColor3ub (102,51,0);
    glVertex2f(28+bx,18);
    glVertex2f(30+bx,18);
    glVertex2f(30+bx,19.5);
    glVertex2f(28+bx,19.5);
    glEnd();

   glPushMatrix();
         glBegin(GL_POLYGON);
    glColor3ub (255,69,0);
    glVertex2f(22+bx,19.5);
    glVertex2f(35+bx,19.5);
    glVertex2f(40+bx,30);
    glVertex2f(28+bx,30);
    glEnd();

    glPushMatrix();
         glBegin(GL_POLYGON);
  glColor3ub(255,178,102);
glVertex2f(13+bx,8);
glVertex2f(42+bx,8);
    glVertex2f(55+bx,10);
    glVertex2f(0+bx,10);
    glEnd();

    glPushMatrix();
         glBegin(GL_POLYGON);
    glColor3ub(204,102,0);
    glVertex2f(13+bx,8);
    glVertex2f(42+bx,8);
    glVertex2f(55+bx,10);
    glVertex2f(0+bx,10);
    glEnd();

    glPushMatrix();
         glBegin(GL_POLYGON);
    glColor3ub(204,102,0);


    glVertex2f(17+bx,8);
    glVertex2f(47+bx,8);
    glVertex2f(42+bx,18);
    glVertex2f(12.5+bx,18);
    glEnd();

    glPushMatrix();
         glBegin(GL_POLYGON);
    glColor3ub(102,51,0);
glVertex2f(39+bx,8);
    glVertex2f(40.5+bx,8);
    glVertex2f(36+bx,18);
    glVertex2f(35+bx,18);
    glEnd();

    glPushMatrix();
         glBegin(GL_POLYGON);
    glColor3ub(102,51,0);
    glVertex2f(33+bx,8);
    glVertex2f(34.5+bx,8);
    glVertex2f(30+bx,18);
    glVertex2f(29+bx,18);
    glEnd();
glPushMatrix();
         glBegin(GL_POLYGON);
    glColor3ub(102,51,0);


    glVertex2f(27+bx,8);
    glVertex2f(28.5+bx,8);
    glVertex2f(24+bx,18);
    glVertex2f(23+bx,18);
    glEnd();

    glPushMatrix();
         glBegin(GL_POLYGON);
    glColor3ub(102,51,0);


    glVertex2f(15+bx,13);
    glVertex2f(46.5+bx,13);
    glVertex2f(41.5+bx,13.5);
    glVertex2f(14+bx,13.5);
    glEnd();

    glPushMatrix();
         glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(22+bx,19.5);
    glVertex2f(35+bx,19.5);
    glVertex2f(40+bx,30);
    glVertex2f(28+bx,30);
    glEnd();

    glPushMatrix();
         glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(13+bx,8);
    glVertex2f(42+bx,8);
    glVertex2f(55+bx,10);
    glVertex2f(0+bx,10);
    glEnd();

     glPushMatrix();
         glBegin(GL_POLYGON);
    glColor3ub(102,51,0);
   glVertex2f(15+bx,10);
    glVertex2f(46.5+bx,10);
    glVertex2f(41.5+bx,11);
    glVertex2f(13.5+bx,11);
    glEnd();
    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(17+bx,8);
    glVertex2f(47+bx,8);
    glVertex2f(42+bx,18);
    glVertex2f(12.5+bx,18);
glVertex2f(8+bx,10);
    glVertex2f(17+bx,10);
    glVertex2f(12.5+bx,18);

    glEnd();

///roadoutline

    glPushMatrix();
   glBegin(GL_LINE_STRIP);
   glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(28,-80);
    glVertex2f(47,-10);
    glVertex2f(67,-10);
    glVertex2f(48,-80);
    glEnd();

//house
glPushMatrix();
         glBegin(GL_POLYGON);
    glColor3ub(21,2,2);
glVertex2f(-10,-65);
    glVertex2f(20,-65);
    glVertex2f(19.5,-60);
    glVertex2f(-10.5,-60);
    glEnd();

glPushMatrix();
         glBegin(GL_POLYGON);
    glColor3ub(21,2,2);
glVertex2f(-40,-64.5);
    glVertex2f(-10,-65);
    glVertex2f(-10.5,-60);
    glVertex2f(-40.5,-59.5);
    glEnd();
glPushMatrix();
         glBegin(GL_QUADS);
    glColor3ub (218,215,215);
glVertex2f(-10.5,-60);
    glVertex2f(-10.5,-52);
    glVertex2f(19.5,-52);
    glVertex2f(19.5,-60);
glEnd();

glPushMatrix();
         glBegin(GL_POLYGON);
    glColor3ub(204,102,0);
glVertex2f(-38,-51);
glVertex2f(-40.5,-51);
    glVertex2f(-30,-30);
    glVertex2f(-25.5,-30);
    glEnd();


    glPushMatrix();
         glBegin(GL_TRIANGLES);
    glColor3ub (218,215,215);
glVertex2f(-36.7,-48);
    glVertex2f(-10,-48);
    glVertex2f(-26,-30);
glEnd();
glPushMatrix();
         glBegin(GL_QUADS);
    glColor3ub (218,215,215);

    glVertex2f(-36.7,-60);
    glVertex2f(-36.7,-48);
    glVertex2f(-9.5,-48);
    glVertex2f(-9.5,-60);
glEnd();

    glPushMatrix();
         glBegin(GL_POLYGON);
    glColor3ub(204,102,0);
glVertex2f(-10.5,-52);
    glColor3ub(255,255,0);
glVertex2f(19.5,-52);
    glColor3ub(204,102,0);
glVertex2f(4.5,-30);
    glVertex2f(-25.5,-30);
    glEnd();
//door

   glPushMatrix();
         glBegin(GL_QUADS);
    glColor3ub (75,72,65);

    glVertex2f(-30,-60);
    glColor3ub(0,0,0);

    glVertex2f(-30,-48);
    glVertex2f(-20,-48);
    glColor3ub(75,72,65);

    glVertex2f(-20,-60);
glEnd();

glPushMatrix();
glBegin(GL_LINE_STRIP);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-13,-60);
    glVertex2f(-13,-48);
    glEnd();
glPushMatrix();
glBegin(GL_LINE_STRIP);
glColor3f(0.0f, 0.0f, 0.0f);
     glVertex2f(-36.7,-60);
    glVertex2f(-36.7,-48);

    glEnd();

    glPushMatrix();
glBegin(GL_LINE_STRIP);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(19.5,-52);
    glVertex2f(19.5,-60);
    glEnd();

    glPushMatrix();
glBegin(GL_LINE_STRIP);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-10.5,-52);
glVertex2f(19.5,-52);
    glVertex2f(4.5,-30);
    glVertex2f(-25.5,-30);
glEnd();
    glPushMatrix();
glBegin(GL_LINE_STRIP);
glColor3f(0.0f, 0.0f, 0.0f);

glVertex2f(-38,-51);
glVertex2f(-40.5,-51);
    glVertex2f(-30,-30);
    glVertex2f(-25.5,-30);


    glEnd();

    glPushMatrix();
glBegin(GL_LINE_STRIP);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-36.7,-48);

    glVertex2f(-26,-30);
glEnd();
glPushMatrix();
glBegin(GL_LINE_STRIP);
glVertex2f(-30,-60);
    glVertex2f(-30,-48);
    glVertex2f(-20,-48);
    glVertex2f(-20,-60);
    glEnd();
//tree
glPushMatrix();
glBegin(GL_QUADS);
    glColor3ub(204,102,0);
    glVertex2f(-65,-80);
    glColor3ub(153,73,0);
    glVertex2f(-65,-45);
    glVertex2f(-62,-45);
    glVertex2f(-62,-80);
    glEnd();
glPushMatrix();
         glBegin(GL_QUADS);
    glColor3ub(204,102,0);
glVertex2f(-62,-56);
    glVertex2f(-56,-52);
glColor3ub(153,73,0);
    glVertex2f(-58,-50);
glVertex2f(-62,-58);
glEnd();
glPushMatrix();
         glBegin(GL_QUADS);
    glColor3ub(204,102,0);
glVertex2f(-65,-45);
    glVertex2f(-71,-43);
glColor3ub(153,73,0);
    glVertex2f(-71,-45);
glVertex2f(-65,-47);
glEnd();
glPushMatrix();
         glBegin(GL_QUADS);
    glColor3ub(204,102,0);
glVertex2f(-71,-43);
    glVertex2f(-65,-41);
glColor3ub(153,73,0);
    glVertex2f(-65,-43);
glVertex2f(-71,-47);
glEnd();
glPushMatrix();
         glBegin(GL_QUADS);
         glColor3ub(204,102,0);
glVertex2f(-71,-45);
    glVertex2f(-74,-47);
glColor3ub(153,73,0);
    glVertex2f(-74,-49);
glVertex2f(-71,-47);
glEnd();
glPushMatrix();
         glBegin(GL_QUADS);
glColor3ub(204,102,0);
glVertex2f(-62,-45);
    glVertex2f(-56,-43);
glColor3ub(153,73,0);
    glVertex2f(-56,-45);
glVertex2f(-62,-47);
glEnd();
glPushMatrix();
glBegin(GL_LINE_STRIP);
glColor3ub(0,0,0);
glVertex2f(-65,-80);
    glVertex2f(-65,-45);
glEnd();

//bananatree

glPushMatrix();
         glBegin(GL_TRIANGLES);
    glColor3ub (0,255,0);
glVertex2f(-17,-20);
glColor3ub (0,100,0);
    glVertex2f(-11,-20);
glColor3ub (0,100,0);
    glVertex2f(-14.5,-30);
glEnd();
glPushMatrix();
         glBegin(GL_TRIANGLES);
    glColor3ub (0,255,0);
glVertex2f(-17,-20);
    glVertex2f(-11,-20);
glColor3ub (0,100,0);
    glVertex2f(-14.5,-12);
    glEnd();

    glPushMatrix();
         glBegin(GL_TRIANGLES);
    glColor3ub (0,255,0);
    glVertex2f(-13,-18);
    glVertex2f(-7,-16);
glColor3ub (0,100,0);
    glVertex2f(-14.5,-30);

    glEnd();

    glPushMatrix();
         glBegin(GL_TRIANGLES);
    glColor3ub (0,255,0);

 glVertex2f(4,-18);
    glVertex2f(-2,-18);
glColor3ub (0,100,0);
    glVertex2f(-14.5,-30);
glEnd();

    glPushMatrix();
         glBegin(GL_TRIANGLES);
    glColor3ub (0,255,0);
glVertex2f(8,-16);
glColor3ub (0,100,0);
    glVertex2f(-2,-16);
glColor3ub (0,100,0);
    glVertex2f(-14.5,-30);
glEnd();
glPushMatrix();
         glBegin(GL_TRIANGLES);
    glColor3ub (0,255,0);
glVertex2f(20,-12);
    glVertex2f(12,-12);
    glColor3ub (0,100,0);
glColor3ub (0,100,0);
    glVertex2f(-14.5,-30);
glEnd();
glPushMatrix();
         glBegin(GL_TRIANGLES);
    glColor3ub (0,255,0);
glVertex2f(-40,-15);
glColor3ub (0,100,0);
    glVertex2f(-25,-15);
glColor3ub (0,100,0);
    glVertex2f(-14.5,-30);

    glEnd()
;
glPushMatrix();
         glBegin(GL_TRIANGLES);
    glColor3ub (0,255,0);
glVertex2f(-40,-15);
    glVertex2f(-25,-15);
glColor3ub (0,100,0);
    glVertex2f(-32.5,-13);

    glEnd()
;

glPushMatrix();
         glBegin(GL_TRIANGLES);
    glColor3ub (0,255,0);
glVertex2f(18,-17);
    glVertex2f(20,-25);
glColor3ub (0,100,0);
    glVertex2f(-14.5,-30);


    glEnd();

    glPushMatrix();
         glBegin(GL_TRIANGLES);
    glColor3ub (0,255,0);
glVertex2f(18,-17);
    glVertex2f(20,-25);

    glVertex2f(21.5,-20);


    glEnd();
///smalltree
glPushMatrix();
glBegin(GL_QUADS);
    glColor3ub(204,102,0);
    glVertex2f(72,-80);
    glColor3ub(153,73,0);
    glVertex2f(72,-55);
    glVertex2f(69,-55);
    glVertex2f(69,-80);
    glEnd();
    glPushMatrix();
             glBegin(GL_TRIANGLES);
    glColor3ub (0,100,0);
glVertex2f(78,-55);
glColor3ub(0,128,0);

glVertex2f(63,-55);
glColor3ub(0,0,0);
    glVertex2f(70.5,-45);

    glEnd();

    glPushMatrix();
         glBegin(GL_TRIANGLES);
    glColor3ub (0,100,0);
glVertex2f(80,-50);
    glVertex2f(61,-50);
glColor3ub(0,0,0);
    glVertex2f(70.5,-35);
glEnd();
glPushMatrix();
glBegin(GL_LINE_STRIP);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(72,-80);
    glVertex2f(72,-55);
    glVertex2f(69,-55);
    glVertex2f(69,-80);
    glEnd();
glPushMatrix();
glBegin(GL_LINE_STRIP);
glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(80,-50);

glVertex2f(70.5,-35);
    glEnd();
glPushMatrix();
    glTranslatef(112,-25,0);
    glScalef(0.8,0.8,0);
    house();
//sun
        glPushMatrix();
glPushMatrix();
    glTranslatef(60+sx,70,0);
    glScalef(0.8,0.8,0);
    sx+=0.008;
    if(sx>130)
        sx=-150;
sun();
///cloud
glPushMatrix();
    glTranslatef(-60+cx,71,0);
    glScalef(0.8,0.8,0);


cloud();
cx+=0.001;
    if(cx>180)
        cx=-180;
glPushMatrix();
    glTranslatef(-68+cx,65,0);
    glScalef(0.8,0.8,0);

cloud();
cx+=0.001;
    if(cx>180)
        cx=-180;
glPushMatrix();
    glTranslatef(-58+cx,65,0);
    glScalef(0.8,0.8,0);


cloud();
cx+=0.001;
    if(cx>180)
        cx=-180;


glPushMatrix();
    glTranslatef(-20+cx,68,0);
    glScalef(0.8,0.8,0);

cloud();
cx+=0.001;
    if(cx>180)
        cx=-180;
glPushMatrix();
    glTranslatef(-28+cx,62,0);
    glScalef(0.8,0.8,0);
cloud();
cx+=0.001;
    if(cx>180)
        cx=-180;
glPushMatrix();
    glTranslatef(-18+cx,62,0);
    glScalef(0.8,0.8,0);
cloud();
cx+=0.001;
    if(cx>180)
        cx=-180;
glPushMatrix();
    glTranslatef(18+cx,67,0);
    glScalef(0.8,0.8,0);

cloud();
cx+=0.001;
    if(cx>180)
        cx=-180;
glPushMatrix();
    glTranslatef(10+cx,61,0);
    glScalef(0.8,0.8,0);

cloud();
cx+=0.001;
    if(cx>180)
        cx=-180;
glPushMatrix();
    glTranslatef(21+cx,61,0);
    glScalef(0.8,0.8,0);

cloud();
cx+=0.001;
    if(cx>180)
        cx=-180;

glPushMatrix();
    glTranslatef(70+cx,64,0);
    glScalef(0.8,0.8,0);

cloud();
cx+=0.001;
    if(cx>180)
        cx=-180;

glPushMatrix();
    glTranslatef(76+cx,71,0);
    glScalef(0.8,0.8,0);

cloud();
cx+=0.001;
    if(cx>180)
        cx=-180;
glPushMatrix();
    glTranslatef(80+cx,64,0);
    glScalef(0.8,0.8,0);

cloud();
cx+=0.001;
    if(cx>180)
        cx=-180;
glPushMatrix();
    glTranslatef(100+cx,65,0);
    glScalef(0.8,0.8,0);

cloud();
cx+=0.001;
    if(cx>180)
        cx=-180;
glPushMatrix();
    glTranslatef(108+cx,71,0);
    glScalef(0.8,0.8,0);

cloud();
cx+=0.001;
    if(cx>180)
        cx=-180;
glPushMatrix();
    glTranslatef(112+cx,65,0);
    glScalef(0.8,0.8,0);
    cloud();
    cx+=0.001;
    if(cx>180)
        cx=-180;
glPushMatrix();
    glTranslatef(-77,-42,0);
    glScalef(0.8,0.8,0);
    one();
    glPushMatrix();
    glTranslatef(-62,-37,0);
    glScalef(0.8,0.8,0);
    one();
    glPushMatrix();
    glTranslatef(-70,-33,0);
    glScalef(0.8,0.8,0);
    one();
    glPushMatrix();
    glTranslatef(-53,-42,0);
    glScalef(0.8,0.8,0);
    one();
    glPushMatrix();
    glTranslatef(-52,-48,0);
    glScalef(0.8,0.8,0);
    one();
glPushMatrix();
    glTranslatef(-77,-30,0);
    glScalef(0.8,0.8,0);
    one();
    glPushMatrix();
    glTranslatef(-65,-28,0);
    glScalef(0.8,0.8,0);
    one();
glPushMatrix();
    glTranslatef(-71,-24,0);
    glScalef(0.8,0.8,0);
    one();
glPushMatrix();
    glTranslatef(-52,-30,0);
    glScalef(0.8,0.8,0);
    one();
    glPushMatrix();
    glTranslatef(-47,-48,0);
    glScalef(0.8,0.8,0);
    one();
    glPushMatrix();
    glTranslatef(-49,-42,0);
    glScalef(0.8,0.8,0);
    one();
    glPushMatrix();
    glTranslatef(-63,-27,0);
    glScalef(0.8,0.8,0);
    one();
    glPushMatrix();
    glTranslatef(-47,-50,0);
    glScalef(0.8,0.8,0);
    one();

glFlush();
    glutSwapBuffers();
}

void key( unsigned char key, int x, int y ){
    switch ( key )
    {
    case 'l':
         bscale = true;
         glutPostRedisplay();
        break;
    case 'r':
         bscale = false;
         glutPostRedisplay();
        break;
    }
}

void boat(){
    if(bscale == true){
bx += 0.009;
if(bx > 130)
bx = -150;
    }
    else if (bscale == false)
{
bx = 1;

}
   glutPostRedisplay();
}

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowPosition(200,100);
    glutInitWindowSize(windowWidth, windowHeight);
    glutCreateWindow("Home");

    glutKeyboardFunc(key);
    glutIdleFunc(boat);
    glutDisplayFunc(display);
glutMainLoop();
return 0;
}
