#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <hellocheck.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    static void mainWind();
    void nonStatic();
    void nonStaticTwo();

private:
    Ui::MainWindow *ui;
    HelloCheck *h;
signals:
    void mainToBased();
};

#endif // MAINWINDOW_H
