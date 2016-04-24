#include "allheadertoinclude.h"
#include "ui_maintictactoe.h"


mainTicTacToe::mainTicTacToe(QWidget *parent) : QMainWindow(parent), ui(new Ui::mainTicTacToe)
{
    ui->setupUi(this);
    this->setFixedSize(600,500);
}

mainTicTacToe::~mainTicTacToe()
{
    delete ui;
}

void mainTicTacToe::on_helpButton_clicked()
{
    //help button
    QMessageBox answer;
    answer.setText("Click login to play as a player or guest to play as a guest");
    answer.exec();

}

void mainTicTacToe::on_quitButton_clicked()
{
    //this button is to quit the application

    //two button message box
    QMessageBox :: StandardButton reply;
    reply = QMessageBox :: question(this, "Options", "Quit?",QMessageBox::Yes|QMessageBox::No);

    if(reply==QMessageBox::Yes)
    {
        //will exit if yes is clicked
        //de-allocating all of the pointers in the game

        QApplication :: quit();
    }
    else
    {
       //game will not quit
       //closes message box

    }
}


void mainTicTacToe::on_loginButton_clicked()
{
    //login button
    //creates window for username and password input

    loginScene loginscene;
    loginscene.setModal(true);
    loginscene.exec();
}

void mainTicTacToe::on_signUpButton_clicked()
{
    //registrate new user

    //enter username
    //enter password
    //re-enter password

    registrationScene registerUser;
    registerUser.setModal(true);
    registerUser.exec();
}



void mainTicTacToe::on_passwordResetButton_clicked()
{
    //reset password button

    resetPassword passwordReset;
    passwordReset.setModal(true);
    passwordReset.exec();
}



void mainTicTacToe::on_playAsGuest_clicked()
{
    //play as guest user
    //changing the ui setting to be guest vs player
    //or guest vs AI

    gameMode selectMode;
    AiClass setUsername;
    setUsername.settingUsername("Guest1");
    selectMode.setModal(true);
    selectMode.exec();
}
