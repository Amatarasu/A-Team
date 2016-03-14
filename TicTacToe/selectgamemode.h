#ifndef SELECTGAMEMODE_H
#define SELECTGAMEMODE_H

#include <QDialog>

namespace Ui {
class selectGameMode;
}

class selectGameMode : public QDialog
{
    Q_OBJECT

public:
    explicit selectGameMode(QWidget *parent = 0);
    ~selectGameMode();

private slots:

    void on_okButton_clicked();

    void on_BackButton_clicked();

private:
    Ui::selectGameMode *ui;
};

#endif // SELECTGAMEMODE_H
