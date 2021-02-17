#include <QApplication>
#include "App5.h"

int main(int argc, char **argv) {
    QApplication app(argc,argv);
    App5 dial;
    dial.show();
    return app.exec();
}
