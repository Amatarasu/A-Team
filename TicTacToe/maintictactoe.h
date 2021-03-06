#ifndef MAINTICTACTOE_H
#define MAINTICTACTOE_H
#include "allheadertoinclude.h"
#include "ui_maintictactoe.h"

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
    void on_helpButton_clicked(); //help button

    void on_quitButton_clicked(); //quit button

    void on_loginButton_clicked(); //login button

    void on_signUpButton_clicked(); //sign up button

    void on_passwordResetButton_clicked(); //password reset button

    void on_playAsGuest_clicked();

    void btnStat_clicked();

    void on_btnStat_clicked();

private:
    Ui::mainTicTacToe *ui;


};

#endif // MAINTICTACTOE_H
