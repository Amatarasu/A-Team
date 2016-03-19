#ifndef GAMEBOARD_H
#define GAMEBOARD_H
#include <QGraphicsRectItem>

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
     void drawingPictures(QGraphicsRectItem * myBoard[6][6]);
     void mousePressEvent(QMouseEvent * e, QGraphicsRectItem * myBoard[6][6]);
     //void leaveEvent(QEvent *);
    ~gameBoard();

private:
    Ui::gameBoard *ui;

};

#endif // GAMEBOARD_H
