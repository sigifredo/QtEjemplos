

#ifndef CONNECTION_HPP
#define CONNECTION_HPP

#include <QTcpSocket>

class Connection: public QTcpSocket
{
    Q_OBJECT
public:
    Connection(const int& socketDescriptor, QObject * pParent);

private slots:
    void processReadyRead();
};

#endif
