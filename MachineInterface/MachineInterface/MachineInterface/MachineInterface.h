#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MachineInterface.h"

class MachineInterface : public QMainWindow
{
    Q_OBJECT

public:
    MachineInterface(QWidget *parent = nullptr);
    ~MachineInterface();
    
    
private:
    Ui::MachineInterfaceClass ui;
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_addTab_button_clicked();
};