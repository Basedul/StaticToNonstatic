#include "extra.h"
#include<mainwindow.h>
Extra::Extra()
{

}

void Extra::check()
{
    qDebug() << "From check" << endl;
    MainWindow::mainWind();
}
