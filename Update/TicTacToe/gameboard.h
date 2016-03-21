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
     bool playerImage (bool playerTurn);
     //void mouseMoveEvent(QMouseEvent * e);
     //void mousePressEvent(QMouseEvent * e);
     //void leaveEvent(QEvent *);
    ~gameBoard();

private:
    Ui::gameBoard *ui;

};

#endif // GAMEBOARD_H
