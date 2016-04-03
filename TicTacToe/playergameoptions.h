#ifndef PLAYERGAMEOPTIONS_H
#define PLAYERGAMEOPTIONS_H

#include <QDialog>

namespace Ui {
class PlayerGameOptions;
}

class PlayerGameOptions : public QDialog
{
    Q_OBJECT

public:
    explicit PlayerGameOptions(QWidget *parent = 0);
    ~PlayerGameOptions();

private slots:
    void on_pushButton_clicked(); //conformation button

    void on_playerOptionHelpButton_clicked(); //help button

private:
    Ui::PlayerGameOptions *ui;
};

#endif // PLAYERGAMEOPTIONS_H
