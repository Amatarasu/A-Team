#include "selectgamemode.h"
#include "ui_selectgamemode.h"
#include "difficultylevel.h"
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

    QMessageBox::information(this,tr("GameMode"),tr("Please select a gamemode!"));
    }
    else{


    //opens this dialog once the ok button is clicked
    difficultyLevel selectLevel;
    selectLevel.setModal(true);
    selectLevel.exec();
    }
    close(); //closes the form again to be organized
}

void selectGameMode::on_BackButton_clicked()
{
    close(); //closes the window
}
