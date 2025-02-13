// main.cpp
#include <QApplication>
#include "uI.h"

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    UI mainWindow;
    mainWindow.show();

    return app.exec();
}