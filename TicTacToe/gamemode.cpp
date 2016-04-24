#include "allheadertoinclude.h"
#include "ui_gamemode.h"


gameMode::gameMode(QWidget *parent) :  QDialog(parent), ui(new Ui::gameMode)
{
    ui->setupUi(this);
}

gameMode::~gameMode() //destructor
{
    delete ui;
}


void gameMode::on_GameOptionMode_clicked()
{
    //this is going to determine either player vs player
    //or player vs AI

    //using a combobox to select choice
    //ui->GamePlayMode->itemIcon(2);
    if(ui->GamePlayMode->currentIndex() == 0)
    {
        QMessageBox :: information(this,tr("Make a choice"),tr("Please select player vs player or Player vs A.I"));
    }
    else if(ui->GamePlayMode->currentIndex() == 1)
    {
      //calls the player vs player function

        PlayerGameOptions playerVsPlayer;
        playerVsPlayer.setModal(true);
        playerVsPlayer.exec();
        close();
    }
    else if (ui->GamePlayMode->currentIndex() == 2)
    {
        //for player vs a.i.
        //prompts user for difficulty of a.i.

        difficultyLevel myLevel;
        myLevel.setModal(true);
        myLevel.exec();
        close();
    }
    else
    {
        //an exception handler for combobox
        QMessageBox :: information(this,tr("Make a choice"),tr("Please select player vs player or Player vs A.I"));
    }
}
