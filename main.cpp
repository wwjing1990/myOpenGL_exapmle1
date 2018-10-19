#include <QtWidgets/QApplication>
#include <gl/glut.h>
void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glRectf(-0.5f, -0.5f, 0.5f, 0.5f);
	glFlush();
}

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
  glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);	//设置显示模式：RGBA颜色模式+单缓冲窗口
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("第一个OpenGL程序");			//创建OpenGL窗口
	glutDisplayFunc(&myDisplay);					//显示回调
	glutMainLoop();									//启动GLUT框架的运行
	return a.exec();
}
