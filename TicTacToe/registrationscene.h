#ifndef REGISTRATIONSCENE_H
#define REGISTRATIONSCENE_H
#include "maintictactoe.h"


#include <QDialog>
#include <QSql>

namespace Ui
{
    class registrationScene;
}

class registrationScene : public QDialog
{
    Q_OBJECT

public:
    explicit registrationScene(QWidget *parent = 0);
    ~registrationScene();

private slots:

    void on_signupButton_clicked(); //sign up button

    void on_registrationHelpButton_clicked(); //help button

private:
    Ui::registrationScene *ui;
};

#endif // REGISTRATIONSCENE_H
