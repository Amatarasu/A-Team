#ifndef REGISTRATIONSCENE_H
#define REGISTRATIONSCENE_H

#include <QDialog>

namespace Ui {
class registrationScene;
}

class registrationScene : public QDialog
{
    Q_OBJECT

public:
    explicit registrationScene(QWidget *parent = 0);
    ~registrationScene();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::registrationScene *ui;
};

#endif // REGISTRATIONSCENE_H
