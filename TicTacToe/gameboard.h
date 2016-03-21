#ifndef GAMEBOARD_H
#define GAMEBOARD_H
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QMouseEvent>
#include <QGraphicsSceneMouseEvent>

#include <QDialog>

namespace Ui {
class gameBoard;
}

class gameBoard : public QDialog
{
    Q_OBJECT

    public:
        explicit gameBoard(QWidget *parent = 0);
        void gameStart ();

        void mouseMoveEvent(QGraphicsSceneMouseEvent * event);
        void mousePressEvent(QGraphicsSceneMouseEvent * event);
        //void leaveEvent(QEvent *);
        ~gameBoard();
    protected:


    private:
        Ui::gameBoard *ui;
        bool playerTurn;


};


#endif // GAMEBOARD_H
