#ifndef BASED_H
#define BASED_H


class based : public QObject
{
    Q_OBJECT
public:
    based(QObject *parent = 0);
public slots:
    void finaly();
};

#endif // BASED_H
