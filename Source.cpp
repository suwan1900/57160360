#include <stdlib.h>
#include <gl/glut.h>
void display(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	/*draw picture here!!!*/
	glColor3f(0.0, 1.0, 0.0);	glBegin(GL_POINTS);
		glVertex2f(-59, 26);//P0
		glVertex2f(-58, 23);//P1
		glVertex2f(-54, 23);//p2
		glVertex2f(-53, 26);//p3
		glVertex2f(-52, 29);//p4
		glEnd(); 
	glBegin(GL_LINES);
		glVertex2f(-38, 19);//p0
		glVertex2f(-28, 24);//p1

		glVertex2f(-30, 21);//p2
		glVertex2f(-19, 19);//p3

		glVertex2f(-33, 18);//p4
		glVertex2f(-23, 14);//p5

		glVertex2f(-34, 15);//p6
		glVertex2f(-23, 18);//p7
		glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex2f(-10, 24);//p0
		glVertex2f(5, 17);//p1
		glVertex2f(3, 21);//p2
		glVertex2f(-6, 19);//p3
		glVertex2f(-7, 17);//p4
		glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2f(20, 23);//p0
		glVertex2f(22, 16);//p1
		glVertex2f(36, 16);//p2
		glVertex2f(33, 21);//p3
		glVertex2f(29, 18);//p4
		glVertex2f(25, 30);//p5
		glEnd();
	glBegin(GL_TRIANGLES);
		glVertex2f(50, 20);//p0
		glVertex2f(50, 25);//p1
		glVertex2f(56, 20);//p2

		glVertex2f(59, 23);//p3
		glVertex2f(52, 29);//p4
		glVertex2f(66, 29);//p5
		glEnd();
	glBegin(GL_TRIANGLE_STRIP);
		glVertex2f(-66, -20);//p0
		glColor3f(0, 1, 0.0);//p1
		glVertex2f(-66, -30);//p2
		glVertex2f(-59, -20);//p3
		glVertex2f(-55, -30);//p4
		glVertex2f(-53, -20);//p5
		glVertex2f(-51, -34);//p6
		glEnd();
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(-30,-26);//p0
		glVertex2f(-30,-16);//p1
		glVertex2f(-23, -18);//p2
		glVertex2f(-20, -23);//p3
		glVertex2f(-29, -22);//p4
		glEnd();
	glBegin(GL_QUADS);
		glVertex2f(-11, -22);//p0
		glVertex2f(-8, -19);//p1
		glVertex2f(-1, -18);//p2
		glVertex2f(0, -23);//p3
		glVertex2f(3, -30);//p4
		glVertex2f(4, -20);//p5
		glVertex2f(10, -17);//p6
		glVertex2f(7, -30);//p7
		glEnd();
	glBegin(GL_QUAD_STRIP);
		glVertex2f(20, -30);//p0
		glVertex2f(19, -25);//p1
		glVertex2f(25, -30);//p2
		glVertex2f(25, -24);//p3
		glVertex2f(33, -29);//p4
		glVertex2f(28, -23);//p5
		glVertex2f(37, -28);//p6
		glVertex2f(35, -20);//p7
		glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(53, -23);//p0
		glVertex2f(64, -22);//p1
		glVertex2f(62, -28);//p2
		glVertex2f(52, -31);//p3
		glVertex2f(50, -27);//p4
		glEnd();
	glFlush();
}int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(30, 40);
	glutCreateWindow("A basic OpenGL Window");
	gluOrtho2D(-70.0, 70.0, -50.0, 50.0);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}