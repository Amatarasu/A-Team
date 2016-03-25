#include "playergameoptions.h"
#include "ui_playergameoptions.h"
#include "gameboard.h"
#include <QMessageBox>

PlayerGameOptions::PlayerGameOptions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlayerGameOptions)
{
    ui->setupUi(this);
}

PlayerGameOptions::~PlayerGameOptions()
{
    delete ui;
}

void PlayerGameOptions::on_pushButton_clicked()
{
    //this function allows you to play the game as player one and player two
    if(ui->playerGameOption->currentIndex()== 0)
    {
        QMessageBox :: information(this,tr("Game Information"),tr("Choose between X and O"));
    }
    else if(ui->playerGameOption->currentIndex() == 1)
    {
        //starts the game with player 1 as x and player2 as x
        gameBoard * initBoard = new gameBoard();
        initBoard->gameStart();
        close();
    }
    else if(ui->playerGameOption->currentIndex() == 2)
    {
        //need to initiate the board to start with O first rather an X

        gameBoard * initBoard = new gameBoard();
        initBoard->settingTurn();
        initBoard->gameStart();
        close();
    }
    else
    {
        QMessageBox :: information(this,tr("Game Information"),tr("Choose between X and O"));
    }

}

void PlayerGameOptions::on_playerOptionHelpButton_clicked()
{
    //this is the help needed

    QMessageBox :: information(this,tr("help button"),tr("Choose to go either as X or O"));
}
