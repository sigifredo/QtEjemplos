

// Qt
#include <QCoreApplication>

// std
#include <csignal>
#include <cstdio>

// Own
#include <Server.hpp>


Server * server = NULL;

void sigclose(int sig);

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    std::signal(SIGINT, sigclose);

    server = new Server();
    // server->start();
    return app.exec();
}

void sigclose(int sig)
{
    // if (sig != SIGTERM && sig > 0)
    delete server;
    std::printf("\nsalir,terminación satisfactoria\n");
    std::exit(0);
}
