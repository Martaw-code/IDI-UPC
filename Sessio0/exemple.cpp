#include <QApplication> //incloure sempre aquesta llibreria
#include <QPushButton> //incloure sempre que vulguem usar algun PushButton!
//incloure classes del widgets que volem fer servir en la nostra app

int main(int argc, char *argv[]) {
    //inicialitza el sistema de finestres i construeix un objecte amb els
    //arguments argc i argv(aplicació que conté la interfície)
    QApplication app(argc,argv);
    //button que es dirà "Hello Qt!"
    QPushButton hello("Hello Qt!",0);
    //determinar la mida del button
    hello.resize(100,30);
    //mostrem el botó
    hello.show();
    /**
    si no cridem a exec(), el programa arribaria al final i conclouria
    ja que no hi hauria més codi a executar, és un bucle infinit
    per tant executem l'app creada i retorna el valor que genera en acabar
    */
    return app.exec();
}
