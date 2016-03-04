#ifndef LOGINSCENE_H
#define LOGINSCENE_H

#include <QDialog>

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
    void on_backToMain_clicked();

    void on_HelpLogin_clicked();

private:
    Ui::loginScene *ui;
};

#endif // LOGINSCENE_H
