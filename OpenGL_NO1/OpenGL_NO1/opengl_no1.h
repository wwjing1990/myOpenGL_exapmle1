#ifndef OPENGL_NO1_H
#define OPENGL_NO1_H

#include <QtWidgets/QMainWindow>
#include "ui_opengl_no1.h"

class OpenGL_NO1 : public QMainWindow
{
	Q_OBJECT

public:
	OpenGL_NO1(QWidget *parent = 0);
	~OpenGL_NO1();

private:
	Ui::OpenGL_NO1Class ui;
};

#endif // OPENGL_NO1_H
