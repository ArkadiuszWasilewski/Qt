#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "shapecanvas.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_shapeCombobox_activated(int index);

    void on_penWidth_valueChanged(int arg1);

    void on_penStyleCombobox_activated(int index);

    void on_penCapCombobox_activated(int index);

    void on_penJoinCombobox_activated(int index);

    void on_brushStyleCombobox_activated(int index);

    void on_antialiasingCheckbox_toggled(bool checked);

    void on_transformCheckbox_toggled(bool checked);

    void penChanged();
    void brushChanged();

private:
    Ui::Widget *ui;
    ShapeCanvas * canvas;
};
#endif // WIDGET_H
