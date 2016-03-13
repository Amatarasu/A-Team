#ifndef DIFFICULTYLEVEL_H
#define DIFFICULTYLEVEL_H

#include <QDialog>

namespace Ui {
class difficultyLevel;
}

class difficultyLevel : public QDialog
{
    Q_OBJECT

public:
    explicit difficultyLevel(QWidget *parent = 0);
    ~difficultyLevel();

private slots:
    void on_logOutButton_clicked();

    void on_exitButton_clicked();

    void on_difficultyHelpButton_clicked();

    void on_playGameButton_clicked();

private:
    Ui::difficultyLevel *ui;
};

#endif // DIFFICULTYLEVEL_H
