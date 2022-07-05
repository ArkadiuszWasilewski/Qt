#include "indicator.h"
#include <QPainter>
#include <QPen>
#include <QBrush>

Indicator::Indicator(QWidget *parent): QWidget(parent),
    greenActive(false),             //Lista inicjalizacyjna!
    redActive(false),
    yellowActive(false),
    lightsOn(false)

{
    setSizePolicy(QSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum));

    activateDanger();

    timer = new QTimer(this);
    timer->setInterval(300);

    connect(timer, &QTimer::timeout,[=](){
        toggleLights();
    });
    timer->start();
}

void Indicator::paintEvent(QPaintEvent *event)
{
    QPen mPen;
    mPen.setWidth(3);
    mPen.setColor(Qt::black);

    QPainter painter(this);
    painter.setPen(mPen);
    painter.setBrush(Qt::gray);   // Fill color


    painter.drawRect(QRectF(0,0,120,330));


    if(redActive)
    {
        painter.setBrush((lightsOn==true) ? Qt::red : Qt::black);
        painter.drawEllipse(10,10,100,100);

        painter.setBrush(Qt::black);
        painter.drawEllipse(10,115,100,100);

        painter.setBrush(Qt::black);
        painter.drawEllipse(10,220,100,100);
    }
    else if(yellowActive)
    {
        painter.setBrush(Qt::black);
        painter.drawEllipse(10,10,100,100);

        painter.setBrush((lightsOn==true) ? Qt::yellow : Qt::black);
        painter.drawEllipse(10,115,100,100);

        painter.setBrush(Qt::black);
        painter.drawEllipse(10,220,100,100);
    }
    else if(greenActive)
    {
        painter.setBrush(Qt::black);
        painter.drawEllipse(10,10,100,100);

        painter.setBrush(Qt::black);
        painter.drawEllipse(10,115,100,100);

        painter.setBrush((lightsOn==true) ? Qt::green : Qt::black);
        painter.drawEllipse(10,220,100,100);
    }


}

QSize Indicator::sizeHint() const
{
    return QSize(120, 350);
}

void Indicator::activateNormal()
{
    redActive = false;
    yellowActive = false;
    greenActive = true;
}

void Indicator::activateWarning()
{
    redActive = false;
    yellowActive = true;
    greenActive = false;
}

void Indicator::activateDanger()
{
    redActive = true;
    yellowActive = false;
    greenActive = false;
}

void Indicator::toggleLights()
{
    if(!lightsOn)
    {
        lightsOn=true;
    }
    else
    {
        lightsOn=false;
    }
    update();   // update for paint event to be called
}
