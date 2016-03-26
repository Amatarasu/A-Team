#ifndef LOGINSCENE_H
#define LOGINSCENE_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>

namespace Ui
{
    class loginScene;
}

class loginScene : public QDialog
{
    Q_OBJECT

public:
    explicit loginScene(QWidget *parent = 0);

    //now i am going this class as the database handler

    void updatingUserScore (QString username, int Score);
    ~loginScene();

private slots:

    void on_HelpLogin_clicked(); //help  for login button

    void on_loggingIn_clicked(); //login button

private:
    Ui::loginScene *ui;

};

#endif // LOGINSCENE_H
