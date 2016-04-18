#ifndef AICLASS_H
#define AICLASS_H

#include "gameboard.h"
#include <QLineEdit>


class AiClass : public QGraphicsRectItem
{

    public:

        //functions to control the ai

        void AiBoard ();         //AIBoard
        void easyAiMode ();     //easy mode
        void mediumAiMode ();  //medium mode
        void hardAiMode ();   //hard mode
        int settingAiLevel (int level);
        void checkScore();
        void settingTurn();

    protected:

        //now for the functions  to make the ai play the game

        void mousePressEvent(QGraphicsSceneMouseEvent * event);  //overwrite the mouse press event
        //void mouseReleaseEvent(QGraphicsSceneMouseEvent * event);  //overwrite the mouse release event
        void playEvent ();
        void checkingWinners ();
        void drawingEvent (int, int,int, int);

    private:

        QString username;
        int AiLevel;
};

#endif // AICLASS_H
