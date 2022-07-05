#ifndef SHAPECANVAS_H
#define SHAPECANVAS_H

#include <QWidget>
#include <QPen>
#include <QBrush>
//#include <QSize>

class ShapeCanvas : public QWidget
{
    Q_OBJECT
public:
    enum Shape {Polygon, Rect, RoundedRect,
               Ellipse, Pie, Chord, Text, Pixmap};
    explicit ShapeCanvas(QWidget *parent = nullptr);

    QSize minimumSizeHint() const override;
    QSize sizeHint() const override;

    Shape getShape() const;
    void setShape(Shape newShape);

    const QPen &getPen() const;
    void setPen(const QPen &newPen);

    const QBrush &getBrush() const;
    void setBrush(const QBrush &newBrush);

    bool getAntialiased() const;
    void setAntialiased(bool newAntialiased);

    bool getTransformed() const;
    void setTransformed(bool newTransformed);

signals:


    // QWidget interface
protected:
    void paintEvent(QPaintEvent *event) override;

private:
    Shape shape;
    QPen pen;
    QBrush brush;
    bool antialiased;
    bool transformed;
    QPixmap pixmap;

};

#endif // SHAPECANVAS_H
