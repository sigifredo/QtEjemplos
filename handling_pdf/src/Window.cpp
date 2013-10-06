

// Own
#include <Window.hpp>

#include <QtGui/QBoxLayout>
#include <QtGui/QFileDialog>
#include <QtGui/QLineEdit>
#include <QtGui/QMessageBox>
#include <QtGui/QPainter>
#include <QtGui/QPrinter>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>


Window::Window(QWidget * pParent):
    QMainWindow(pParent)
{
    QWidget * pCentralWidget = new QWidget(this);

    QBoxLayout * pLayout = new QBoxLayout(QBoxLayout::TopToBottom, pCentralWidget);

    _pPdfPath = new QLineEdit(this);
    _pPdfText = new QTextEdit(this);
    _pSaveButton = new QPushButton("Save pdf", this);

    pLayout->addWidget(_pPdfPath);
    pLayout->addWidget(_pPdfText);
    pLayout->addWidget(_pSaveButton);

    setWindowTitle("Demo Qt/PDF");
    setCentralWidget(pCentralWidget);

    connect(_pSaveButton, SIGNAL(clicked()), this, SLOT(savePdf()));

    _pPdfPath->setText(askForPath());
}

QString Window::askForPath()
{
    QFileDialog fd(this, "PDF path");
    fd.setAcceptMode(QFileDialog::AcceptSave);

    if (fd.exec() == QDialog::Accepted)
        return fd.selectedFiles().at(0);
    else
        return QString();
}

void Window::savePdf()
{
    QPrinter printer;
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(_pPdfPath->text());
    QPainter painter;

    if (painter.begin(&printer))
    {
        painter.drawText(10, 10, QString("Page 1: ") + _pPdfText->toPlainText());

        if (printer.newPage())
        {
            painter.drawText(10, 10, QString("Page 2: ") + _pPdfText->toPlainText());
            painter.end();

            QMessageBox::information(this, windowTitle(), "PDF created successful.");
        }
        else
            QMessageBox::critical(this, windowTitle(), "Failed in flushing page to disk, disk full?");
    }
    else
        QMessageBox::critical(this, windowTitle(), "Failed to open file, is it writable?");
}
