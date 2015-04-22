#include "entete.h"

int main(int argc, char* argv[]){
    QApplication app(argc, argv);

    // on commence par lancer l'application

    QPushButton* nbouton = new QPushButton("Quitter");

    // on crée ensuite un bouton

    QWidget::QObject::connect(nbouton, SIGNAL(clicked()),qApp,SLOT(quit()));

    // on associe le signal "click" sur le bouton au slot "quit"

    nbouton->show();

    // on affiche le bouton

    //si on crée un deuxième bouton et qu'on fait show(), cela affiche une nouvelle fenêtre.

    return app.exec();
}
