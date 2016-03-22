#include "difficultylevel.h"
#include "ui_difficultylevel.h"
#include "gameoption.h"
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
    logoutMessage.setText("Thank you for playing ");
    logoutMessage.exec();
}

void difficultyLevel::on_exitButton_clicked()
{

    close();
}

void difficultyLevel::on_difficultyHelpButton_clicked()
{
    //this is the help button

    QMessageBox helpMessage;
    helpMessage.setText("Please choose Easy, Medium or hard and press play");
    helpMessage.exec();
}

void difficultyLevel::on_playGameButton_clicked()
{
    //this play method will bring the UI game and initiate a choice
    //somone has to select to go first

    //now drawing the board;
    gameOption * myoptionToPlay = new gameOption ();
    myoptionToPlay->setModal(true);
    myoptionToPlay->exec();
    close();
}

int difficultyLevel::on_difficultyLevel_accepted()
{
    return 1;
}

int difficultyLevel::on_mediumButton_clicked()
{
    return 2;
}

int difficultyLevel::on_hardButton_clicked()
{
    return 3;
}
