#include "gameoption.h"
#include "ui_gameoption.h"
#include "gameboard.h"
#include "difficultylevel.h"
#include <QMessageBox>

gameOption::gameOption(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gameOption)
{
    ui->setupUi(this);
}

gameOption::~gameOption()
{
    delete ui;
}

void gameOption::on_gameOptionOkay_clicked()
{
    if (ui->choiceToGoFirst->currentIndex() == 0)
    {
        gameBoard * initBoard = new gameBoard();
        initBoard->gameStart();
        close();

    }
    else if (ui->choiceToGoFirst->currentIndex() == 1)
    {
        gameBoard * playerVsAi = new gameBoard();
        playerVsAi->gameStart();
        close();
    }
<<<<<<< HEAD
    else if(ui->choiceToGoFirst->currentIndex() == 2)
    {
        QMessageBox::information(this,tr("GameMode"),tr("Game mode 2 is chosen"));
    }
    else if(ui->choiceToGoFirst->currentIndex() == 3)
    {
       QMessageBox::information(this,tr("GameMode"),tr("Game mode 3 is chosen"));
    }
=======
>>>>>>> e37e48f6d16ef746b9f8d6fdcf77088a89da936d
    else
    {
        QMessageBox::information(this,tr("GameMode"),tr("Please select a Game Mode!"));
    }
}
