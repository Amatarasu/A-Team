#include "aiclass.h"
#include "time.h"
#include <QInputDialog>
#include "string.h"


int takingTurns; //global variables for board and turn
int AiLevel = 0;
bool AiTurn = false, callingEndGame= false;
int numbOfSquaresLeft =36;
int p1Score = 0;
int p2Score = 0;
QString username,username2;
AiClass * board[6][6];
QGraphicsView * myView;
QGraphicsScene * myScene;
QGraphicsTextItem * boardLabel;

void AiClass::AiBoard()
{
    //now this is going to design the board with some menu on the board

    myScene = new QGraphicsScene ();
    myView = new QGraphicsView (myScene);
    secondUserInformation(username2);
    updatingScoreBoard(myScene);
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
        board[col][row]->playEvent();
        AiTurn = false;
    }
}

void AiClass :: hardAiMode()
{
    /*int count = 0;
    int phx = -1;
    int phy=-1;
    int bestMovex, bestMovey;
    for (int x=0; x < 6; x++)  //looks at the board to find any moves
    {
       for (int y= 0; y < 6; y++)
       {
           if (board[x][y]->data(takingTurns) == 1 || board[x][y]->data(takingTurns) == -1)
           {
               count++;
               phx=x;
               phy=y;
           }
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

    board[bestMovex][bestMovey]->playEvent();*/

}

void AiClass::settingAiLevel(int level)
{
    //this funciton is used to design a level
    AiLevel = level;
}

void AiClass::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    qDebug() << AiLevel;
    if(AiTurn == false)
    {
        if(event->button() == Qt::LeftButton)
        {
            this->playEvent();
        }

    }

    AiTurn = true;
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
    else
        AiTurn = false;

}
/*
void AiClass::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    if(AiTurn == true && AiLevel == 3)
        this->easyAiMode();
    else if(AiTurn == true && AiLevel == 2)
        this->mediumAiMode();
    else if(AiTurn == true && AiLevel == 1)
        this->easyAiMode();
<<<<<<< HEAD
    else
         AiTurn = false;
}
=======
    }
    else{AiTurn = false;}
}*/

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
    myScene->removeItem(boardLabel);
    checkScore();
    updatingScoreBoard(myScene);
    takingTurns *=-1;
    numbOfSquaresLeft--;

    if(numbOfSquaresLeft == 0)
    {
       QMessageBox endGame;
       qDebug () << username << ": "<< p1Score;
       qDebug () << username2 << ": "<< p2Score;
       if(p1Score > p2Score)
       {
           endGame.setInformativeText(username+" wins "+QString::number(p1Score));
           endGame.exec();
           callingEndGame=true;
       }
       else if (p1Score < p2Score)
       {
           endGame.setInformativeText(username2+" wins "+QString::number(p2Score));
           endGame.exec();
           callingEndGame=true;
       }
       else
       {
           endGame.setInformativeText("Tie Game!");
           endGame.exec();
           callingEndGame=true;
       }

       if(callingEndGame)
           newGame(myView);
    }
}

