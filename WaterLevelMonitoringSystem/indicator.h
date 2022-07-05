#ifndef INDICATOR_H
#define INDICATOR_H

#include <QWidget>
#include <QTimer>

class Indicator : public QWidget
{
    Q_OBJECT
public:
    explicit Indicator(QWidget *parent = nullptr);
    QSize sizeHint() const override;
signals:

public slots:
    void activateNormal();
    void activateWarning();
    void activateDanger();


protected:
    void paintEvent(QPaintEvent *event) override;


private:
    void toggleLights();
    bool greenActive;
    bool redActive;
    bool yellowActive;

    bool lightsOn;

    QTimer * timer;

};

#endif // INDICATOR_H
