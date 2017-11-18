#include "gamewidget.h"
#include "widget.h"


void Gluttonoussnake::PauseContinueGame()
{ 
    if(state)
    {        
    state = 0;
    gettime->stop();
    QMessageBox message(QMessageBox::NoIcon, "pause", "ちょっと休憩してください!");
    message.setIconPixmap(QPixmap(":images/rest"));
    message.exec();
    }
    else
    {
     state = 1;
     gettime->start();
    }
}
