#include "QtTestVS02.h"
#include <QtWidgets/QApplication>
#include <QFile>
#include <QString>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    
    // set the app style sheet
    QFile styleSheetFile("./Adaptic.qss");
    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleSheetFile.readAll());
    app.setStyleSheet(styleSheet);

    
    QtTestVS02 window;
    window.show();
    return app.exec();
}
