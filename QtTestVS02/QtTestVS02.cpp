#include "QtTestVS02.h"

QtTestVS02::QtTestVS02(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    QObject::connect(
        ui.addWidget_button, &QPushButton::clicked,
        this, &QtTestVS02::onAddWidget);

}

QtTestVS02::~QtTestVS02()
{} 

void QtTestVS02::onAddWidget()
{
    QVBoxLayout*layout = qobject_cast<QVBoxLayout*>(ui.widgets_frame->layout());

    QString buttonText = tr("Click to remove: #%1").arg(layout->count());
    QPushButton* button = new QPushButton(buttonText, ui.widgets_frame);
    layout->insertWidget(0, button);

    QObject::connect(
        button, &QPushButton::clicked,
        this, &QtTestVS02::onRemoveWidget);
}

void QtTestVS02::onRemoveWidget()
{
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    delete button;

}