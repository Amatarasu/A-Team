#ifndef AICLASS_H
#define AICLASS_H
#include "gamemode.h"
#include "maintictactoe.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMessageBox>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsRectItem>
#include <QDebug>
#include <QString>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <iostream>
#include <QMenu>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsView>
//#include <QLineEdit>


class AiClass : public QGraphicsRectItem{

    public:

        //functions to control the ai

        void AiBoard ();         //AIBoard
        void easyAiMode ();     //easy mode
        void mediumAiMode ();  //medium mode
        void hardAiMode ();   //hard mode
        void settingAiLevel (int level);
        void checkScore();
        void settingTurn(int turn);
        QString secondUserInformation (QString);
        QString settingUsername(QString);
        bool secondUserLogin (QString, QString);
        void newGame (QGraphicsView *);
        struct Point;
        struct pAndS;

    protected:
        //now for the functions  to make the ai play the game

        void mousePressEvent(QGraphicsSceneMouseEvent * event);  //overwrite the mouse press event
        //void mouseReleaseEvent(QGraphicsSceneMouseEvent * event);  //overwrite the mouse release event
        void playEvent ();
        void checkingWinners ();
        void drawingEvent (int, int,int, int);
        void updatingScoreBoard (QGraphicsScene *);

    private:
        QString username; //username2;
        int eval(int bd[6][6], int turn, Point p);
        int calc(int X, int O);
        int minmax(int alpha, int beta, int depth, int turn, int netScore);
        Point best();
};

#endif // AICLASS_H
