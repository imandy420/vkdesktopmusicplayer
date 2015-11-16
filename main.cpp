#include "loginwidget.h"
#include <QApplication>
#include <QDebug>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QTextCodec *utfCodec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(utfCodec);

    QApplication a(argc, argv);
    LoginWidget loginWidget;

    loginWidget.setMinimumSize(420,500);
    loginWidget.setMaximumSize(420,500);

    loginWidget.show();

    return a.exec();
}
