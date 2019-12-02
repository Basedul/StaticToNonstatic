#include "based.h"
#include<QDebug>

based::based(QObject *parent) :
    QObject(parent)
{

}

void based::finaly()
{
    qDebug() << "Got it" << endl;
}
