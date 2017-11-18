#include "gamewidget.h"
#include "widget.h"

void Gluttonoussnake::SetFood()               //生成食物
{
    food.setX(rand()%COL);
    food.setY(rand()%ROW);
    if(obj->snake.contains(food)) //Snake改为obj
        SetFood();
    return;
}
