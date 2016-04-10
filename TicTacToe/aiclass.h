#ifndef AICLASS_H
#define AICLASS_H

#include "gameboard.h"


class AiClass : public QGraphicsRectItem
{

    public:
        //bool AiTurn = false;
        AiClass();
        void AiBoard ();
        void easyAiMode ();  //easy mode
        void mediumAiMode ();  //medium mode
        void hardAiMode ();  //hard mode

    protected:

        //now for the functions  to make the ai play the game

        void mousePressEvent(QGraphicsSceneMouseEvent * event);  //overwrite the mouse press event
        void mouseReleaseEvent(QGraphicsSceneMouseEvent * event);  //overwrite the mouse release event
        void playEvent ();
};

#endif // AICLASS_H
