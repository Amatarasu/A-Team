#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <QDialog>

namespace Ui {
class gameBoard;
}

class gameBoard : public QDialog
{
    Q_OBJECT

public:
    explicit gameBoard(QWidget *parent = 0);

     void gameStart();
    ~gameBoard();

private:
    Ui::gameBoard *ui;
};

#endif // GAMEBOARD_H
