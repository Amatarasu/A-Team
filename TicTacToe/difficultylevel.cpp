#include "allheadertoinclude.h"
#include "ui_difficultylevel.h"

difficultyLevel::difficultyLevel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::difficultyLevel)
{
    ui->setupUi(this);
    ui->playGameButton->setEnabled(false);
    ui->logOutButton->setEnabled(false);
}

difficultyLevel::~difficultyLevel()
{
    delete ui;
}

void difficultyLevel::on_easyButton_clicked()
{
    //this is enabling the playGameButton
    if(ui->easyButton->isChecked())
        ui->playGameButton->setEnabled(true);
}

void difficultyLevel::on_mediumButton_clicked()
{
    //return 2; //for the meduim level of a.i.
    if (ui->mediumButton->isChecked())
        ui->playGameButton->setEnabled(true);
}

void difficultyLevel::on_hardButton_clicked()
{
    //return 3; //for the hard level of a.i.
    if(ui->hardButton->isChecked())
        ui->playGameButton->setEnabled(true);
}

void difficultyLevel::on_logOutButton_clicked()
{
    //this is the logout button

    QMessageBox logoutMessage;
    logoutMessage.setText("Thank you for playing "); //message for logout
    logoutMessage.exec();
    close();
}

void difficultyLevel::on_exitButton_clicked()
{
    //close form
    close();
}

void difficultyLevel::on_difficultyHelpButton_clicked()
{
    //this is the help button

    QMessageBox helpMessage;
    helpMessage.setText("Please choose Easy, Medium or hard and press play"); //message
    helpMessage.exec();
}

void difficultyLevel::on_playGameButton_clicked()
{
    //now this button will call the game mode based on what which is selected and play

    if(ui->hardButton->isChecked())
    {
		
		 QMessageBox msgBox;
		msgBox.setWindowTitle("woudl you want to go first or last");
		msgBox.setText("woudl you want to go first or last");
		msgBox.setStandardButtons(QMessageBox::Yes);
		msgBox.addButton(QMessageBox::No);
		msgBox.setDefaultButton(QMessageBox::Yes);
		 if(msgBox.exec() == QMessageBox::Yes)
		 {

			AiClass hardMode;
			hardMode.settingTurn(1);
			hardMode.settingAiLevel(3);
			hardMode.AiBoard();
		 }
		 else
		 {
			AiClass hardMode;
			hardMode.settingTurn(1);
			hardMode.settingAiLevel(3);
			hardMode.settingAiTurn();
			hardMode.AiBoard();
		 }
        //hardMode.hardAiMode();
        close();
    }
    else if(ui->mediumButton->isChecked())
    {
        AiClass mediumMode;
        mediumMode.settingTurn(1);
        mediumMode.settingAiLevel(2);
        mediumMode.AiBoard();
        close();
    }
    else
    {
        AiClass staringGame;
        staringGame.settingTurn(1);
        staringGame.settingAiLevel(1);
        staringGame.AiBoard();
        close();
    }
}
