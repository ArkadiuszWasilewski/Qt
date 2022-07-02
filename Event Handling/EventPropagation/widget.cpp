#include "widget.h"
#include "ui_widget.h"
#include "childbutton.h"
#include "childlineedit.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ChildButton * button = new ChildButton(this); //creating instance of class
    button->setText("ChildButton");
    connect(button,&ChildButton::clicked,[=](){  //lambda function?!
        qDebug() << "Button clicked!";

    });

    ChildLineEdit * lineEdit = new ChildLineEdit(this);

    ui->verticalLayout->addWidget(button);
    ui->verticalLayout->addWidget(lineEdit);
}

Widget::~Widget()
{
    delete ui;
}

