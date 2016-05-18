

#ifndef SERVER_HPP
#define SERVER_HPP

// Qt
#include <QList>
#include <QTcpServer>

class Connection;

class Server: public QTcpServer
{
    Q_OBJECT
public:
    Server(QObject *parent = 0);
    ~Server();

protected:
    void incomingConnection(int socketDescriptor);

private:
    QList<Connection*> * _pClients;

private slots:
    void disconnected();
};

#endif
