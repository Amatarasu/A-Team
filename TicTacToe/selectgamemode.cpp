#include "selectgamemode.h"
#include "ui_selectgamemode.h"
#include "difficultylevel.h"
#include "gameboard.h"
#include <QMessageBox>

selectGameMode::selectGameMode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::selectGameMode)
{
    ui->setupUi(this);
}

selectGameMode::~selectGameMode()
{
    delete ui;
}

void selectGameMode::on_okButton_clicked()
{
    if (ui->comboBox->currentIndex() == 0)
    {
        QMessageBox::information(this,tr("GameMode"),tr("Please select a Game Mode!"));
    }
    else if(ui->comboBox->currentIndex() == 1)
    {
        //once AI is selected, you need to choose difficulty level

        difficultyLevel selectLevel;
        selectLevel.setModal(true);
        selectLevel.exec();
        close();
    }
    else
    {
        close(); //closes the form again to be organized

        //now calling the game board

        gameBoard gameStarter;
        gameStarter.gameStart();

    }
}

void selectGameMode::on_BackButton_clicked()
{
    close(); //closes the window


}
