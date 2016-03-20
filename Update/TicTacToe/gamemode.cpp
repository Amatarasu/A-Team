#include "gamemode.h"
#include "ui_gamemode.h"
#include "gameoption.h"
#include "difficultylevel.h"
#include <QMessageBox>

gameMode::gameMode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gameMode)
{
    ui->setupUi(this);
}

gameMode::~gameMode()
{
    delete ui;
}

void gameMode::on_GameOptionMode_clicked()
{
    //this is going to determine either player vs player
    //or player vs AI

    if(ui->GamePlayMode->currentIndex() == 0)
    {
        QMessageBox :: information(this,tr("make a choice"),tr("Please select player vs player or Player vs A.I"));
    }
    else if(ui->GamePlayMode->currentIndex() == 1)
    {
        //do something

        gameOption * myOptions = new gameOption();
        myOptions->setModal(true);
        myOptions->exec();
        close();
    }
    else if (ui->GamePlayMode->currentIndex() == 2)
    {
        difficultyLevel * myLevel = new difficultyLevel();
        myLevel->setModal(true);
        myLevel->exec();
        close();
    }
    else
    {
        QMessageBox :: information(this,tr("make a choice"),tr("Please select player vs player or Player vs A.I"));
    }
}
