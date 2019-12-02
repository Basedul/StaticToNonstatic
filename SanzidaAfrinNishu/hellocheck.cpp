#include "hellocheck.h"
#include <QDebug>
HelloCheck::HelloCheck(QObject *parent) : QObject(parent)
{

}

void HelloCheck::finaly()
{
    qDebug() << "Got it" << endl;
}
