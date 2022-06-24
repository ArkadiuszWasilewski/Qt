#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtTestVS02.h"

class QtTestVS02 : public QMainWindow
{
    Q_OBJECT

public:
    QtTestVS02(QWidget *parent = nullptr);
    ~QtTestVS02();

    void onAddWidget(); //user clicking on an "add widget" button
    void onRemoveWidget(); //user clicking on a "remove" widget button

private:
    Ui::QtTestVS02Class ui;
};
