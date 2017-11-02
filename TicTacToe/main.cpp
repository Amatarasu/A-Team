#include "maintictactoe.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    //This is the base of all of the classes

    QApplication a(argc, argv);
    mainTicTacToe w;
    w.show(); // show the window

    return a.exec();
}
