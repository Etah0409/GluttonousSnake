#ifndef GAMEWIDGET
#define GAMEWIDGET

#include <QMainWindow>
#include <QPaintEvent>
#include <QKeyEvent>
#include <QIcon>
#include <QLabel>
#include <QPoint>
#include <QList>
#include <QTimer>
#include <QMessageBox>
#include <QPainter>
#include <iostream>
#include <QPushButton>
#include <time.h>
#include <gamewidget.h>
#include <QPalette>
#include <QImage>
#include <QtGui>

#define BLOCK_SIZE 36    //方格大小
#define MARGIN 6         //边界宽度
#define ROW 12           //长 方格个数
#define COL 12              //宽 方格个数
#define TIME_INTERVAL 500

enum Direction              //方向枚举
{UP,DOWN,LEFT,RIGHT};

class Snake
{
    friend class Gluttonoussnake;  //双向友元
    protected:
    int lenth;
    Direction dir;
    QList<QPoint> snake;
};

class Gluttonoussnake : public QWidget
{
    Q_OBJECT
    friend class Snake;
public:
    explicit Gluttonoussnake(QWidget *parent = 0);
    ~Gluttonoussnake();
    void paintEvent(QPaintEvent *event);
    void keyPressEvent(QKeyEvent *event);
    bool Death();
    void SetFood();
    void OverGame();
   void PauseContinueGame();
    void JudgeState();
       QTimer *gettime;
     void InitiGame();
private slots:
     void NewSnake();
private:
    QPoint food;
    Snake *obj;
    int sore;
    float difficulty;
    QLabel *scorelabel;
    QLabel *scorelabelnum;
    bool state;
};

#endif // GAMEWIDGET

