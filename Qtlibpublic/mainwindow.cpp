#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
        _pushBt(new QpushButton(this))
{
    _pushBt->setGemomety(200,200,50,50);
    //connect(_pushBt,SIGNAL())
}

MainWindow::~MainWindow()
{

}
