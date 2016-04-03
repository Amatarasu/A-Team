#ifndef GAMEOPTION_H
#define GAMEOPTION_H
#include "gameboard.h"
#include <QDialog>

namespace Ui
{
    class gameOption;
}

class gameOption : public QDialog
{
    Q_OBJECT

public:
    //static gameBoard * initBoard;

    explicit gameOption(QWidget *parent = 0);
    ~gameOption();

private slots:

    void on_gameOptionOkay_clicked(); //when ok button is clicked

private:
    Ui::gameOption *ui;
};

#endif // GAMEOPTION_H
