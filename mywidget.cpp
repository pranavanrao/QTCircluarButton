#include "mywidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{}

MyWidget::~MyWidget() {}

void MyWidget::paintEvent(QPaintEvent *event)
{
    qDebug() << "This is called paint" << Qt::endl;
    QPainter paint(this);
    paint.setPen(Qt::blue);
    paint.setBrush(Qt::yellow);

    paint.drawEllipse(10,10,100,100);
    paint.drawRect(100,100,100,100);
}
