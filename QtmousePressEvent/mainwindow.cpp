#include "mainwindow.h"
#include <iostream>
using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(500,300,600,400);
}

MainWindow::~MainWindow()
{

}

//mousePressEvent
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        cout<<"("<<event->x()<<","<<event->y()<<")"<<endl;
        cout<<"("<<event->globalX()<<","<<event->globalY()<<")"<<endl;
    }

}
