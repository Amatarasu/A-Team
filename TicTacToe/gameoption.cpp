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
    else
    {
        QMessageBox::information(this,tr("GameMode"),tr("Please select a Game Mode!"));
    }
}
