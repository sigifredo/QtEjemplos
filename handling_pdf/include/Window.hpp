

#ifndef WINDOW_HPP
#define WINDOW_HPP


#include <QtGui/QMainWindow>

class QLineEdit;
class QPushButton;
class QTextEdit;

class Window: public QMainWindow
{
    Q_OBJECT
public:
    Window(QWidget * pParent = 0);

public slots:
    QString askForPath();
    void savePdf();

private:
    QLineEdit * _pPdfPath;
    QTextEdit * _pPdfText;
    QPushButton * _pSaveButton;
};

#endif

