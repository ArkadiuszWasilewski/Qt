#include "MachineInterface.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MachineInterface window;

    
    //window.showFullScreen();
    window.showMaximized();
    return app.exec();
}
