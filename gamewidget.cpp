#include "gamewidget.h"
#include "widget.h"
#include <QDebug>

Gluttonoussnake::Gluttonoussnake(QWidget *parent):QWidget(parent)
{
     this->setWindowTitle("Gluttonous Snake");
     this->resize(ROW*BLOCK_SIZE,COL*BLOCK_SIZE);
     this->setAutoFillBackground(true);
     this->setWindowIcon(QIcon(":/background.jpg"));
     InitiGame();
}
 Gluttonoussnake::~Gluttonoussnake()
{
    delete this;
}
