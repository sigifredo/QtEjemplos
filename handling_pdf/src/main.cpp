

// Own
#include <Window.hpp>

// Qt
#include <QtGui/QApplication>

#define PATH_FILE	"/tmp/file.pdf"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    Window w;
    w.show();

    return app.exec();
}

