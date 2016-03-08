#include "loginscene.h"
#include "ui_loginscene.h"
#include <qmessagebox.h>
#include <QtSql>

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

void loginScene::on_loggingIn_clicked()
{
    //this is going to query the database to check if the user exist or no.

    QString userName, password;
    userName = ui->loginUsername->text();
    password = ui->loginUsername->text();
    QSqlDatabase db = QSqlDatabase :: addDatabase("QMYSQL", "my_sql_db");
    db.setHostName("localhost");
    db.setDatabaseName("tictactoe");
    db.setUserName("root");
    db.setPassword("Amatarasu76");
    bool connectionAttemps = db.open();
    if(!connectionAttemps)
    {
        //meaning connection could not be made.
        QMessageBox errorMessage;
        errorMessage.setText("failed to load");
        errorMessage.exec();
    }
    else
    {
        //successful connection, time to check if user exist;

        QSqlQuery myQuery;
        myQuery.prepare("SELECT `userName`, `password` FROM `players` WHERE userName =[value-1]");
        myQuery.bindValue(1,userName);
        int counter=0;
        myQuery.executedQuery();
        while(myQuery.next())
        {
            counter++;
        }
        if(counter ==1)
        {
            QMessageBox errorMessageLogin;
            errorMessageLogin.setText("duplicated username or password");
            errorMessageLogin.exec();
        }
        else
        {
            QMessageBox errorMessageLin;
            errorMessageLin.setText("duplicated Username or Password");
            errorMessageLin.exec();
        }
    }

}
