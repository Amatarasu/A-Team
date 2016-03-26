#ifndef GAMEBOARD_H
#define GAMEBOARD_H
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QMouseEvent>
#include <QGraphicsSceneMouseEvent>
#include <QDialog>

namespace Ui
{
    class gameBoard;
}

class gameBoard : public QDialog
{
    Q_OBJECT

    public:

        explicit gameBoard(QWidget *parent = 0);
        void settingTurn();
<<<<<<< HEAD
        void gameStart ();

=======
>>>>>>> 01bb5ee777aaf08342b1ee836ed7c32faf148192
        QString setUsername (QString);
        ~gameBoard();

    protected:


    private:
        Ui::gameBoard *ui;
};


#endif // GAMEBOARD_H
