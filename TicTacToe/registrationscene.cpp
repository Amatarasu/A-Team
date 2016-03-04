#include "registrationscene.h"
#include "ui_registrationscene.h"
#include <qmessagebox.h>

registrationScene::registrationScene(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrationScene)
{
    ui->setupUi(this);
}

registrationScene::~registrationScene()
{
    delete ui;
}

void registrationScene::on_pushButton_2_clicked()
{
    //this is the help button for the registration

    QMessageBox helpRegister;
    helpRegister.setText("Enter a valid username and password, confrim password and submit to register");
    helpRegister.exec();

}
