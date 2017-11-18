#include "gamewidget.h"
#include "widget.h"
#include "QDebug"
#include <QMediaPlayer>
#include <QUrl>



void Gluttonoussnake::InitiGame()             //初始化游戏
{
    QPalette palette;

    palette.setBrush(QPalette::Background,QBrush(QPixmap(":/images/gbk")));

    this->setPalette(palette);

    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile(":/images/s.mp3")); //song_link为音乐的绝对或相对路径 格式不限
    player->setVolume(100);
    player->play();

    difficulty=0.9;
    obj=new Snake;
    obj->lenth=5;                        //初始化蛇长度
    obj->dir=LEFT;                      //初始化蛇方向
    for(int i=0;i<5;i++)               //初始化蛇的坐标
        obj->snake.append(QPoint(i,0));
    srand(time(0));                     //初始化游戏随机数
    SetFood();                          //放置食物
    sore=0;                             //初始化分数
    this->setFocusPolicy(Qt::StrongFocus);//注意设置焦点
    gettime=new QTimer(this);
    connect(gettime,SIGNAL(timeout()),this,SLOT(NewSnake()));//连接信号和反应
    gettime->start(TIME_INTERVAL);       //时间开始
    return;
}

