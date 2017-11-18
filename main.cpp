#include "widget.h"
#include "gamewidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setWindowTitle("Gluttonous Miku");
    w.show();

    return a.exec();
}