void AiClass::checkScore()
{
    int x, y;
    int col = 1;
    int row = 1;
    int diag = 1;
    int diag2 = 1; //initiated to 1 since there is always the one just placed
    int score;
    int player = takingTurns;
    int startingx, staringy, endingx, endingy;

    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j<6; j++)
        {
            if(board[i][j] == this)
            {
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
    for(int i = 1; i < 4; i++)
    {
        if(y+i > 5)
            break;
        if (board[x][y+i]->data(takingTurns).toInt() == player)
        {
            col++;
            if(col==2)
            {
                startingx=x;
                staringy=y;
            }
        }
        else
            break;
    }
    for(int i = 1; i < 4; i++)
    {
        if(y-i < 0)
            break;
        if (board[x][y-i]->data(takingTurns).toInt() == player)
        {
            col++;
            endingx =x;
            endingy=y;
        }
        else
            break;
    }
    if (col >=4)
    {
        score += (col - 3);
        qDebug () << x << " " << y;
    }

    //row
    for(int i = 1; i < 4; i++)
    {
        if(x+i > 5)
            break;
        if (board[x+i][y]->data(takingTurns).toInt() == player)
        {
            row++;
            qDebug () << x << " "  << y << endl;
        }
        else
            break;
    }
    for(int i = 1; i < 4; i++)
    {
        if(x-i < 0)
            break;
        if (board[x-i][y]->data(takingTurns).toInt() == player)
        {
            row++;
            qDebug () << x << " " << y;
        }
        else
            break;
    }
    if (row >= 4)
        score += (row - 3);

    //diag '\'
    for(int i = 1; i < 4; i++)
    {
        if(y+i > 5 || x+i > 5)
            break;
        if (board[x+i][y+i]->data(takingTurns).toInt() == player)
        {
            diag++;
            qDebug () << x << " " << y << endl;
        }
        else
            break;
    }
    for(int i = 1; i < 4; i++)
    {
        if(y-i < 0 || x-i < 0)
            break;
        if (board[x-i][y-i]->data(takingTurns).toInt() == player)
        {
             diag++;
             qDebug () << x << " "  << y << endl;
        }
        else
            break;
    }
    if (diag >= 4)
        score += (diag - 3);

    //diag2 /
    for(int i = 1; i < 4; i++)
    {
        if(y-i < 0 || x+i > 5)
            break;
        if (board[x+i][y-i]->data(takingTurns).toInt() == player)
        {
            diag2++;
           qDebug () << x << " " << y << endl;
        }
        else
            break;
    }
    for(int i = 1; i < 4; i++)
    {
        if(y+i >5 || x-i < 0)
            break;
        if (board[x-i][y+i]->data(takingTurns).toInt() == player)
        {
            diag2++;
            qDebug () << x << " " << y << endl;
        }
        else
            break;
    }
    if (diag2 >= 4)
        score += (diag2 - 3);

    if(takingTurns == 1)
        p1Score = score;
    else
        p2Score = score;

}

void AiClass:: drawingEvent (int left, int right,int up, int down)
{
    //this is going to draw on the board
    left=0,right=0,up=0,down=0;

    QGraphicsLineItem * newPainting = new QGraphicsLineItem ();
    newPainting->setPen(QPen(QColor("Green"),20));
    newPainting->setLine(110,150,490,150);

    //vertical
    //newPainting->setLine(150,110,150,490);

    //diagonal
    //newPainting->setLine(100,100,500,500);
}

void AiClass::updatingScoreBoard(QGraphicsScene *)
{
    //now let me check the AI level and see if it has been changed

    //this function updates the score board
    boardLabel = new QGraphicsTextItem;
    boardLabel->setPlainText("Username: "+username+"\t  "+"Score: "+QString::number(p1Score)+
                             "\t\t"+"Username2: "+username2+"\t"+"Score: "+QString::number(p2Score)+
                             "\t\t"+"Ai Level: "+QString::number(AiLevel)
                             );
    boardLabel->setFont(QFont("Times"));
    myScene->addItem(boardLabel);
}

QString AiClass ::  secondUserInformation(QString secondUsername)
{
    QString secondPassword;
    QInputDialog secondUsernamePrompt, secondePasswordPrompt;
    if(AiLevel == 0 && username.isEmpty() == true)
    {
        username="Guest";
        secondUsernamePrompt.setLabelText("Enter username");
        secondUsernamePrompt.exec();
        secondUsername = secondUsernamePrompt.textValue();
        if(secondUsername.toLower() == "guest")
        {
            username2="Guest";
            return username2;
        }

        if(username2.toLower() !="guest")
        {
            secondePasswordPrompt.setLabelText("Enter your password");
            secondePasswordPrompt.exec();
            secondPassword=secondePasswordPrompt.textValue();
            username2=secondUsername;

            //now using the database in order to querry you
        }
    }
    else if(AiLevel == 0)
    {
        //meaning username is not empty

        secondUsernamePrompt.setLabelText("enter username");
        secondUsernamePrompt.exec();
        secondUsername = secondUsernamePrompt.textValue();
        if(secondUsername.toLower() == "guest")
        {
            username2="Guest";
            return username2;

            //meaning username2 is going to play as guest
        }
        else
        {
            secondePasswordPrompt.setLabelText("Enter your password");
            secondePasswordPrompt.exec();
            secondPassword=secondePasswordPrompt.textValue();
            username2=secondUsername;

            //query the database
            if (!secondUserLogin(secondUsername,secondPassword))
                secondUserInformation(secondUsername);
            else
                username2=secondUsername;
            return username2;
        }
    }
    else
        username2 = "A.I";

    return username2;

}
void AiClass :: settingTurn(int turn)
{
    //this will change the global variable of the turn
    takingTurns = turn;
}

QString AiClass::settingUsername(QString myUsername)
{
    username=myUsername;
    return username;
}

bool AiClass::secondUserLogin(QString secondPass,QString secondUser)
{
    //this is for login in as a second user

    bool successStatus = false;
    QSqlDatabase db = QSqlDatabase :: addDatabase("QMYSQL"); //driver of database
    db.setHostName("localhost");
    db.setDatabaseName("tictactoe");
    db.setUserName("root");
    db.setPassword("Amatarasu76");
    db.setPort(3306);
    bool connectionAttemps = db.open();


    if(!connectionAttemps)
    {
        //failure to connect to database
        QMessageBox errorMessage;
        errorMessage.setInformativeText("failed to load");
        errorMessage.exec();
        return successStatus;
    }
    else
    {
        //sucessful connection


        //checking if user exsists in database
        QSqlQuery myQuery;
        myQuery.prepare("SELECT `userName`, `password` FROM `players` WHERE userName = ?"); //searching for user
        myQuery.bindValue(0,secondUser);
        myQuery.exec();

        //string for username and password in the user database
        QString realUsername, realPassword;

        if(myQuery.next())
        {

            realUsername = myQuery.value(0).toString();
            realPassword = myQuery.value(1).toString();
        }

        //now comparing inputted username and password with database entries

        int x=QString :: compare(realUsername,secondUser); //comparing username
        int y=QString :: compare(secondPass,realPassword); //comparing password

        //if username or password do not match in database entries
        if(x!=0 || y!=0)
        {
            //display error message
            QMessageBox wrongUser;
            wrongUser.setInformativeText("Wrong Username or Password");
            wrongUser.exec();
            successStatus=false;
        }
        else
        {
            QMessageBox goodUser;
            goodUser.setInformativeText("Welcome "+secondUser);
            goodUser.exec();
            successStatus=true;
        }

    }

    return successStatus;
}

void AiClass::newGame(QGraphicsView * myView)
{
    /*when this function is called,
     * it will determine start a new board,
     * allow you to choose the level once more
     * or to play as player against another play*/


    QMessageBox msgBox;
    msgBox.setWindowTitle("New Game or Quit");
    msgBox.setText("Would you like to start a new game or Quit?");
    msgBox.setStandardButtons(QMessageBox::Yes);
    msgBox.addButton(QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::Yes);
    if(msgBox.exec() == QMessageBox::Yes)
    {
        myView->close();
        p1Score=p2Score=0;
        delete myView;
        numbOfSquaresLeft=36;
        gameMode startingNewGame;
        startingNewGame.setModal(true);
        startingNewGame.exec();
    }
    else
    {
        //delete the game send them to the
        myView->close();
        delete myView;
        numbOfSquaresLeft=36;
        //delete [] board;

    }
}
