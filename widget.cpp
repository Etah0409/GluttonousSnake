#include "widget.h"
#include "ui_widget.h"
#include "QMediaPlayer"
#define BUTTON_STYLESHEET(class_name,image_url) (#class_name"{border-image: url("#image_url")}"\
                   #class_name":hover{border-image: url("#image_url"_hover)}")

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    resize((ROW+2)*BLOCK_SIZE,(COL+2)*BLOCK_SIZE);//初始化界面大小
    this->setWindowIcon(QIcon(":/images/bk"));
    QPalette palette;
    palette.setBrush(QPalette::Background,QBrush(QPixmap(":/images/tbk")));
    this->setPalette(palette);
    ui->setupUi(this);  
    button_init();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::button_init()
{
    ui->pushButton_2->setStyleSheet(QString(BUTTON_STYLESHEET(QPushButton,:/images/start)));
    ui->pushButton->setStyleSheet(QString(BUTTON_STYLESHEET(QPushButton,:/images/exit)));
    ui->pushButton_3->setStyleSheet(QString(BUTTON_STYLESHEET(QPushButton,:/images/help)));
}

void Widget::on_pushButton_2_clicked() //start
{
    gamewindow=new Gluttonoussnake(this);
    gamewindow->show();
}

void Widget::on_pushButton_clicked()
{
      exit(0);
}

void Widget::on_pushButton_3_clicked()
{
    QMessageBox help(QMessageBox::NoIcon,"help","you are going to help her get the cake!  ↑→↓←help you to move.  if you want to pause, please press space.  You can press space again to continue your game!  がんばってください!" );
    help.setIconPixmap(QPixmap(":/images/head"));
    help.exec();
}
