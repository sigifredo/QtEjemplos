

// Own
#include <Client.hpp>

// Qt
#include <QTcpSocket>

// std
#include <cstdio>

Client::Client(QObject * pParent):
    QTcpSocket(pParent)
{
    connectToHost("127.0.0.1", 4000);

    connect(this, SIGNAL(connected()), this, SLOT(connectedSlot()));
    connect(this, SIGNAL(disconnected()), this, SLOT(disconnectedSlot()));
    connect(this, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(errorSlot(QAbstractSocket::SocketError)));
}

void Client::connectedSlot()
{
    std::printf("%s\n", __func__);
}

void Client::disconnectedSlot()
{
    std::printf("%s\n", __func__);
}

void Client::errorSlot(const QAbstractSocket::SocketError& socketError)
{
    std::printf("%s: %d\n", __func__, socketError);
}
