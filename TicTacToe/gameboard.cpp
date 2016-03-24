#include "gameboard.h"
#include "ui_gameboard.h"
#include "loginscene.h"
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QDebug>
#include <QPixmap>
#include <QMouseEvent>
#include <QMenuBar>
#include <QMessageBox>

int turn = 1;
int squaresLeft=36;
QVariant equivalent;
class CustomItem : public QGraphicsRectItem
{
public:

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event)
    {
        if(event->button() == Qt::LeftButton)
        {
            if(turn == 1)
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

/*QString gameBoard:: setUsername (QString username)
{
    loginScene * playerSessionname = new loginScene();

    //username = playerSessionname->setUserName(username);
    playerName = username;
    delete playerSessionname;
    return playerName;
}*/
//now adding a menu content in our board



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
   //QMenuBar * myMenu = new QMenuBar ();
   //myMenu->setMouseTracking(true);
   //myMenu->setAccessibleDescription("GameMenu");
   //myMenu->setWindowTitle("GameMenu");
   //QGraphicsSceneMouseEvent *mouseEvent = new QGraphicsSceneMouseEvent();
    QGraphicsView * myView = new QGraphicsView (myScene);
    myView->setFixedSize(800,800);
    myView->setMouseTracking(true);
    myScene->addText(playerName);
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

    myView->show();

}





