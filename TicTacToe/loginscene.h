#ifndef LOGINSCENE_H
#define LOGINSCENE_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>

namespace Ui {
class loginScene;
}

class loginScene : public QDialog
{
    Q_OBJECT

public:
    explicit loginScene(QWidget *parent = 0);
    ~loginScene();

private slots:

    void on_HelpLogin_clicked();

    void on_loggingIn_clicked();

private:
    Ui::loginScene *ui;

};

#endif // LOGINSCENE_H
