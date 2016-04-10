#ifndef GAMEBOARD_H
#define GAMEBOARD_H
#include "ai.h"
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QMouseEvent>
#include <QGraphicsSceneMouseEvent>
#include <QDialog>
class CustomItem;
using namespace std;


namespace Ui
{
    class gameBoard;
}

class gameBoard : public QDialog
{
    Q_OBJECT

    public:
        CustomItem * myBoard[6][6];
        static int turn;
        //AI * newAI = new AI();
        static QVariant * equivalent;
        explicit gameBoard(QWidget *parent = 0);
        void settingTurn();
        void gameStart ();
<<<<<<< HEAD
        //static void callAI(int i);
        void easyAIMode ();
        void mediumAIMode ();
        void hardAIMode ();
=======
>>>>>>> f18411fdb814423bdb7cc624709c03426c3a7447
        QString setUsername (QString);
        ~gameBoard();

    protected:


    private:
        Ui::gameBoard *ui;
};

#include "ai.h"

class CustomItem : public QGraphicsRectItem {
    public:


        void playEvent (int turn);
        static void callAI(int i);

    protected:

        void mousePressEvent(QGraphicsSceneMouseEvent * event);
};




#endif // GAMEBOARD_H
