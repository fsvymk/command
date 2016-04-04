#include "command.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    command w;
    w.show();

    return a.exec();
}
