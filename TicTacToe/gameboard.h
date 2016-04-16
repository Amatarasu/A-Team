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
        void gameStart ();
        QString setUsername (QString);
        ~gameBoard();

    protected:


    private:
        Ui::gameBoard *ui;
};

class CustomItem : public QGraphicsRectItem
{
    public:

        void playEvent ();

    protected:

        void mousePressEvent(QGraphicsSceneMouseEvent * event);
};


#endif // GAMEBOARD_H
