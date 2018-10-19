#include "opengl_no1.h"
#include <QtWidgets/QApplication>

#include <osgViewer/Viewer>
#include <osgGA/TrackballManipulator>
#include <osgQt/GraphicsWindowQt>

#include <osg/ShapeDrawable>
#include <osg/MatrixTransform>
#include <osgManipulator/TabBoxDragger>
#include <osgGA/StateSetManipulator>
#include <osgViewer/ViewerEventHandlers>
#include <osgDB/ReadFile>


#include <gl/glut.h>
void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);	//清除颜色缓冲区
	glRectf(-20.5f, -20.5f, 20.5f, 20.5f);
	glFlush();//刷新队列
}

//设置渲染状态
void SetupRC()
{
	glClearColor(0.0f, 1.0f, 1.0f, 0.5f);	//设置一种颜色R B G Alpha，用于清除窗口
}

//当窗口大小改变时由GLUT函数库调用
void ChangeSize(GLsizei w, GLsizei h)
{
	GLfloat aspectRatio;
	if (h == 0)	//防止被0所除
	{
		h = 1;
	}
	//把视口设置为窗口大小
	glViewport(0, 0, w, h);

	//重置坐标系统
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	//建立裁剪区域(左、右、底、顶、近、远)
	aspectRatio = (GLfloat)w / (GLfloat)h; 
	if (w <= h)
		glOrtho(-100.0, 100.0, -100 / aspectRatio, 100.0 / aspectRatio, 1.0, -1.0);		//创建投影模式
	else
		glOrtho(-100.0 * aspectRatio, 100.0 * aspectRatio, -100.0, 100.0, 1.0, -1.0);

	glMatrixMode(GL_MODELVIEW); 
	glLoadIdentity();


}
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	//OpenGL_NO1 w;
	//w.show();

	/*
	osgQt::initQtWindowingSystem();

	osg::Group* sceneroot = new osg::Group;

	sceneroot->addChild(osgDB::readNodeFile("cow.osg"));
	osg::ref_ptr<osgViewer::Viewer> viewer = new osgViewer::Viewer;
	viewer->addEventHandler(new osgGA::StateSetManipulator(viewer->getCamera()->getOrCreateStateSet()));
	viewer->addEventHandler(new osgViewer::StatsHandler);


	viewer->setSceneData(sceneroot);
	viewer->setCameraManipulator(new osgGA::TrackballManipulator);
	osgQt::setViewer(viewer.get());

	osgQt::GLWidget* glw = new osgQt::GLWidget;
	osgQt::GraphicsWindowQt* graphicswin = new osgQt::GraphicsWindowQt(glw);

	viewer->getCamera()->setViewport(new osg::Viewport(0, 0, glw->width(), glw->height()));
	viewer->getCamera()->setGraphicsContext(graphicswin);

	glw->show();
	*/

	///*
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);	//设置显示模式：RGBA颜色模式+单缓冲窗口
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("第一个OpenGL程序");			//创建OpenGL窗口
	glutDisplayFunc(&myDisplay);					//显示回调
	glutReshapeFunc(ChangeSize);

	SetupRC();										//设置渲染状态

	glutMainLoop();									//启动GLUT框架的运行
	//*/
	return a.exec();
}
