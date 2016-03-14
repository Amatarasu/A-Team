#include "difficultylevel.h"
#include "ui_difficultylevel.h"
#include <QMessageBox>

difficultyLevel::difficultyLevel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::difficultyLevel)
{
    ui->setupUi(this);


}

difficultyLevel::~difficultyLevel()
{
    delete ui;
}

void difficultyLevel::on_logOutButton_clicked()
{
    //this is the logout button

    QMessageBox logoutMessage;
    logoutMessage.setText("Thank you for playing ");
    logoutMessage.exec();
}

void difficultyLevel::on_exitButton_clicked()
{
    //this is to exit the application
<<<<<<< HEAD
=======

<<<<<<< HEAD
=======
    //QApplication :: quit();

<<<<<<< HEAD
>>>>>>> a119b5feed1644dbedc187126450167374a9501e
=======
    //QApplication :: quit();

>>>>>>> a119b5feed1644dbedc187126450167374a9501e
>>>>>>> master
    close();
}

void difficultyLevel::on_difficultyHelpButton_clicked()
{
    //this is the help button

    QMessageBox helpMessage;
    helpMessage.setText("Please choose Easy, Medium or hard and press play");
    helpMessage.exec();
}

void difficultyLevel::on_playGameButton_clicked()
{
    //this play method will bring the UI game and initiate a choice
    //somone has to select to go first
}
