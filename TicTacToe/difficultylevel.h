#ifndef DIFFICULTYLEVEL_H
#define DIFFICULTYLEVEL_H

#include <QDialog>
#include "aiclass.h"

namespace Ui
{
class difficultyLevel;
}

class difficultyLevel : public QDialog
{
    Q_OBJECT

public:

    explicit difficultyLevel(QWidget *parent = 0);
    ~difficultyLevel();

private slots:
    //function protytpes
    void on_logOutButton_clicked(); //logout

    void on_exitButton_clicked(); //exit

    void on_difficultyHelpButton_clicked(); //help button

    void on_playGameButton_clicked(); //play game button

    void on_mediumButton_clicked(); //meduim level

    void on_hardButton_clicked(); //hard level

    void on_easyButton_clicked();

private:
    Ui::difficultyLevel *ui;
};

#endif // DIFFICULTYLEVEL_H
