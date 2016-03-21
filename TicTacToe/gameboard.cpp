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
   //QGraphicsSceneMouseEvent *mouseEvent = new QGraphicsSceneMouseEvent();
    QGraphicsView * myView = new QGraphicsView (myScene);
    myView->setFixedSize(800,800);
    myView->setMouseTracking(true);
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
    myView->show();

}


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







