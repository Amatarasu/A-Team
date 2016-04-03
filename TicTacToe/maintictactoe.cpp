#include "maintictactoe.h"
#include "ui_maintictactoe.h"
#include "resetpassword.h"
#include "gamemode.h"
#include <qmessagebox.h>
#include <difficultylevel.h>
#include <QtSql>
#include <QtDebug>
#include "loginscene.h"
#include "registrationscene.h"
#include "QGraphicsScene"

mainTicTacToe::mainTicTacToe(QWidget *parent) : QMainWindow(parent), ui(new Ui::mainTicTacToe)
{
    ui->setupUi(this);
    this->setFixedSize(600,500);
<<<<<<< HEAD
    //ui->setStyleSheet("C:/Users/cisse/Documents/qtlessons/TicTacToe/images/image.png");
    //qApp->setStyleSheet("QWidget{background-image:url(C:/Users/cisse/Documents/qtlessons/TicTacToe/images/image.png)}");


=======
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b
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


<<<<<<< HEAD
void mainTicTacToe::on_playAsGuess_clicked()
{
    gameMode * selectMode = new gameMode ();
    selectMode->setModal(true);
    selectMode->exec();
=======

void mainTicTacToe::on_playAsGuest_clicked()
{
    //play as guest user
    //changing the ui setting to be guest vs player
    //or guest vs AI

    gameMode selectMode;
    selectMode.isGuess=true;
    selectMode.setModal(true);
    selectMode.exec();
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b
}
