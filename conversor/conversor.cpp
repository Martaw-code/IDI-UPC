#include <QApplication>
#include "App6.h"

int main(int argc, char **argv) {
    QApplication app(argc,argv);
    App6 conv;
    conv.show();
    return app.exec();
}
