#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <QDialog>

namespace Ui {
class gameboard;
}

class gameboard : public QDialog
{
    Q_OBJECT

public:
    explicit gameboard(QWidget *parent = 0);
    ~gameboard();

private slots:
    void on_gameboard_accepted();

private:
    Ui::gameboard *ui;
};

#endif // GAMEBOARD_H
