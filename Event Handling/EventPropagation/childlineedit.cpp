#include "childlineedit.h"
#include <QDebug>
#include "parentlineedit.h"
#include <QKeyEvent>

ChildLineEdit::ChildLineEdit(QWidget *parent)
    : ParentLineEdit(parent)
{

}

void ChildLineEdit::keyPressEvent(QKeyEvent *event)
{
//    qDebug() << "ChildLineEdit keyPressEvent";
//    ParentLineEdit::keyPressEvent(event);

      qDebug() << "ChildLineEdit accepted: " << event->isAccepted();
      event->ignore();


      if(event->key()==Qt::Key_Delete)
      {
          qDebug() << "Pressed the Delete Key";
          clear();
      }
      else
      {
          ParentLineEdit::keyPressEvent(event);
      }
}
