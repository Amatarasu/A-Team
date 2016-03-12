#include "playervsaimenu.h"
#include "ui_playervsaimenu.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_playButton_clicked()
{
    if(ui->easyButton->isChecked())
    {
    //code for easy ai will go here
    }
    else if (ui->meduimButton->isCheckable())
    {
    //code for medum ai will go here
    }
    else if(ui->hardButton->isCheckable())
    {
    // code for very difficult ai will go here
    }
}


void MainWindow::on_ExitButton_clicked()
{
     QApplication::quit(); //quits the program
}

void MainWindow::on_HelpButon_clicked()
{

}




