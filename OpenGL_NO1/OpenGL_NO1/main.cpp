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
	glClear(GL_COLOR_BUFFER_BIT);	//�����ɫ������
	glRectf(-20.5f, -20.5f, 20.5f, 20.5f);
	glFlush();//ˢ�¶���
}

//������Ⱦ״̬
void SetupRC()
{
	glClearColor(0.0f, 1.0f, 1.0f, 0.5f);	//����һ����ɫR B G Alpha�������������
}

//�����ڴ�С�ı�ʱ��GLUT���������
void ChangeSize(GLsizei w, GLsizei h)
{
	GLfloat aspectRatio;
	if (h == 0)	//��ֹ��0����
	{
		h = 1;
	}
	//���ӿ�����Ϊ���ڴ�С
	glViewport(0, 0, w, h);

	//��������ϵͳ
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	//�����ü�����(���ҡ��ס���������Զ)
	aspectRatio = (GLfloat)w / (GLfloat)h; 
	if (w <= h)
		glOrtho(-100.0, 100.0, -100 / aspectRatio, 100.0 / aspectRatio, 1.0, -1.0);		//����ͶӰģʽ
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
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);	//������ʾģʽ��RGBA��ɫģʽ+�����崰��
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("��һ��OpenGL����");			//����OpenGL����
	glutDisplayFunc(&myDisplay);					//��ʾ�ص�
	glutReshapeFunc(ChangeSize);

	SetupRC();										//������Ⱦ״̬

	glutMainLoop();									//����GLUT��ܵ�����
	//*/
	return a.exec();
}
