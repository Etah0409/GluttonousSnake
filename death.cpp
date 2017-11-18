#include "gamewidget.h"
#include "widget.h"

bool Gluttonoussnake::Death()                 //判断蛇死活
{
   QList<QPoint> body=obj->snake;  //左右都需是Qlist<QPoint>类型
   body.removeFirst();//去掉头
    if(body.contains(obj->snake.front()))
        return true;
    else
        return false;
}
