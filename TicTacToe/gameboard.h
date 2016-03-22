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
        ~gameBoard();
    protected:


    private:
        Ui::gameBoard *ui;
        bool playerTurn;


};


#endif // GAMEBOARD_H
