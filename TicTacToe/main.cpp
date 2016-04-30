#include "maintictactoe.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    qDebug() << QSqlDatabase::drivers();
    QApplication a(argc, argv);
    mainTicTacToe w;
    w.show();

    return a.exec();
}
