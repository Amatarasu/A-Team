#ifndef GAMEBOARD_H
#define GAMEBOARD_H
#include <QGraphicsRectItem>
<<<<<<< HEAD
<<<<<<< HEAD
=======
#include <QGraphicsView>
#include <QMouseEvent>
#include <QGraphicsSceneMouseEvent>
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373

=======
#include <QGraphicsView>
#include <QMouseEvent>
#include <QGraphicsSceneMouseEvent>
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b
#include <QDialog>


namespace Ui
{
    class gameBoard;
}

class gameBoard : public QDialog
{
    Q_OBJECT

    public:
<<<<<<< HEAD
        explicit gameBoard(QWidget *parent = 0);
        void gameStart ();

<<<<<<< HEAD
     void gameStart();
     void drawingPictures(QGraphicsRectItem * myBoard[6][6]);
     void mousePressEvent(QMouseEvent * e, QGraphicsRectItem * myBoard[6][6]);
     //void mouseReleaseEvent(QMouseEvent * e, QGraphicsRectItem * myBoard);
     //void leaveEvent(QEvent *);
    ~gameBoard();
=======
        void mouseMoveEvent(QGraphicsSceneMouseEvent * event);
        void mousePressEvent(QGraphicsSceneMouseEvent * event);
        //void leaveEvent(QEvent *);
        ~gameBoard();
    protected:


    private:
        Ui::gameBoard *ui;
        bool playerTurn;
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373

=======

        explicit gameBoard(QWidget *parent = 0);
        void settingTurn();
        void gameStart ();
        void easyAIMode ();
        void mediumAIMode ();
        void hardAIMode ();
        QString setUsername (QString);
        ~gameBoard();

    protected:
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b


    private:
        Ui::gameBoard *ui;
};

<<<<<<< HEAD
=======
class CustomItem : public QGraphicsRectItem
{
    public:

        void playEvent ();

    protected:

        void mousePressEvent(QGraphicsSceneMouseEvent * event);
};

>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b

#endif // GAMEBOARD_H
