#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<extra.h>
static MainWindow * staticO;
Ui::MainWindow *ob;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    h = new HelloCheck();
    staticO = this;
    connect(this, SIGNAL(mainToBased()), h, SLOT(finaly()));

    Extra::check();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mainWind()
{
    qDebug() << "mainWind" << endl;


    MainWindow *m = ((MainWindow*)staticO);
    m->nonStatic();

}

void MainWindow::nonStatic()
{
    staticO->nonStaticTwo();
}

void MainWindow::nonStaticTwo()
{
    emit mainToBased();
}
