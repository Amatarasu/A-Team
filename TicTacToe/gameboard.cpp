#include "gameboard.h"
#include "ui_gameboard.h"
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QGraphicsScene>
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
    this->setFixedSize(800,800);
    this->setMouseTracking(true);
    this->setWindowTitle("Main Board");
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
    myView->setFixedSize(800,800);
    myView->setMouseTracking(true);
    int left=100, right=100, up=100, down=100;
    QGraphicsRectItem * myBoard[6][6];
    for(int i = 0; i< 6; i++)
    {
        for(int j=0; j < 6; j++)
        {
            myBoard[i][j] = new QGraphicsRectItem();
            myBoard[i][j]->setRect(left,right,up,down);
            myScene->addItem(myBoard[i][j]);
            left+=100;
            if(j==5)
            {
                left=100;
                right+=100;
            }
        }
    }
    drawingPictures(myBoard);
    myView->show();
}



void mousePressEvent(QGraphicsRectItem * myBoard[6][6])
{
    for(int x=0; x<6;x++)
    {
        for(int y=0; y < 6; y++)
        {
            myBoard[x][y]->contains(myBoard[x][y]->pos().x());
            myBoard[x][y]->contains(myBoard[x][y]->pos().y());
        }
    }
}

/*void mouseReleaseEvent(QMouseEvent * e, QGraphicsRectItem * myBoard)
{
    //this is when the mouse is release


}*/
void drawingPictures(QGraphicsRectItem * myBoard[6][6])
{
    for(int x=0; x<6; x++)
    {
        for(int y=0; y<6; y++)
        {
            QPainter * paintingmyIamge = new QPainter();
            paintingmyIamge->drawPixmap(myBoard[x][y]->pos().x(),myBoard[x][y]->pos().y(),QPixmap(":/images/X.png"));
        }
    }
}
