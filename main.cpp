#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    //second s;
    //s.show();
    w.showFullScreen();

    return a.exec();
}
