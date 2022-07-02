#include "application.h"
#include <QDebug>

Application::Application(int &argc, char**argv):QApplication(argc, argv)
{

}

bool Application::notify(QObject * dest, QEvent * event)
{

    qDebug() << "Application : notify called";

    return QApplication::notify(dest, event);
}
