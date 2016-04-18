#ifndef AICLASS_H
#define AICLASS_H
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QLineEdit>


class AiClass : public QGraphicsRectItem
{

    public:

        //functions to control the ai

        void AiBoard ();         //AIBoard
        void easyAiMode ();     //easy mode
        void mediumAiMode ();  //medium mode
        void hardAiMode ();   //hard mode
        void settingAiLevel (int level);
        void checkScore();
        void settingTurn(int turn);


    protected:

        //now for the functions  to make the ai play the game

        void mousePressEvent(QGraphicsSceneMouseEvent * event);  //overwrite the mouse press event
        //void mouseReleaseEvent(QGraphicsSceneMouseEvent * event);  //overwrite the mouse release event
        void playEvent ();
        void checkingWinners ();
        void drawingEvent (int, int,int, int);
        QString secondUserLogin (QString secondUsername,QString secondPassword);

    private:
        QString username,username2;
       /*AiClass* board[6][6];
        int AiLevel;
        bool AiTurn;
        int numbOfSquaresLeft;
        int p1Score;
        int p2Score;*/

};

#endif // AICLASS_H
