#include "allheadertoinclude.h"

using namespace std;

//gobla qt variable for setting scenes, usernames, and graphic items

QString username,username2;
QGraphicsView * myView;
QGraphicsScene * myScene;
QGraphicsTextItem * boardLabel;
AiClass * board[6][6];

int takingTurns; //global variables for board and turn
int AiLevel = 0;
bool AiTurn = false;// callingEndGame= false;
int numbOfSquaresLeft =36;
int p1Score = 0;
int p2Score = 0;
int MIN_VALUE = std::numeric_limits<int>::min(); // minimum value
int MAX_VALUE = std::numeric_limits<int>::max();
int maxDepth = 5;
int aWeight = -1;
int pWeight = 1;
int b[6][6];
int MVP1[] = {15, 16, 21, 22, 8, 11, 26, 29};

struct AiClass::Point{
    int x;
    int y;
} MVP[8];

struct AiClass::pAndS{
    int score;
    Point p;
};
vector<AiClass::pAndS> leafScores;


void AiClass::AiBoard(){
    //now this is going to design the board with some menu on the board

	p1Score=p2Score=0;
	numbOfSquaresLeft=36;
    myScene = new QGraphicsScene ();
    myView = new QGraphicsView (myScene);
    secondUserInformation(username2);
    updatingScoreBoard(myScene);
    myView->showMaximized();
    int left=100, right=100, up=100, down=100;
    //for loop to initialze boar
    for (int x=0; x< 6; x++)
	{
        for(int y = 0; y < 6; y++)
		{ //changed all y
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
    for(int i = 0; i < 8; i++){
            MVP[i].y = MVP1[i]%6-1;//col
            MVP[i].x = MVP1[i]/6;//row
    }
    if(AiTurn == true && AiLevel == 3)
       this->hardAiMode();
    if(AiTurn == true && AiLevel == 2)
        this->mediumAiMode();
    if(AiTurn == true && AiLevel == 1)
        this->easyAiMode();
    AiTurn = false;

}


void AiClass::easyAiMode (){
    //Randomly places token
    // will be used to generate a random colom and row
    int col, row;
    col=rand()%6;
    row=rand()%6;
    if(board[col][row]->isEnabled() == false){//If already chosen, will guess again.
        easyAiMode();
    }
    else{
        //If available, play.
        board[col][row]->playEvent();
        AiTurn = false;
    }
}

void AiClass::mediumAiMode(){
    maxDepth = 4;
    hardAiMode();
}

void AiClass::hardAiMode(){
    while(AiTurn){
//        bool mvp = false;
        for(int i = 0; i < 4; i++){
            if(board[MVP[i].x][MVP[i].y]->isEnabled() == true){
                board[MVP[i].x][MVP[i].y]->playEvent();
                AiTurn = false;
                break;
            }
        }
        if(b[2][2] == -1 && AiTurn && b[2][3] == -1 && AiTurn){
            if(b[2][1] == -1 && AiTurn && board[2][4]->isEnabled() == true){
                board[2][4]->playEvent();
                AiTurn = false;
                break;
            }
            if(board[2][1]->isEnabled() == true){
                board[2][1]->playEvent();
                AiTurn = false;
                break;
            }
        }
        if(b[3][2] == -1 && AiTurn && b[3][3] == -1 && AiTurn){
            if(b[3][1] == -1 && AiTurn && board[3][4]->isEnabled() == true){
                board[3][4]->playEvent();
                AiTurn = false;
                break;
            }
            if(board[3][1]->isEnabled() == true){
                board[3][1]->playEvent();
                AiTurn = false;
                break;
            }
        }
        if(b[2][2] == -1 && AiTurn && b[3][2] == -1 && AiTurn){
            if(b[1][2] == -1 && AiTurn && board[4][2]->isEnabled() == true){
                board[4][2]->playEvent();
                AiTurn = false;
                break;
            }
            if(board[1][2]->isEnabled() == true){
                board[1][2]->playEvent();
                AiTurn = false;
                break;
            }
        }
        if(b[2][3] == -1 && AiTurn && b[3][3] == -1 && AiTurn){
            if(b[1][3] == -1 && AiTurn && board[4][3]->isEnabled() == true){
                board[4][3]->playEvent();
                AiTurn = false;
                break;
            }
            if(board[1][3]->isEnabled() == true){
                board[1][3]->playEvent();
                AiTurn = false;
                break;
            }
        }
        if(b[2][2] == -1 && AiTurn && b[3][3] == -1 && AiTurn){
            if(b[1][1] == -1 && AiTurn && board[4][4]->isEnabled() == true){
                board[4][4]->playEvent();
                AiTurn = false;
                break;
            }
            if(board[1][1]->isEnabled() == true){
                board[1][1]->playEvent();
                AiTurn = false;
                break;
            }
        }
        if(b[3][2] == -1 && AiTurn && b[2][3] == -1 && AiTurn){
            if(b[4][1] == -1 && AiTurn && board[1][4]->isEnabled() == true){
                board[1][4]->playEvent();
                AiTurn = false;
                break;
            }
            if(board[4][1]->isEnabled() == true){
                board[4][1]->playEvent();
                AiTurn = false;
                break;
            }
        }
        if(AiTurn){
            for(int i = 4; i < 8; i++){
                if(board[MVP[i].x][MVP[i].y]->isEnabled() == true){
                    board[MVP[i].x][MVP[i].y]->playEvent();
                    AiTurn = false;
                    break;
                }
            }
        }
        if(AiTurn){
            minmax(MIN_VALUE, MAX_VALUE, 0, -1, 0);
            Point p = best();
            if(board[p.x][p.y]->isEnabled() == true){
                b[p.x][p.y] = -1;
                board[p.x][p.y]->playEvent();
                AiTurn = false;
            }
        }
    }
}

void AiClass::settingAiLevel(int level){
    //this funciton is used to design a level
    AiLevel = level;
}

void AiClass::mousePressEvent(QGraphicsSceneMouseEvent *event){
    if(AiTurn == false){
        if(event->button() == Qt::LeftButton){
            this->playEvent();
        }
    }

    AiTurn = true;
    if(AiTurn == true && AiLevel == 3){
       this->hardAiMode();
    }
    else if(AiTurn == true && AiLevel == 2){
        this->mediumAiMode();
    }
    else if(AiTurn == true && AiLevel == 1){
        this->easyAiMode();
    }
    else
        AiTurn = false;

}

void AiClass::playEvent(){
    if(takingTurns == 1){
        this->setBrush(QPixmap(":/images/X.png"));
    }
    else{
       this->setBrush(QPixmap(":/images/O_file.png"));
    }
    this->setData(takingTurns,QVariant(takingTurns).toInt());
    this->setEnabled(false);
    myScene->removeItem(boardLabel);
    checkScore();
    updatingScoreBoard(myScene);
    takingTurns *=-1;
    numbOfSquaresLeft--;

    if(numbOfSquaresLeft == 0){
       QMessageBox endGame;
       if(p1Score > p2Score){
           endGame.setInformativeText(username + " wins!");
           updatingUserScore(username, username2, false);
       } else if(p1Score < p2Score){
           endGame.setInformativeText(username2 + " wins!");
           updatingUserScore(username2, username, false);
       }else {
           endGame.setInformativeText("Tie Game!");
           updatingUserScore(username, username2, true);
       }
       endGame.exec();
       AiTurn = false;
       newGame(myView);
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
                b[x][y] = takingTurns;
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
        if(board[x][y+i]->data(takingTurns).toInt() == player)
            col++;
        else
            break;
    }
    for(int i = 1; i < 4; i++){
        if(y-i < 0)
            break;
        if(board[x][y-i]->data(takingTurns).toInt() == player)
            col++;
        else
            break;
    }
    if(col >=4)
        score += (col - 3);

    //row
    for(int i = 1; i < 4; i++){
        if(x+i > 5)
            break;
        if(board[x+i][y]->data(takingTurns).toInt() == player)
            row++;
        else
            break;
    }
    for(int i = 1; i < 4; i++){
        if(x-i < 0)
            break;
        if(board[x-i][y]->data(takingTurns).toInt() == player)
            row++;
        else
            break;
    }
    if(row >= 4)
        score += (row - 3);

    //diag '\'
    for(int i = 1; i < 4; i++){
        if(y+i > 5 || x+i > 5)
            break;
        if(board[x+i][y+i]->data(takingTurns).toInt() == player)
            diag++;
        else
            break;
    }
    for(int i = 1; i < 4; i++){
        if(y-i < 0 || x-i < 0)
            break;
        if(board[x-i][y-i]->data(takingTurns).toInt() == player)
            diag++;
        else
            break;
    }
    if(diag >= 4)
        score += (diag - 3);

    //diag2 /
    for(int i = 1; i < 4; i++){
        if(y-i < 0 || x+i > 5)
            break;
        if(board[x+i][y-i]->data(takingTurns).toInt() == player)
            diag2++;
        else
            break;
    }
    for(int i = 1; i < 4; i++){
        if(y+i >5 || x-i < 0)
            break;
        if(board[x-i][y+i]->data(takingTurns).toInt() == player)
            diag2++;
        else
            break;
    }
    if(diag2 >= 4)
        score += (diag2 - 3);

    if(takingTurns == 1)
        p1Score = score;
    else
        p2Score = score;

}

void AiClass::settingTurn(int turn){//this will change the global variable of the turn
    takingTurns = turn;
}

int AiClass::eval(int bd[6][6], int turn, Point p){
    int x = p.x;
    int y = p.y;
    int col = 1;
    int row = 1;
    int diag = 1;
    int diag2 = 1; //initiated to 1 since there is always the one just placed
    int score = 0;

    //column
    for(int i = 1; i < 4; i++){
        if(y+i > 5)
            break;
        if(bd[x][y+i] == turn)
            col++;
        else
            break;
    }
    for(int i = 1; i < 4; i++){
        if(y-i < 0)
            break;
        if(bd[x][y-i] == turn)
            col++;
        else
            break;
    }
    if(col >=4)
        score += (col - 3);

    //row
    for(int i = 1; i < 4; i++){
        if(x+i > 5)
            break;
        if(bd[x+i][y] == turn)
            row++;
        else
            break;
    }
    for(int i = 1; i < 4; i++){
        if(x-i < 0)
            break;
        if(bd[x-i][y] == turn)
            row++;
        else
            break;
    }
    if(row >= 4)
        score += (row - 3);

    //diag '\'
    for(int i = 1; i < 4; i++){
        if(y+i > 5 || x+i > 5)
            break;
        if(bd[x+i][y+i] == turn)
            diag++;
        else
            break;
    }
    for(int i = 1; i < 4; i++){
        if(y-i < 0 || x-i < 0)
            break;
        if(bd[x-i][y-i] == turn)
            diag++;
        else
            break;
    }
    if(diag >= 4)
        score += (diag - 3);

    //diag2 /
    for(int i = 1; i < 4; i++){
        if(y-i < 0 || x+i > 5)
            break;
        if(bd[x+i][y-i] == turn)
            diag2++;
        else
            break;
    }
    for(int i = 1; i < 4; i++){
        if(y+i >5 || x-i < 0)
            break;
        if(bd[x-i][y+i] == turn)
            diag2++;
        else
            break;
    }
    if(diag2 >= 4)
        score += (diag2 - 3);

    if(turn == 1)
        return  score * pWeight;
    else
        return score * aWeight;
}

int AiClass::calc(int X, int O){
    int change = 0;
    if(X > 3)
        change = 10;
    if(X == 3 && O == 0)
        change = 3;
    if(X == 2 && O == 0)
        change = 2;
    if(X == 1 && O == 0)
        change = 1;
    if(O > 3)
        change = -10;
    if(O == 3 && X == 0)
        change = -3;
    if(O == 2 && X == 0)
        change = -2;
    if(O == 1 && X == 0)
        change = -1;
    return change;
}

int AiClass::minmax(int alpha, int beta, int depth, int turn, int netScore){
    int score = netScore;
    if(beta<=alpha){
            if(turn == 1)
                return MAX_VALUE;
            else
                return MIN_VALUE;
    }
        vector<Point> pAvail;// = getAvail();
        Point p;
        for(int i = 0; i < 6; ++i){
            for(int j = 0; j < 6; ++j){
                if(b[i][j] != -1 && b[i][j] != 1){
                    p.x = i;
                    p.y = j;
                    pAvail.push_back(p);
                }
            }
        }
        if(depth == maxDepth)
            return score;//eval(b, turn);

        if(pAvail.empty())
            return 0;

        if(depth == 0)
            leafScores.clear();

        //int maxValue = MIN_VALUE;
        //int minValue = MAX_VALUE;

        for(int i = 0; i < pAvail.size(); i++){
            /*******************************************************/

            p = pAvail[i];
            int current = 0;
            if(turn == 1){
                //Player move
                b[p.x][p.y] = 1;
                score += eval(b, 1, p);
                current = minmax(alpha, beta, depth+1, -1, score);

                //if(current > maxValue)
                   // maxValue = current;

                //Set alpha
                if(current > alpha)
                    alpha = current;

                if(depth == 0){
                    pAndS leaf;
                    leaf.score = current;
                    leaf.p = p;
                    leafScores.push_back(leaf);
                }
            }
            if(turn == -1){
                //AI move
                b[p.x][p.y] = -1;
                score += eval(b, -1, p);
                current = minmax(alpha, beta, depth+1, 1, score);
                //if(current < minValue)
                    //minValue = current;

                //Set beta
                if(current < beta)
                    beta = current;

                if(depth == 0){
                    pAndS leaf;
                    leaf.score = current;
                    leaf.p = p;
                    leafScores.push_back(leaf);
                }
            }

            //reset board
            b[p.x][p.y] = 0;

            //If a pruning has been done, don't evaluate the rest of the sibling states

            if(current == MAX_VALUE || current == MIN_VALUE)
                break;
        }

        /**********************************************************************************/

        return turn == 1 ? alpha : beta; //maxValue : minValue;
}

AiClass::Point AiClass::best(){
        int max = 100;
        Point best;
        for(int i = 0; i < leafScores.size(); i++){
            if(max > leafScores[i].score){
                max = leafScores[i].score;
                best = leafScores[i].p;
            }
        }

        return best;
}

void AiClass:: drawingEvent (int left, int right,int up, int down){
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

void AiClass::updatingScoreBoard(QGraphicsScene *){
    //now let me check the AI level and see if it has been changed

    //this function updates the score board
    boardLabel = new QGraphicsTextItem;
    boardLabel->setPlainText("Username: "+username+"\t  "+"Score: "+QString::number(p1Score)+
                             "\t\t"+"Username2: "+username2+"\t"+"Score: "+QString::number(p2Score)+
                             "\t\t"+"Ai Level: "+QString::number(AiLevel)
                             );
    boardLabel->setFont(QFont("Times"));
    boardLabel->setDefaultTextColor(QColor(Qt::blue));
    myScene->addItem(boardLabel);
}

QString AiClass:: secondUserInformation(QString secondUsername){
    QString secondPassword;
    QInputDialog secondUsernamePrompt, secondePasswordPrompt;
    if(AiLevel == 0 && username.isEmpty() == true){
        secondUsernamePrompt.setLabelText("Enter username");
        secondUsernamePrompt.setCancelButtonText("Cancel");
        secondUsernamePrompt.setOkButtonText("Proceed");
        secondUsernamePrompt.setFont(QFont("Times"));
        secondUsernamePrompt.exec();
        secondUsername = secondUsernamePrompt.textValue();
        if(secondUsername.isEmpty())
            return secondUserInformation(secondUsername);
        if(secondUsername.toLower() == "guest"){
            username2="Guest2";
            return username2;
        }

        if(username2.toLower() !="guest"){
            secondePasswordPrompt.setLabelText("Enter your password");
            secondePasswordPrompt.exec();
            secondPassword=secondePasswordPrompt.textValue();
            if (secondPassword.isEmpty())
                return secondUserInformation(secondUsername);

            //now using the database in order to querry you
            if (secondUserLogin(secondUsername,secondPassword)){
               username2=secondUsername;
               return username2;
            } else {
                secondUserInformation(secondUsername);
            }
        }
    }
    else if(AiLevel == 0){
        //meaning username is not empty

        secondUsernamePrompt.setLabelText("enter username");
        secondUsernamePrompt.exec();
        secondUsername = secondUsernamePrompt.textValue();
        if(secondUsername.toLower() == "guest") {
            username2="Guest";
            return username2;

            //meaning username2 is going to play as guest
        } else {
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
        username2 = "A.I.";

    return username2;

}

QString AiClass::settingUsername(QString myUsername)
{
    username=myUsername;
    return username;
}

bool AiClass::secondUserLogin(QString secondUser,QString secondPass)
{
    //this is for login in as a second user

    bool successStatus = false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE"); //driver of database
    db.setDatabaseName("TicTacToeDB.db");
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
		QString realUsername, realPassword;
        myQuery.prepare("SELECT username,password FROM players WHERE username=:username"); //searching for user
		myQuery.bindValue(":username",secondUser);
		bool successfulQuery =myQuery.exec();
		if(!successfulQuery)
		{
			QMessageBox errorMessage;
			errorMessage.setInformativeText(db.lastError().text());
			errorMessage.exec();

		}
		else
		{
			while (myQuery.next())
			{
				realUsername = myQuery.value(0).toString();
				realPassword = myQuery.value(1).toString();
			}
		}

        //now comparing inputted username and password with database entries

        int x=QString::compare(realUsername,secondUser); //comparing username
        int y=QString::compare(secondPass,realPassword); //comparing password


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
    msgBox.setWindowTitle("New Game");
    msgBox.setText("Would you like to start a new game?");
    msgBox.setStandardButtons(QMessageBox::Yes);
    msgBox.addButton(QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::Yes);
    if(msgBox.exec() == QMessageBox::Yes)
    {
		AiTurn=false;
		myScene->clear();
        myView->close();
        p1Score=p2Score=0;
        numbOfSquaresLeft=36;
		AiTurn=NULL;
		takingTurns=NULL;

		for(int x=0; x < 6; x++)
		{
			for (int y=0; y < 6; y++)
			{
				b[x][y]=NULL;
			}
		}

        gameMode startingNewGame;
        startingNewGame.setModal(true);
        startingNewGame.exec();
    }
	else
    {
        
		myView->close();
		p1Score=NULL;
		p2Score=NULL;
		myScene->clear();
		delete myScene;
		delete myView;
    }
}

void AiClass::updatingUserScore(QString winner, QString loser, bool tie){
    //this function will only update the user score

    QSqlDatabase connection = QSqlDatabase :: addDatabase("QSQLITE");
    connection.setDatabaseName("TicTacToeDB.db");
    bool connected = connection.open();
    QSqlQuery dbQuery;
    if(!connected){
        QMessageBox failedConnection;
        failedConnection.setText("Could not connect to database");
        failedConnection.exec();
    }else{
        if(tie){
            if(winner.toLower() != "guest" && winner != "A.I."){
                dbQuery.prepare("UPDATE players SET ties = ties + 1 WHERE username = :user");
                dbQuery.bindValue(":user", winner);
                dbQuery.exec();
            }
            if(loser.toLower() != "guest" && loser != "A.I."){
                dbQuery.prepare("UPDATE players SET ties = ties + 1 WHERE username = :user");
                dbQuery.bindValue(":user", loser);
                dbQuery.exec();
            }
        }else{
            if(winner.toLower() != "guest" && winner != "A.I."){
                dbQuery.prepare("UPDATE players SET wins = wins + 1 WHERE username = :user");
                dbQuery.bindValue(":user", winner);
                dbQuery.exec();
            }
            if(loser.toLower() != "guest" && loser != "A.I."){
                dbQuery.prepare("UPDATE players SET loss = loss + 1 WHERE username = :user");
                dbQuery.bindValue(":user", loser);
                dbQuery.exec();
            }/*
            dbQuery.prepare("SELECT wins,loss,ties FROM players WHERE username=:user");
            dbQuery.bindValue(":user", winner);
            dbQuery.exec();

            int wins, loss, ties;
            while(dbQuery.next()){
                wins = dbQuery.value(0).toInt();
                loss = dbQuery.value(1).toInt();
                ties = dbQuery.value(2).toInt();
            }
            qDebug() << "Winner: \nWins: " << wins << endl << "Loss: " << loss << endl << "Ties: " << ties << endl;
            dbQuery.prepare("SELECT wins,loss,ties FROM players WHERE username=:user");
            dbQuery.bindValue(":user", loser);
            dbQuery.exec();
            while(dbQuery.next()){
                wins = dbQuery.value(0).toInt();
                loss = dbQuery.value(1).toInt();
                ties = dbQuery.value(2).toInt();
            }
            qDebug() << "Loser: \nWins: " << wins << endl << "Loss: " << loss << endl << "Ties: " << ties << endl;*/
        }
    }
	connection.close();
}


bool AiClass :: settingAiTurn ()
{
	//i would hate to do this but it must be done
	AiTurn=true;
	return AiTurn;
}
