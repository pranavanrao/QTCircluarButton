#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QDebug>
#include <QPainter>
#include <QPaintEvent>

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();

    virtual void paintEvent(QPaintEvent *event) override;
};
#endif // MYWIDGET_H
