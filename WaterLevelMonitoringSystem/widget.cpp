#include "widget.h"
#include "ui_widget.h"
#include "indicator.h"
#include "watertank.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    Indicator * indicator = new Indicator(this);
    WaterTank * waterTank = new WaterTank(this);

    connect(waterTank, &WaterTank::normal, indicator, &Indicator::activateNormal);
    connect(waterTank, &WaterTank::warning, indicator, &Indicator::activateWarning);
    connect(waterTank, &WaterTank::danger, indicator, &Indicator::activateDanger);

    ui->horizontalLayout->addWidget(waterTank);
    ui->horizontalLayout->addWidget(indicator);

}

Widget::~Widget()
{
    delete ui;
}

