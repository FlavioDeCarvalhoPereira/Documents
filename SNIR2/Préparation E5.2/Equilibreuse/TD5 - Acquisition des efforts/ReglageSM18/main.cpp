#include "conditionneurwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ConditionneurWidget w;
    w.show();
    return a.exec();
}
