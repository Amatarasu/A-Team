#ifndef GAMEMODE_H
#define GAMEMODE_H
#include "allheadertoinclude.h"

namespace Ui
{
    class gameMode;
}

class gameMode : public QDialog
{
    Q_OBJECT

public:

    explicit gameMode(QWidget *parent = 0);
    ~gameMode();

private slots:

    void on_GameOptionMode_clicked();

private:
    Ui::gameMode *ui;
};

#endif // GAMEMODE_H
