#include "maintictactoe.h"
#include "ui_maintictactoe.h"
#include <QGraphicsScene>
#include <qmessagebox.h>
#include <loginscene.h>
#include <registrationscene.h>

mainTicTacToe::mainTicTacToe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainTicTacToe)
{
    ui->setupUi(this);
    //ui->setStyleSheet("C:/Users/cisse/Documents/qtlessons/TicTacToe/images/2000px-Tic_tac_toe.svg.png");
    //qApp->setStyleSheet("QWidget{background-image:url()}");

}

mainTicTacToe::~mainTicTacToe()
{
    delete ui;
}

void mainTicTacToe::on_helpButton_clicked()
{
   /* QWidget myHelp;
    myHelp.
    //QMessageBox :: this->actions()*/
    QMessageBox answer;
    answer.setText("click login to play as a player or guess to play as a guest");
    answer.exec();

}

void mainTicTacToe::on_quitButton_clicked()
{
    //this button is to quit the application

    //QApplication :: quit();

    QMessageBox :: StandardButton reply;
    reply = QMessageBox :: question(this, "Options", "Quit?",QMessageBox::Yes|QMessageBox::No);
    if(reply==QMessageBox::Yes)
    {
        QApplication :: quit();
    }
    else
    {
        //do nothing for now
        //game will quit

    }
}


void mainTicTacToe::on_loginButton_2_clicked()
{
    //play as a guest

}

void mainTicTacToe::on_loginButton_clicked()
{
    //this is the login button
    //now creating a new window or sceen to bring username or password

    loginScene loginscene;
    loginscene.setModal(true);
    loginscene.exec();
}

void mainTicTacToe::on_signUpButton_clicked()
{
    //this will bring the menu for signing up
    //this will have enter username
    //enter password
    //re-enter password
    //sign in button

    registrationScene registerUser;
    registerUser.setModal(true);
    registerUser.exec();
}
