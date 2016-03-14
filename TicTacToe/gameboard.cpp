#include "gameboard.h"
#include "ui_gameboard.h"
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QGraphicsView>


gameboard::gameboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gameboard)
{
    ui->setupUi(this);

}

void gameboard :: gameStart()
{

}

