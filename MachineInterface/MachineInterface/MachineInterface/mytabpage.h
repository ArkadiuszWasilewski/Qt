#pragma once

#include <QMainWindow>
#include "ui_mytabpage.h"

class mytabpage : public QMainWindow
{
	Q_OBJECT

public:
	mytabpage(QWidget *parent = nullptr);
	~mytabpage();

private:
	Ui::mytabpageClass ui;
};
