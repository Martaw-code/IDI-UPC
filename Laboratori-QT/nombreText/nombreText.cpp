#include <QApplication>
#include "App3.h"

int main(int argc, char **argv) {
    QApplication app(argc,argv);
    App3 nt;
    nt.show();
    return app.exec();
}
