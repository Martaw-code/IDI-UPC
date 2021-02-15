#include <QApplication> //incloure sempre aquesta llibreria
#include <QPushButton> //incloure sempre que volguem usar algun PushButton!


int main(int argc, char *argv[]) {
    //inicialitza el sistema de finestres i construeix un objecte amb els ar    guments argc i argv
    QApplication app(argc,argv);
    
    QPushButton hello("Hello Qt!",0);
    
    hello.resize(100,30);
    
    hello.show();
    /**
    si no cridem a exec(), el programa arribaria al final i conclouria
    ja que no hi hauria més codi a executar, és un bucle infinit
    */
    return app.exec();
}
