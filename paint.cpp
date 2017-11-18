#include "gamewidget.h"
#include "widget.h"
#include "QDebug"

void Gluttonoussnake::paintEvent(QPaintEvent *event)       //绘制蛇和界面
{
   QPainter painter(this);
      this->resize(1000,1000);
     painter.setPen(Qt::white);
  for(int x = 0; x <COL; x++) {
        for(int y = 0; y < ROW; y++) {
            painter.drawRect(BLOCK_SIZE*x, y*BLOCK_SIZE,BLOCK_SIZE,BLOCK_SIZE);
        }
      }          //格子
//*************************************************************
   painter.setPen(QPen(QColor(0, 160, 230), 5));
   painter.setBrush(Qt::white);
   painter.drawRect(430,0,105,455);                 //画外框


   QFont font;
    font.setFamily("Microsoft YaHei");              //设计字体  雅黑
    font.setPointSize(15);                          //         15号
    //font.setItalic(true);                         //         斜体
   painter.setFont(font);
   painter.drawText(455,60,"分数");                  //  写分数
   painter.setPen(Qt::black);
   painter.drawText(470,100,QString::number(sore));  //写分数

   QPixmap pix1;
   pix1.load(":/images/head");
   painter.drawPixmap(375,290,220,200,pix1);

//**************************************************************
    for(int i=0;i<obj->lenth;i++)
    {//绘制蛇身
        switch(obj->snake[i].rx())
        {
         case(-1):obj->snake[i].rx() = COL - 1;
            break;
         case(COL):obj->snake[i].rx() = 0;
            break;
        }
        switch(obj->snake[i].ry())
        {
         case(-1):obj->snake[i].ry() = ROW - 1;
            break;
         case(ROW):obj->snake[i].ry() = 0;
            break;
        }
        if(i==0)
      painter.drawImage(QRectF(obj->snake[i].rx()*BLOCK_SIZE, obj->snake[i].ry()*BLOCK_SIZE, BLOCK_SIZE,BLOCK_SIZE) , QImage(":/images/head"));
        else
        {
            painter.drawImage(QRectF(obj->snake[i].rx()*BLOCK_SIZE, obj->snake[i].ry()*BLOCK_SIZE,BLOCK_SIZE,BLOCK_SIZE) , QImage(":/images/star"));

        }
    }
    painter.drawImage(QRectF(food.rx()*BLOCK_SIZE,food.ry()*BLOCK_SIZE,BLOCK_SIZE,BLOCK_SIZE),QImage(":/images/food.png"));   //绘制食物


    return;
}
