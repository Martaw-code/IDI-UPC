#include <QApplication>
#include "App2.h"

int main(int argc, char **argv) {
    QApplication app(argc,argv);
    App2 color;
    color.show();
    return app.exec();
}
