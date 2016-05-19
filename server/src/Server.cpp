

// std
#include <cstdio>

// Own
#include <Server.hpp>
#include <Connection.hpp>

Server::Server(QObject *parent):
    QTcpServer(parent)
{
    _pClients = new QList<Connection*>();
    listen(QHostAddress::Any, 4000);
}

Server::~Server()
{
    delete _pClients;
}

void Server::incomingConnection(int socketDescriptor)
{
    Connection* pConnection = new Connection(socketDescriptor, this);

    connect(pConnection, SIGNAL(disconnected()), this, SLOT(disconnected()));
    _pClients->append(pConnection);

    std::printf("new connection: %s\n", pConnection->localAddress().toString().toStdString().c_str());
}

void Server::disconnected()
{
    if (Connection* pConnection = qobject_cast<Connection*>(sender()))
        _pClients->removeOne(pConnection);
}
