#ifndef MAINTICTACTOE_H
#define MAINTICTACTOE_H

#include <QMainWindow>

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

    void on_loginButton_2_clicked();

    void on_loginButton_clicked();

    void on_signUpButton_clicked();

private:
    Ui::mainTicTacToe *ui;
};

#endif // MAINTICTACTOE_H
