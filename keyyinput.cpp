#include "gamewidget.h"
#include "widget.h"
#include "QDebug"

void Gluttonoussnake::keyPressEvent(QKeyEvent *event)    //判断在一定输入时蛇的走向和暂停开始,避免屏蔽原obj改为ob
{
    qDebug()<<event->key();
    switch(event->key())
    {
        case Qt::Key_Up:
            if(obj->dir!=DOWN)
                obj->dir=UP;
            break;
        case Qt::Key_Down:
            if(obj->dir!=UP)
                obj->dir=DOWN;
            break;
        case Qt::Key_Left:
            if(obj->dir!=RIGHT)
                obj->dir=LEFT;
            break;
        case Qt::Key_Right:
            if(obj->dir!=LEFT)
                obj->dir=RIGHT;
            break;
        case Qt::Key_Space:             //暂停开始游戏
            PauseContinueGame();
            break;
        default:
            break;
    }
    return;
}
