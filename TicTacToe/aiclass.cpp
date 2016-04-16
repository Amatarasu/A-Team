#include "aiclass.h"
#include "gameboard.h"
#include "time.h"
#include "difficultylevel.h"
#include <QPoint>
#include <QMessageBox>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsRectItem>
#include <QDebug>
#include <QPainter>
#include <algorithm>    // std::find
#include <iostream>


int takingTurns = 1; //global variables for board and turn

AiClass* board[6][6];
bool AiTurn = false;
int numbOfSquaresLeft =36;
int p1Score = 0;
int p2Score = 0;


void AiClass::AiBoard()
{

    //now this is going to design the board with some menu on the board

    QGraphicsScene * myScene = new QGraphicsScene ();
    QGraphicsView * myView = new QGraphicsView (myScene);
    QGraphicsTextItem * text = new QGraphicsTextItem ();
    text->setTextInteractionFlags(Qt::TextEditable);
    text->setPlainText("1");
    text->setPlainText("2");
    text->setPlainText("3");

    //display, user ID, score, and amount of turns

    myScene->addText(
                "Username: "+username+" \tScore: "+"\t\tUsername2: AI"+
                "\tScore2: "+"\t\tAiLevel: " + p1Score
                )->mapToScene(0.0,0.0).toPoint();
    //myView->setFixedSize(800,710);
    myView->showMaximized();
    int left=100, right=100, up=100, down=100;
    //for loop to initialze boar
    for (int x=0; x< 6; x++)
    {
        for(int y = 0; y < 6; y++) //changed all y
        {
            //now drawing the board by using QGraphicsRectItem

            board[x][y] = new AiClass ();
            board[x][y]->setPen(QPen(QColor("black"),5));
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

    //showing the board and seeding the random generator

    myView->show();
    srand(time(NULL));
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
        //this means if the bord is dissable, i will be repeating the guess

        easyAiMode();
    }
    else
    {
        //not disable, then i can play it as my board
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
    //int see = rand()%2;
    //if (see == 1)
    //    easyAiMode();
    //else
    //    hardAiMode();

    int col, row;
    col=rand()%6;
    row=rand()%6;
    if(board[col][row]->isEnabled() == false)
    {
        //this means if the bord is dissable, i will be repeating the guess

        mediumAiMode();
    }
    else
    {
        //not disable, then i can play it as my board
        if(board[3][3]->isEnabled() == true)
        {
            board[3][3]->playEvent();
        }
        else
        {

        }
        AiTurn = false;
    }
}

void AiClass :: hardAiMode()
{
    /*int count = 0;
    int ph = -1;
    int bestMove;
    //string[] game;
    game = new string[25];   //game board copy for MINIMAX

    for (int j = 0; j < 25; j++)  //looks at the board to find any moves
    {
       if (String.Equals(board[j].Content, "X") || String.Equals(board[j].Content, "O"))
       {
           count++;
           ph = j;
       }
    }

    if (count < 1)                                         // random move in center 9 square
    {                                                   // if no moves have been made
        centerNine = new List<int>(){6,7,8,11,12,13,16,17,18};
        if (ph > 0)
            centerNine.Remove(ph);
        bestMove = centerNine.ElementAt(random.Next(0, centerNine.Count-1));
        Debug.WriteLine("Random move at " + bestMove);
    }
    else
    {                                                   //copies the game board
        for (int i = 0; i < 25; i++)
        {
            if (String.Equals(board[i].Content, "X"))
            {
                game[i] = "X";
            }
            else if (String.Equals(board[i].Content, "O"))
            {
                game[i] = "O";
            }
            else
            {
                game[i] = "";
            }
        }

        depth = 0;                      //sets depth to 0
        bestMove = MinMax(game);
    }

    makeMove(bestMove);*/

}

int AiClass::settingAiLevel(int level)
{
    //this funciton is used to design a level
    AiLevel = level;
    return AiLevel;
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
    if(AiTurn == true && AiLevel == 3)
    {
       this->hardAiMode();
    }
    else if(AiTurn == true && AiLevel == 2)
    {
        this->mediumAiMode();
    }
    else if(AiTurn == true && AiLevel == 1)
    {
        this->easyAiMode();
    }
    else{AiTurn = false;}
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
    this->setData(takingTurns,QVariant(takingTurns));
    this->setEnabled(false);
    checkScore();
    takingTurns *= -1;
    numbOfSquaresLeft-=1;
    //checkScore();
        //checkingWinners();
    if(numbOfSquaresLeft == 0)
    {
       QMessageBox * endGame = new QMessageBox ();
       std::cout << "player 1: " << p1Score << "    ";
       std::cout << "player 2: " << p2Score << "    ";
       //endGame->setInformativeText("Player 1: " + p1Score + " Player 2: " + p2Score);
       endGame->setInformativeText("call the end Game");
       endGame->show();
    }
}

void AiClass::checkScore(){
    int x, y;
    int col = 1;
    int row = 1;
    int diag = 1;
    int diag2 = 1; //initiated to 1 since there is always the one just placed
    int score;
    int player = takingTurns;

    for(int i = 0; i < 6; i++){
        for(int j = 0; j<6; j++){
            if(board[i][j] == this){
                x = i;
                y = j;
            }
        }
    }

    if(takingTurns == 1)
        score = p1Score;
    else
        score = p2Score;

    //column
    for(int i = 1; i < 4; i++){
        if(y+i > 5)
            break;
        if (board[x][y+i]->data(takingTurns).toInt() == player)
            col++;
        else
            break;
    }
    for(int i = 1; i < 4; i++){
        if(y-i < 0)
            break;
        if (board[x][y-i]->data(takingTurns).toInt() == player)
            col++;
        else
            break;
    }
    if (col >=4)
        score += (col - 3);

    //row
    for(int i = 1; i < 4; i++){
        if(x+i > 5)
            break;
        if (board[x+i][y]->data(takingTurns).toInt() == player)
            row++;
        else
            break;
    }
    for(int i = 1; i < 4; i++){
        if(x-i < 0)
            break;
        if (board[x-i][y]->data(takingTurns).toInt() == player)
            row++;
        else
            break;
    }
    if (row >= 4)
        score += (row - 3);

    //diag '\'
    for(int i = 1; i < 4; i++){
        if(y+i > 5 || x+i > 5)
            break;
        if (board[x+i][y+i]->data(takingTurns).toInt() == player)
            diag++;
        else
            break;
    }
    for(int i = 1; i < 4; i++){
        if(y-i < 0 || x-i < 0)
            break;
        if (board[x-i][y-i]->data(takingTurns).toInt() == player)
            diag++;
        else
            break;
    }
    if (diag >= 4)
        score += (diag - 3);

    //diag2 /
    for(int i = 1; i < 4; i++){
        if(y-i < 0 || x+i > 5)
            break;
        if (board[x+i][y-i]->data(takingTurns).toInt() == player)
            diag2++;
        else
            break;
    }
    for(int i = 1; i < 4; i++){
        if(y+i >5 || x-i < 0)
            break;
        if (board[x-i][y+i]->data(takingTurns).toInt() == player)
            diag2++;
        else
            break;
    }
    if (diag2 >= 4)
        score += (diag2 - 3);

    if(takingTurns == 1)
        p1Score = score;
    else
        p2Score = score;


    qDebug() << "X: " << p1Score << "    ";
    qDebug() << "O: " << p2Score << "            ";

}
/*
{
    //this funciton will check for winners

    //first checking horizontally

    int red=0, blue=0;
    int tempred =0, tempblue = 0;

    for (int x = 0; x < 6; x++)
    {
        for (int y=0; y < 6; y++)
        {
            if(board[x][y]->data(takingTurns).toInt() == 1)
                tempblue++;
            else if(board[x][y]->data(takingTurns).toInt() == -1)
                tempred++;
        }

        if(tempred % 6 == 0)
            red+=3;
        else if(tempred %5 == 0)
            red+=3;
        else
            red = tempred/4;

        //now for blue

        if(tempblue %6 == 0)
            blue+=3;
        else if(tempblue % 5 == 0)
            blue+=2;
        else
            blue = tempblue/4;
    }
    //increasing score for x

    /*if(tempblue%6 == 0)
        blue=(tempblue/6)*3;
    else if(tempblue%5 == 0)
        blue=(tempblue/5)*2;
    else if(tempblue%4 == 0)
        blue = tempblue/4;
    else
    {
        blue = tempblue/4;
        tempblue=0;
    }

    qDebug() << blue;

    //increasing the score for red

    /*if(tempred%6 == 0)
        red=(tempred/6)*3;
    else if(tempred%5 == 0)
        red=(tempred/5)*2;
    else
    {
        red = tempred/4;
        tempred=0;
    }

    //now checking vertically

    for(int y=0; y < 6; y++)
    {
        int x=0;
        if(board[x][y]->data(takingTurns).toInt() == 1 && board[x+1][y]->data(takingTurns).toInt()== 1 && board[x+2][y]->data(takingTurns).toInt()== 1 && board[x+3][y]->data(takingTurns).toInt()== 1)
        {
            blue++;
            //draw();;
        }
        if(board[x+1][y]->data(takingTurns).toInt() == 1 && board[x+2][y]->data(takingTurns).toInt()== 1 && board[x+3][y]->data(takingTurns).toInt()== 1 && board[x+4][y]->data(takingTurns).toInt()== 1)
        {
            blue++;
            //draw();;
        }
        if(board[x+2][y]->data(takingTurns).toInt() == 1 && board[x+3][y]->data(takingTurns).toInt()== 1 && board[x+4][y]->data(takingTurns).toInt()== 1 && board[x+5][y]->data(takingTurns).toInt()== 1)
        {
            blue++;
            //draw();;
        }
        if(board[x][y]->data(takingTurns).toInt() == -1 && board[x+1][y]->data(takingTurns).toInt()== -1 && board[x+2][y]->data(takingTurns).toInt()== -1 && board[x+3][y]->data(takingTurns).toInt()== -1)
        {
            red++;
            ////draw();;
        }
        if(board[x+1][y]->data(takingTurns).toInt() == -1 && board[x+2][y]->data(takingTurns).toInt()== -1 && board[x+3][y]->data(takingTurns).toInt()== -1 && board[x+4][y]->data(takingTurns).toInt()== -1)
        {
            red++;
            //draw();;
        }
        if(board[x+2][y]->data(takingTurns).toInt() == -1 && board[x+3][y]->data(takingTurns).toInt()== -1 && board[x+4][y]->data(takingTurns).toInt()== -1 && board[x+5][y]->data(takingTurns).toInt()== -1)
        {
            red++;
            ////draw();;
        }
    }

    //now chekcing for diagonal

    int y=5;
    int tempred=0, tempblue=0;
    for (int x=0; x < 6; x++)
    {
       if(board[x][y]->data(takingTurns).toInt() == 1)
       {
           tempblue++;
       }
       else if(board[x][y]->data(takingTurns).toInt() == -1)
       {
           tempred++;
       }
       else
           y--;
    }

    if(tempblue == 6)
        blue+=3;
    else if(tempblue == 5)
        blue+=2;
    else if(tempblue == 4)
        blue+=1;
    else
        tempblue=0;

    //here is to increase red

    if(tempred == 6)
        red+=3;
    else if(tempred == 5)
        red+=2;
    else if(tempred == 4)
        red+=1;
    else
        tempred=0;

    y=5;
    for (int x=1; x <6; x++)
    {
      if(board[y][x]->data(takingTurns).toInt()==1)
          tempblue++;
      else if(board[y][x]->data(takingTurns).toInt() == -1)
          tempred++;
      else
          y--;
    }

    y=5;
    for (int x=2; x < 6; x++)
    {
        if(board[y][x]->data(takingTurns).toInt()==1)
            tempblue++;

        else if(board[y][x]->data(takingTurns).toInt() == -1)
            tempred++;

        else
            y--;
    }
    if(tempblue == 6)
        blue+=3;
    else if(tempblue == 5)
        blue+=2;
    else if(tempblue == 4)
        blue+=1;
    else
        tempblue=0;

    //here is to increase red

    if(tempred == 6)
        red+=3;
    else if(tempred == 5)
        red+=2;
    else if(tempred == 4)
        red+=1;
    else
        tempred=0;

    y=4;
    for(int x=0; x <5; x++)
    {
        if(board[x][y]->data(takingTurns).toInt() == 1)
            tempblue++;
        else if(board[x][y]->data(takingTurns).toInt()==-1)
            tempred++;
        else
            y--;
    }

    if(tempblue == 6)
        blue+=3;
    else if(tempblue == 5)
        blue+=2;
    else if(tempblue == 4)
        blue+=1;
    else
        tempblue=0;

    //here is to increase red

    if(tempred == 6)
        red+=3;
    else if(tempred == 5)
        red+=2;
    else if(tempred == 4)
        red+=1;
    else
        tempred=0;

    y=3;
    for(int x=0; x < 4; x++)
    {
        if(board[x][y]->data(takingTurns).toInt()==1)
            tempblue++;
        else if(board[x][y]->data(takingTurns).toInt()==-1)
            tempred++;
        else
            y--;
    }
    if(tempblue == 6)
        blue+=3;
    else if(tempblue == 5)
        blue+=2;
    else if(tempblue == 4)
        blue+=1;
    else
        tempblue=0;

    //here is to increase red

    if(tempred == 6)
        red+=3;
    else if(tempred == 5)
        red+=2;
    else if(tempred == 4)
        red+=1;
    else
        tempred=0;

     //now doing the opposite direction


    for(int x=0; x < 6; x++)
    {
        if(board[x][x]->data(takingTurns).toInt() == 1)
            tempblue++;
        else if(board[x][x]->data(takingTurns).toInt() == 1)
            tempred++;
        else
            x++;
    }
    if(tempblue == 6)
    {
        blue+=3;
        ////draw();;
    }
    else if(tempblue == 5)
    {
        blue+=2;
        ////draw();;
    }
    else if(tempblue == 4)
    {
        blue+=1;
        ////draw();;
    }
    else
        tempblue=0;

    //here is to increase red

    if(tempred == 6)
    {
        red+=3;
    }
    else if(tempred == 5)
    {
        red+=2;
        ////draw();;
    }
    else if(tempred == 4)
    {
        red+=1;
        ////draw();;
    }
    else
        tempred=0;

    for (int x=0; x < 5; x++)
    {
        if(board[x][x+1]->data(takingTurns).toInt())
            tempblue++;
        else if(board[x][x+1]->data(takingTurns).toInt())
            tempred++;
        else
            x++;
    }
    if(tempblue == 6)
    {
        blue+=3;
    }
    else if(tempblue == 5)
    {
        blue+=2;
        ////draw();;
    }
    else if(tempblue == 4)
    {
        blue+=1;
        ////draw();;
    }
    else
        tempblue=0;

    //here is to increase red

    if(tempred == 6)
    {
        red+=3;
        ////draw();;
    }
    else if(tempred == 5)
    {
        red+=2;
        //draw();;
    }
    else if(tempred == 4)
    {
        red+=1;
        ////draw();;
    }
    else
        tempred=0;


    for (int x=0; x < 5; x++)
    {
        if(board[x][x+2]->data(takingTurns).toInt() == 1)
            tempblue++;
        else if(board[x][x+2]->data(takingTurns).toInt() == 1)
            tempred++;
        else
            x++;

        if (x+2 ==5)
        break;
    }
    if(tempblue == 6)
    {
        blue+=3;
        ////draw();;
    }
    else if(tempblue == 5)
    {
        blue+=2;
        //draw();;
    }
    else if(tempblue == 4)
    {
        blue+=1;
        ////draw();;
    }
    else
        tempblue=0;

    //here is to increase red

    if(tempred == 6)
    {
        red+=3;
        ////draw();;
    }
    else if(tempred == 5)
    {
        red+=2;
        ////draw();;
    }
    else if(tempred == 4)
    {
        red+=1;
        ////draw();;
    }
    else
        tempred=0;

    y=0;
    for (int x=2; x < 6; x++)
    {
       board[x][y];
       y++;
    }
    if(tempblue == 6)
    {
        blue+=3;
        ////draw();;
    }
    else if(tempblue == 5)
    {
        blue+=2;
        //draw();;
    }
    else if(tempblue == 4)
    {
        blue+=1;
        //
    }
    else
        tempblue=0;

    //here is to increase red

    if(tempred == 6)
    {
        red+=3;
        ////draw();;
    }
    else if(tempred == 5)
    {
        red+=2;
        ////draw();;
    }
    else if(tempred == 4)
    {
        red+=1;
        ////draw();;
    }
    else
        tempred=0;

    y=0;
    for (int x=1; x < 6; x++)
    {
       if(board[x][y]->data(takingTurns).toInt() == 1)
           tempblue++;
       else if(board[x][y]->data(takingTurns).toInt() == -1)
           tempred;
       else
           y++;
    }
    if(tempblue == 6)
    {
        blue+=3;
        ////draw();;
    }
    else if(tempblue == 5)
    {
        blue+=2;
        ////draw();;
    }
    else if(tempblue == 4)
    {
        blue+=1;
        ////draw();;
    }
    else
        tempblue=0;

    //here is to increase red

    if(tempred == 6)
    {
        red+=3;
        ////draw();;
    }
    else if(tempred == 5)
    {
        red+=2;
        ////draw();;
    }
    else if(tempred == 4)
        red+=1;
    else
        tempred=0;*/

    //later on, upgrade the scores, and paint.
//}*/

void AiClass:: drawingEvent (int left, int right,int up, int down)
{
    //this is going to draw on the board
    left=0,right=0,up=0,down=0;

    QGraphicsLineItem * newPainting = new QGraphicsLineItem ();
    newPainting->setPen(QPen(QColor("Green"),20));
    newPainting->setLine(110,150,490,150);

    //vertical
    newPainting->setLine(150,110,150,490);

    //diagonal
    newPainting->setLine(100,100,500,500);
}

void AiClass :: settingTurn()
{
    //this will change the global variable of the turn
    takingTurns = -1;
}
