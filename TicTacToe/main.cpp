#include "maintictactoe.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainTicTacToe w;
    w.setFixedSize(700,600);
    w.show();

    return a.exec();
}
