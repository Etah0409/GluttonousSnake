#include "gamewidget.h"
#include "widget.h"

void Gluttonoussnake::OverGame()
{
    QMessageBox message(QMessageBox::NoIcon,"overgame","あほう!");
    message.setIconPixmap(QPixmap(":images/over"));
    message.exec();
    gettime->stop();
    this->close();
    return;
}
