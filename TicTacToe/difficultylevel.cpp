#include "difficultylevel.h"
#include "ui_difficultylevel.h"
#include "gameoption.h"
#include "gameboard.h"
#include <QMessageBox>

difficultyLevel::difficultyLevel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::difficultyLevel)
{
    ui->setupUi(this);
}

difficultyLevel::~difficultyLevel()
{
    delete ui;
}

void difficultyLevel::on_logOutButton_clicked()
{
    //this is the logout button

    QMessageBox logoutMessage;
    logoutMessage.setText("Thank you for playing "); //message for logout
    logoutMessage.exec();
}

void difficultyLevel::on_exitButton_clicked()
{
    //close form
    close();
}

void difficultyLevel::on_difficultyHelpButton_clicked()
{
    //this is the help button

    QMessageBox helpMessage;
    helpMessage.setText("Please choose Easy, Medium or hard and press play"); //message
    helpMessage.exec();
}

void difficultyLevel::on_playGameButton_clicked()
{
    //this play method will bring the UI game and initiate a choice
    //somone has to select to go first

    //now drawing the board
    /*gameOption * myoptionToPlay = new gameOption ();
    myoptionToPlay->setModal(true);
    myoptionToPlay->exec();
    close(); //close form*/

    gameBoard * newBoard = new gameBoard ();
    newBoard->easyAIMode();
    //newBoard->gameStart();
    close();
}

void difficultyLevel::on_difficultyLevel_accepted()
{
    //return 1; //for the easy level of a.i.
}

void difficultyLevel::on_mediumButton_clicked()
{
    //return 2; //for the meduim level of a.i.
}

void difficultyLevel::on_hardButton_clicked()
{
    //return 3; //for the hard level of a.i.
}
