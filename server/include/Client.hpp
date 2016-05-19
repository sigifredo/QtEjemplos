

#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <QTcpSocket>

class Client: public QTcpSocket
{
    Q_OBJECT
public:
    Client(QObject * pParent = nullptr);

private slots:
    void connectedSlot();
    void disconnectedSlot();
    void errorSlot(const QAbstractSocket::SocketError& socketError);
};

#endif
