#include "parentlineedit.h"
#include <QDebug>
#include <QKeyEvent>

ParentLineEdit::ParentLineEdit(QWidget *parent)
    : QLineEdit(parent)
{

}

void ParentLineEdit::keyPressEvent(QKeyEvent *event)
{
    qDebug()<< "ParentLineEdit keyPressEvent";
    qDebug() << "ParentLineEvent accepted: " << event->isAccepted();
    QLineEdit::keyPressEvent(event);
}
