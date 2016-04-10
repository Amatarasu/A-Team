#include "aiclass.h"
#include "gameboard.h"
#include "difficultylevel.h"
#include <QMessageBox>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsRectItem>
#include <QDebug>



int takingTurns = 1; //global variables for board and turn

QString username;
AiClass* board[6][6];
bool AiTurn = false;
int numbOfSquaresLeft =36;


AiClass::AiClass()
{
    //stupid constructor did not work.
    //so let me do the next best thing :)
}

void AiClass::AiBoard()
{
    //let us try to implement the AI board

    //here is easy ai mode

    //now this is going to design the board with some menu on the board

    QGraphicsScene * myScene = new QGraphicsScene ();

    QGraphicsView * myView = new QGraphicsView (myScene);

    //display, user ID, score, and amount of turns

    myScene->addText("UserID: "+username+" \t\tScore: "+"\t\tTurns: ")->mapToScene(0.0,0.0).toPoint();
    myView->setFixedSize(800,900);
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

            board[x][y] = new AiClass ();
            board[x][y]->setRect(left,right,up,down);
            myScene->addItem(board[x][y]);
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

//now doing the AI mode

void AiClass :: easyAiMode ()
{
    // will be used to generate a random colom and row

    int col, row;
    col=rand()%6;
    row=rand()%6;
    if(board[col][row]->isEnabled() == false)
    {
        easyAiMode();
    }
    else
    {
        board[col][row]->playEvent();
        AiTurn = false;
    }

}

//now doing medium AI mode

void AiClass :: mediumAiMode()
{
    //this is the medium Ai Mode
    //by using a randomized alrogirthm
    //have to make it mor structure and respond towards players move
}

void AiClass :: hardAiMode()
{
    // this is hard AI mode

}

void AiClass::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(AiTurn == false)
    {
        if(event->button() == Qt::LeftButton)
        {
            this->playEvent();
        }

    }

    AiTurn = true;
    mouseReleaseEvent(event);

}

void AiClass::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    if(AiTurn == true)
    {
        easyAiMode();
    }

}

void AiClass :: playEvent()
{
    if(takingTurns == 1)
    {
        this->setBrush(QPixmap(":/images/X.png"));
    }
    else
    {
       this->setBrush(QPixmap(":/images/O_file.png"));
    }
    this->setData(takingTurns,QVariant::QVariant(takingTurns));
    this->setEnabled(false);
    takingTurns *= -1;
    numbOfSquaresLeft=numbOfSquaresLeft-1;
    if(numbOfSquaresLeft == 0)
    {
       QMessageBox * endGame = new QMessageBox ();
       endGame->setInformativeText("call the end Game");
       endGame->show();
    }
}
