#include "notepadcpp.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NotepadCPP w;
    w.show();

    return a.exec();
}
