#include "gameboard.h"
#include "ui_gameboard.h"
#include <time.h>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QDebug>
#include <QPixmap>
#include <QMouseEvent>
#include <QMenuBar>
#include <QMessageBox>


int squaresLeft=36, turn = 1; //global variables for board and turn

QString Username;
QVariant equivalent;

class CustomItem : public QGraphicsRectItem
{
    public:

    protected:

    void mousePressEvent(QGraphicsSceneMouseEvent *event)
    {
         if(event->button() == Qt::LeftButton)
         {
             if(turn== 1)
             {
                 this->setBrush(QPixmap(":/images/X.png"));
             }
             else
             {
                 this->setBrush(QPixmap(":/images/O_file.png"));
             }
         }

        this->setData(turn,equivalent);
        this->setEnabled(false);
        turn *= -1;
        squaresLeft=squaresLeft-1;
        if(squaresLeft == 0)
        {

            QMessageBox * endGame = new QMessageBox ();
            endGame->setInformativeText("call the end Game");
            endGame->show();
        }
    }

};


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

   QGraphicsScene * myScene = new QGraphicsScene ();

   QGraphicsView * myView = new QGraphicsView (myScene);

   //display, user ID, score, and amount of turns

   myScene->addText("UserID: "+Username+" \t\tScore: "+"\t\tTurns: ")->mapToScene(0.0,0.0).toPoint();
   myView->setFixedSize(800,900);
   myView->setMouseTracking(true);
   QGraphicsRectItem * myBoard[6][6]; //build  the array of board

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

void gameBoard :: settingTurn()
{
    //this will change the global variable of the turn
    turn = -1;
}



void gameBoard :: easyAIModel()
{
    gameStart();
}




