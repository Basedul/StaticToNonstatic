#ifndef HELLOCHECK_H
#define HELLOCHECK_H

#include <QObject>

class HelloCheck : public QObject
{
    Q_OBJECT
public:
    explicit HelloCheck(QObject *parent = nullptr);
public slots:
    void finaly();

signals:
};

#endif // HELLOCHECK_H
