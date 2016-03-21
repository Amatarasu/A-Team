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
#include <QPoint>

int turn = 1;
class CustomItem : public QGraphicsRectItem
{
public:

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event)
    {
        if(event->button() == Qt::LeftButton)
        {
            if(turn == 1)
                this->setBrush(QPixmap(":/images/X.png"));
            else
                this->setBrush(QPixmap(":/images/O_file.png"));
        }
        turn *= -1;
    }
};


gameBoard::gameBoard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gameBoard)
{
    ui->setupUi(this);
<<<<<<< HEAD
    this->setFixedSize(800,800);
    this->setMouseTracking(true);
    this->setWindowTitle("Main Board");
=======
    this->setMouseTracking(true);
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
}

gameBoard::~gameBoard()
{
    delete ui;
}

void gameBoard::gameStart()
{
    //now this is going to design the board with some menu on the board

   QGraphicsScene * myScene = new QGraphicsScene ();
   //QGraphicsSceneMouseEvent *mouseEvent = new QGraphicsSceneMouseEvent();
    QGraphicsView * myView = new QGraphicsView (myScene);
    myView->setFixedSize(800,800);
    myView->setMouseTracking(true);
<<<<<<< HEAD
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
=======
    QGraphicsRectItem * myBoard[6][6];

    int left=100, right=100, up=100, down=100;
    for (int x=0; x< 6; x++)
    {
        for(int i = 0; i < 6; i++)
        {
            //now drawing the board by using QGraphicsRectItem

            myBoard[x][i] = new CustomItem ();
            myBoard[x][i]->setRect(left,right,up,down);


            myScene->addItem(myBoard[x][i]);
            left+=100;
            if(i==5)
            {
                    left=100;
                    right+=100;
            }
        }
    }

    //myBoard[0][0]->;
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
    myView->show();

}


<<<<<<< HEAD

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
=======
/*void gameBoard::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        event->pos();
    }
}

void gameBoard::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        QPainter * myImage = new QPainter (event);
        if(turn == 1){
            myImage->drawPixmap(event->pos(),QPixmap(":/images/X.png"));
        }
        else{
            myImage.drawPixmap(event->pos(),QPixmap(":/images/O_file.png"));
        }
    }
}*/







>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
