#ifndef PLAYERVSAIMENU_H
#define PLAYERVSAIMENU_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_playButton_clicked();


    void on_ExitButton_clicked();

    void on_HelpButon_clicked();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
