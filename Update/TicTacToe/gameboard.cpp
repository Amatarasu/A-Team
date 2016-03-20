#include "gameboard.h"
#include "ui_gameboard.h"
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QVector>
#include <QGraphicsScene>
#include <QComboBox>
#include <QWidgetItem>
#include <QMessageBox>
#include <QDebug>
#include <QPixmap>
#include <QMouseEvent>


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
    QVector<QVector <QGraphicsRectItem *> > myBoard(6);
    for(int j = 0; j< 6; j++){
        myBoard[j].resize(6);
    }
    int left=50, right=100, up=100, down=100;
    for (int x=0; x< 6; x++)
    {
        for(int i = 0; i < 6; i++){
        //now drawing the board by using QGraphicsRectItem

        myBoard[x][i] = new QGraphicsRectItem();
        myBoard[x][i]->setRect(left,right,up,down);
        myScene->addItem(myBoard[x][i]);
        left+=100;
        if(i==5)
        {
            left=50;
            right+=100;
        }

        //now giving the option to go first or A.I go first
        }
    }

    myView->show();
}


bool gameBoard :: playerImage (bool playerTurn)
{
    //this function suppose to paint each grid with an x an O

    QPixmap * myImage = new QPixmap ();
    if(!playerTurn)
    {
        //make 0 for false
        myImage->load("/images/O_file.png");

    }
    else
    {
        //make X as true;

        myImage->load("/images/X_file.png");
    }

    return playerTurn;
}
