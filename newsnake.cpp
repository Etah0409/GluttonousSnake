#include "gamewidget.h"
#include "widget.h"
#include "QDebug"

void Gluttonoussnake::NewSnake()              //更新蛇的坐标
{   QPoint p;
    p.setX(obj->snake.front().rx());
    p.setY(obj->snake.front().ry());    
    obj->snake.prepend(p);
    switch(obj->dir)
    {
        case UP:
            obj->snake.front().ry()-=1;
        break;
        case DOWN:
            obj->snake.front().ry()+=1;
        break;
        case LEFT:
            obj->snake.front().rx()-=1;
        break;
        case RIGHT:
           obj->snake.front().rx()+=1;
        break;
    }
    if(obj->snake.contains(food))//如果吃到食物
    {
        obj->lenth++;
        sore++;
        SetFood();
        gettime->start(TIME_INTERVAL*difficulty);
        difficulty=difficulty*0.9;
    }
    else                                   //没有吃到食物
    {
        obj->snake.removeLast();
    }
    if(Death())
    {
        OverGame();
        return;
    }
    update();
    return;
}
