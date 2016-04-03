#ifndef GAMEOPTION_H
#define GAMEOPTION_H

#include <QDialog>

namespace Ui
{
    class gameOption;
}

class gameOption : public QDialog
{
    Q_OBJECT

public:

    explicit gameOption(QWidget *parent = 0);
    ~gameOption();

private slots:

    void on_gameOptionOkay_clicked(); //when ok button is clicked

private:
    Ui::gameOption *ui;
};

#endif // GAMEOPTION_H
