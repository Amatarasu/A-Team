#include "gameoption.h"
#include "ui_gameoption.h"
#include "difficultylevel.h"
#include "aiclass.h"
#include <QMessageBox>

gameOption::gameOption(QWidget *parent) : QDialog(parent), ui(new Ui::gameOption)
{
    ui->setupUi(this);
}

gameOption::~gameOption()
{
    delete ui;
}

void gameOption::on_gameOptionOkay_clicked()
{
    //player vs a.i. is selected
    //choosing if a.i. initiates game
    //or player initiates game


    if (ui->choiceToGoFirst->currentIndex() == 0)
    {
        AiClass PlayerMode;
        PlayerMode.settingTurn(1);
        PlayerMode.settingAiLevel(0);
        PlayerMode.AiBoard();
        close();

    }
    else if (ui->choiceToGoFirst->currentIndex() == 1)
    {
        AiClass PlayerMode;
        PlayerMode.settingTurn(-1);
        PlayerMode.settingAiLevel(0);
        PlayerMode.AiBoard();
        close();
    }
    else
    {
        //exception
        QMessageBox::information(this,tr("GameMode"),tr("Please select a Game Mode!"));
    }
}
