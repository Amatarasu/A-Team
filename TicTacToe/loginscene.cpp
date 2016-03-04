#include "loginscene.h"
#include "ui_loginscene.h"
#include <qmessagebox.h>

loginScene::loginScene(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginScene)
{
    ui->setupUi(this);
}

loginScene::~loginScene()
{
    delete ui;
}

void loginScene::on_backToMain_clicked()
{
    //this will close the login scene and bring you back to the main menu

    QApplication :: quit ();
}

void loginScene::on_HelpLogin_clicked()
{
    //this will show you how to login or quit the login screen

    QMessageBox answer;
    answer.setText("Enter username and password click login or click cancel to go back");
    answer.exec();
}
