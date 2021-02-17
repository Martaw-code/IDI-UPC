#include <QApplication>
#include "App1.h"

int main(int argc, char **argv) {
    QApplication app(argc,argv);
    App1 rellotge;
    rellotge.show();
    return app.exec();
}
