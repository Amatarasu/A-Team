#include "gameboard.h"
#include "ui_gameboard.h"
//#include "ai.h"
#include <time.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QDebug>
#include <QPixmap>
#include <QMouseEvent>
#include <QMenuBar>
#include <QMessageBox>
using namespace std;

//class CustomItem;


//int squaresLeft=36; //global variables for board and turn
//int turn = 1;

QString Username;
<<<<<<< HEAD
QVariant equivalent;
bool AiTurn = false;
=======
CustomItem * myBoard[6][6];
>>>>>>> f18411fdb814423bdb7cc624709c03426c3a7447


void CustomItem :: mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
<<<<<<< HEAD
        this->playEvent(1);
        //AI::callAI(1, gameBoard);
=======
        this->playEvent();
>>>>>>> f18411fdb814423bdb7cc624709c03426c3a7447

    }

}

//mouse release event in order to make the


void CustomItem :: playEvent(int turn)
{
    std::cout << "check erer\n";
    QVariant equ;
    std::cout << "check er\n";
    if(turn == 1)
    {
        this->setBrush(QPixmap(":/images/X.png"));
        std::cout << "check x\n";
    }
    else
    {
       this->setBrush(QPixmap(":/images/O_file.png"));
                     std::cout << "check o\n";
    }
<<<<<<< HEAD
    std::cout << "check 6\n";

    this->setData(turn,equ);
=======
    //this->setData(turn,equivalent);
>>>>>>> f18411fdb814423bdb7cc624709c03426c3a7447
    this->setEnabled(false);
    turn *= -1;
    //std::cout << "check";
    //squaresLeft=squaresLeft-1;
 /*   if(squaresLeft == 0)
    {
       QMessageBox * endGame = new QMessageBox ();
       endGame->setInformativeText("call the end Game");
       endGame->show();
    }*/
}



QString gameBoard:: setUsername (QString username)
{
     Username = username;
     return username;
}

//now adding a menu content in our board
gameBoard::gameBoard(QWidget *parent) : QDialog(parent), ui(new Ui::gameBoard)
{
    ui->setupUi(this);
    this->setMouseTracking(true);
}

gameBoard::~gameBoard()
{
    delete ui;
}

void gameBoard::gameStart()
{
   //now this is going to design the board with some menu on the board
    //int turn = 1;
    static CustomItem * myBoard[6][6];

   QGraphicsScene * myScene = new QGraphicsScene ();

   QGraphicsView * myView = new QGraphicsView (myScene);

   //display, user ID, score, and amount of turns

   myScene->addText("UserID: "+Username+" \t\tScore: "+"\t\tTurns: ")->mapToScene(0.0,0.0).toPoint();
   //myView->setFixedSize(750,700);
   myView->showMaximized();
   myView->setMouseTracking(true);

   //build  the array of board

   //pixel sizes of the four dimensions

   int left=100, right=100, up=100, down=100;

   //for loop to initialze boar
   for (int x=0; x< 6; x++)
   {
       for(int y = 0; y < 6; y++) //changed all y
       {
           //now drawing the board by using QGraphicsRectItem

           myBoard[x][y] = new CustomItem ();
           myBoard[x][y]->setRect(left,right,up,down);
           myScene->addItem(myBoard[x][y]);
           left+=100;

           if(y==5)
           {
                   left=100;
                   right+=100;
           }
       }
   }
   //display board

   myView->show();
}


/*
void gameBoard :: settingTurn()
{
    //this will change the global variable of the turn
    turn = -1;
}

<<<<<<< HEAD
void gameBoard :: easyAIMode ()
{
    //start the board
    gameStart();
}

void gameBoard::mediumAIMode()
{
    //Medium AI mode
}

void gameBoard::hardAIMode()
{
    //hard AI mode
}
*/
=======



>>>>>>> f18411fdb814423bdb7cc624709c03426c3a7447
