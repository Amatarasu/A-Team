#include "gameboard.h"
#include "ui_gameboard.h"
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QVector>
#include <QGraphicsScene>


gameBoard::gameBoard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gameBoard)
{
    ui->setupUi(this);
}

gameBoard::~gameBoard()
{
    delete ui;
}

void gameBoard :: gameStart ()
{
    //now this is going to design the board with some menu on the board

    QGraphicsScene * myScene = new QGraphicsScene ();
    QGraphicsView * myView = new QGraphicsView (myScene);
    QVector <QGraphicsRectItem *> myBoard;
    myBoard.resize(36);
     int left=50, right=100, up=100, down=100;
    for (int x=0; x< myBoard.size(); x++)
    {
        //now drawing the board by using QGraphicsRectItem

        myBoard[x] = new QGraphicsRectItem();
        myBoard[x]->setRect(left,right,up,down);
        myScene->addItem(myBoard[x]);
        left+=100;
        if(x==5 || x==11 || x==17 || x==23 || x==29 || x==35)
        {
            left=50;
            right+=100;
        }
    }

    myView->show();
}
