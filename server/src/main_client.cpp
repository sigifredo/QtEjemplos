

// Qt
#include <QCoreApplication>
#include <QTcpSocket>

// Own
#include <Client.hpp>

int main(int argc, char **argv)
{
    QCoreApplication app(argc, argv);

    Client client;

    return app.exec();
}
