#include <stdlib.h>
#include <stdio.h>
#include <gl/glut.h>

void display(void)
{
	//home
	glBegin(GL_QUADS);
		glVertex2f(0,-40);
		glVertex2f(0,-20);
		glVertex2f(20,-20);
		glVertex2f(20,-40);
	glEnd();
	glBegin(GL_TRIANGLES);
		glVertex2f(0,-20);
		glVertex2f(10,-10);
		glVertex2f(20,-20);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);
		glVertex2f(10,-10);
		glVertex2f(20,-20);
		glVertex2f(30,-10);
		glVertex2f(40,-20);
		glVertex2f(40,-10);
		glVertex2f(50,-20);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(20,-40);
		glVertex2f(20, -20);
		glVertex2f(50,-20);
		glVertex2f(50,-40);
	glEnd();
	glBegin(GL_QUAD_STRIP);
		glVertex2f(5,-40);
		glVertex2f(5,-30);
		glVertex2f(10,-40);
		glVertex2f(10,-30);
		glVertex2f(20, -40);
		glVertex2f(15,-40);
		glVertex2f(15,-30);
		glEnd();
	glBegin(GL_QUAD_STRIP);
		glVertex2f(33,-10);
		glVertex2f(38,-10);
		glVertex2f(33,-6);
		glVertex2f(38,-6);
		glVertex2f(33,-5);
		glVertex2f(38,-5);
	glEnd();
	//mountain
	glBegin(GL_POLYGON);
	//1left
		glVertex2f(-70,20);
		glVertex2f(-50,40);
		glVertex2f(-45,45);
		glVertex2f(-35,50);
		glVertex2f(-25,45);
		glVertex2f(0,20);
		glEnd();
	glBegin(GL_POLYGON);
		//2right
		glVertex2f(0, 20);
		glVertex2f(-5,25);
		glVertex2f(10,40);
		glVertex2f(15,45);
		glVertex2f(25,50);
		glVertex2f(35,45);
		glVertex2f(35,45);
		glVertex2f(40,40);
		glVertex2f(60,20);
	glEnd();
	//sun
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(-5,25);
		glVertex2f(-15,35);
		glVertex2f(-14,36);
		glVertex2f(-13,37);
		glVertex2f(-12,38);
		glVertex2f(-11,38.5);
		glVertex2f(-11,38.7);
		glVertex2f(-10.5,39);
		glVertex2f(-10,39.5);
		glVertex2f(-9.5,39);
		glVertex2f(-9,40);
		glVertex2f(-5,40);

		glVertex2f(-1,40);
		glVertex2f(-0.5,39);
		glVertex2f(-0,39.5);
		glVertex2f(-0.5, 38);
		glVertex2f(1, 38.7);
		glVertex2f(1,38.5);
		glVertex2f(2,38);
		glVertex2f(3,37);
		glVertex2f(4, 36);

		glVertex2f(5,35);
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(-15,35);
		glVertex2f(-15,38);

		glVertex2f(-15, 38);
		glVertex2f(-10,38);

		glVertex2f(-10, 38);
		glVertex2f(-10, 42);

		glVertex2f(-10, 42);
		glVertex2f(-7, 40);

		glVertex2f(-7, 40);
		glVertex2f(-7, 43);

		glVertex2f(-7, 43);
		glVertex2f(-5, 40);

		glVertex2f(-5, 40);
		glVertex2f(-4,44);



		glEnd();







	glFlush();
}

void click(int button, int state, int x, int y) {
	if (state == 0) {
		x /= 4;
		x -= 100;
		y /= 3;
		y = 200 - y;
		y -= 200;
		printf("%d,%d\n", x, y);

	}
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Drawing");
	gluOrtho2D(-100,100,-100,100);
	glutDisplayFunc(display);
	glutMouseFunc(click);
	glutMainLoop();
}