#include <stdio.h>
#include <GL/glut.h>
#include <GL/freeglut.h>
#include <stdlib.h>

char keyy,key1;
void display();

void keyup(int key,intx,int y)
{
	key1=0;
	switch(key)
	{
		case GLUT_KEY_LEFT: 	keyy=20;
					break;
		case GLUT_KEY_UP:	keyy=21;
					break;
		case GLUT_KEY_DOWN:	keyy=22;
					break;
		case GLUT_KEY_RIGHT:	keyy=19;
					break;
		default:		return;
	}
	display();
}

void keys(unsigned char key,intx,int y)
{
	int mod;
	glutSpecialFunc(keyup);
        mod = glutGetModifiers();
	if(mod==GLUT_ACTIVE_SHIFT)
	{
keyy=16;
		key1=key;
	}
	else if(mod==GLUT_ACTIVE_CTRL)
	{
		keyy=17;
		key1=key;
	}
	else if(mod==GLUT_ACTIVE_ALT)
	{
		keyy=18;
		key1=key;
	}
	else
	{
		keyy=key;
		key1=0;
	}
	display();
}

void display(void)
{
	int i,j;
	char str1[10]="Backspace",str2[4]="Tab",str3[9]="Capslock",str4[6]="Enter",str5[6]="Shift",str6[5]="Ctrl",str7[4]="Alt",str8[5]="DELL",str9[3]="\\",str10[3]="<-",str11[3]="->",str[2]="\\", fstr1[100]="Project Title: Virtual Keyboard through OpenGL ", fstr2[100]="Created By: Santhosh T.C ";
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,1.0);
glBegin(GL_LINE_LOOP);			// White Border
                glVertex2f(-0.92,0.92);
                glVertex2f(0.98,0.92);
                glVertex2f(0.98,0.00);
                glVertex2f(-0.92,0.00);
glEnd();
glFlush();

	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);			//Red Line
		glVertex2f(-0.92,-0.01);
		glVertex2f(0.98,-0.01);
	glEnd();
	glFlush();

	glColor3f(0.0,1.0,0.0);
glBegin(GL_LINES);			//Green Line
                glVertex2f(-0.92,-0.02);
                glVertex2f(0.98,-0.02);
glEnd();
glFlush();

	glColor3f(0.0,0.0,1.0);
glBegin(GL_LINES);			//Blue Line
                glVertex2f(-0.92,-0.03);
                glVertex2f(0.98,-0.03);
glEnd();
glFlush();

	if(key1=='~' || keyy=='`')
                glColor3f(1.0,0.0,0.0);
        else
		glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);	//key ~
	glVertex2f(-0.9,0.9);
	glVertex2f(-0.78,0.9);
	glVertex2f(-0.78,0.76);
	glVertex2f(-0.9,0.76);
	glEnd();
	glFlush();
	glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.84,0.85);
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'~');
	glRasterPos2f(-0.84,0.78);
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'`');

	if(keyy=='1' || key1=='!' ||key1=='1')
		glColor3f(1.0,0.0,0.0);	
	else
		glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);    //key 1
        glVertex2f(-0.77,0.9);
        glVertex2f(-0.65,0.9);
        glVertex2f(-0.65,0.76);
        glVertex2f(-0.77,0.76);
glEnd();
glFlush();
	glColor3f(0.0,0.0,0.0);
	glRasterPos2f(-0.71,0.8);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'1');

if(key1=='A' || keyy=='a' || key1=='a')
                glColor3f(1.0,0.0,0.0);
        else
	        glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);    //key A
        glVertex2f(-0.71,0.60);
        glVertex2f(-0.59,0.60);
        glVertex2f(-0.59,0.46);
        glVertex2f(-0.71,0.46);
glEnd();
glFlush();
        glColor3f(0.0,0.0,0.0);
        glRasterPos2f(-0.67,0.50);
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'A');
	glColor3f(1.0,0.0,0.0);
	glRasterPos2f(-0.03,0.03);
	for(i=0;i<4;i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str8[i]);
	glColor3f(0.0,0.5,0.8);
	glRasterPos2f(-0.35,-0.30);
	for(i=0;fstr1[i]!='\0';i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,fstr1[i]);
	glColor3f(0.0,0.5,0.8);
        glRasterPos2f(-0.35,-0.50);
        for(i=0;fstr2[i]!='\0';i++)
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,fstr2[i]);
	glColor3f(0.0,0.5,0.8);
        glRasterPos2f(-0.35,-0.70);
        for(i=0;fstr3[i]!='\0';i++)
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,fstr3[i]);
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINES);
	glVertex2f(-0.40,-0.20);
	glVertex2f(-0.05,-0.20);
	glVertex2f(-0.38,-0.18);
	glVertex2f(-0.38,-0.45);
	glVertex2f(0.63,-0.75);
	glVertex2f(0.3,-0.75);
	glVertex2f(0.6,-0.78);
	glVertex2f(0.6,-0.45);
	glEnd();
	glFlush();
//	glutKeyboardFunc(keys);
}
int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1250,600);
	glutInitWindowPosition(50,50);
	glutCreateWindow("Keyboard Layout");
	glutDisplayFunc(display);
	glutKeyboardFunc(keys);
	glutMainLoop();
}
