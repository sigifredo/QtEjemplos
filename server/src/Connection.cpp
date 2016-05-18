

// Own
#include <Connection.hpp>
#include <Global.hpp>

Connection::Connection(const int& socketDescriptor, QObject * pParent):
    QTcpSocket(pParent)
{
    setSocketDescriptor(socketDescriptor);

    connect(this, SIGNAL(readyRead()), this, SLOT(processReadyRead()));
}

void Connection::processReadyRead()
{
    const int size = sizeof(MessageType);
    QByteArray buffer = read(size);

    if (buffer.size() == size && isValid())
    {
        char * data = buffer.data();
        MessageType type = *reinterpret_cast<MessageType*>(data);
        std::printf("message: %d\n", type);
    }
    else
        abort();
}
