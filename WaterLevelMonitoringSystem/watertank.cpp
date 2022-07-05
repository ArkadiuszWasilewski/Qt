#include "watertank.h"
#include <QPen>
#include <QPainter>
#include <QBrush>
#include <QWheelEvent>

WaterTank::WaterTank(QWidget *parent): QWidget(parent),
      waterHeight(50), timer(new QTimer(this))

{
    setSizePolicy(QSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum));
    timer->setInterval(200);
    connect(timer, &QTimer::timeout, [=](){
        waterHeight+=2;
        update();

        if(waterHeight<=150)
        {
            emit normal();
        }
        else if(waterHeight>=151 && waterHeight<=180)
        {
            emit warning();
        }
        else
        {
            emit danger();
        }
    });
    timer->start();



}

void WaterTank::paintEvent(QPaintEvent *event)
{
    QPen mPen;
    mPen.setWidth(3);
    mPen.setColor(Qt::black);

    QPainter painter(this);
    painter.setPen(mPen);
    painter.setBrush(Qt::gray);   // Fill color


    painter.drawRect(QRectF(0,0,230,300)); // background container

    painter.drawLine(10, 50, 10, 280);
    painter.drawLine(10, 280, 220, 280);
    painter.drawLine(220, 280, 220, 50);

    painter.setBrush(Qt::blue);
    painter.drawRect(QRectF(10, 280, 210, -waterHeight));

}

QSize WaterTank::sizeHint() const
{
    return QSize(230, 300);
}

void WaterTank::wheelEvent(QWheelEvent *event)
{
    if(event->delta()<0 && (waterHeight>10))
    {
        waterHeight -= 2;
        update();
    }
}
