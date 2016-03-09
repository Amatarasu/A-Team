#ifndef MAINTICTACTOE_H
#define MAINTICTACTOE_H

#include <QMainWindow>
#include <QDebug>
#include <QSql>

namespace Ui {
class mainTicTacToe;
}

class mainTicTacToe : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainTicTacToe(QWidget *parent = 0);
    ~mainTicTacToe();

private slots:
    void on_helpButton_clicked();

    void on_quitButton_clicked();

    void on_loginButton_clicked();

    void on_signUpButton_clicked();

    void on_playAsGuess_clicked();

private:
    Ui::mainTicTacToe *ui;
};
class databaseFunctionalities : public mainTicTacToe
{
    //this class has the main functionalities of the database for all the database
    //functions such as playerLogin, playerUpdate, signupPlayer

    //now functionalities to mess with the database
    //string PlayerLogin (string);

    public:

    QString SignUpPlayer (QString);

};

#endif // MAINTICTACTOE_H
