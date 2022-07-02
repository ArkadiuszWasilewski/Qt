#include "MachineInterface.h"
#include <QtWidgets>
#include <qmessagebox.h>
#include <qdebug.h>
#include "mytabpage.h"

MachineInterface::MachineInterface(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    connect(ui.pushButton, &QPushButton::clicked,
            this, &MachineInterface::on_pushButton_clicked);

    connect(ui.horizontalSlider, &QSlider::valueChanged,
            ui.progressBar, &QProgressBar::setValue);

    connect(ui.pushButton_2, &QPushButton::clicked,
        this, &MachineInterface::on_pushButton_2_clicked);

    connect(ui.addTab_button, &QPushButton::clicked,
        this, &MachineInterface::on_addTab_button_clicked);

}

MachineInterface::~MachineInterface()
{}
void MachineInterface::on_pushButton_clicked()
{
    ui.label->setText("Button is clicked!");
}

void MachineInterface::on_pushButton_2_clicked()
{
    //QMessageBox::about(this, "My Title", "This is my custom message!");

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Exit", "Do you want to exit to desktop", 
                                  QMessageBox::Yes | QMessageBox::No);

    if(reply == QMessageBox::Yes)
    {
        QApplication::quit();
    }
    else
    {
       qDebug() << "User clicked No.";
    }
}

void MachineInterface::on_addTab_button_clicked()
{
    ui.tabWidget->addTab(new mytabpage(), QString("Tab %0").arg(ui.tabWidget->count() + 1));
    ui.tabWidget->setCurrentIndex(ui.tabWidget->count() - 1);
}