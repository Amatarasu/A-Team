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

gameboard::~gameboard()
{
    delete ui;
}

void gameboard::on_gameboard_accepted()
{
    QGraphicsScene * scene = new QGraphicsScene();
    QGraphicsRectItem * rect = new QGraphicsRectItem();
    rect->setRect(0,0,100,100);
    //add the item to the scene
    scene->addItem(rect);

    //adding a view

    QGraphicsView * view = new QGraphicsView(scene);
    view->show();
}
