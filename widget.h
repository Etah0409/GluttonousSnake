#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<QWidget>
#include<QIcon>
#include<QPalette>
#include<QBrush>
#include<QPixmap>
#include<QPushButton>
#include<QMessageBox>
#include<gamewidget.h>
#include<QStyleOption>
#include<QtGui>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    Gluttonoussnake *gamewindow;
 //   void paintEvent(QPaintEvent *event);
    void button_init();
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
