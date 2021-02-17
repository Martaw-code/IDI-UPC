#include <QApplication>
#include "App4.h"

int main(int argc, char **argv) {
    QApplication app(argc,argv);
    App4 eco;
    eco.show();
    return app.exec();
}
