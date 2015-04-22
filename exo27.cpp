#include "entete.h"

int main(int argc, char* argv[]){
    QApplication app(argc, argv);

    // on commence par lancer l'application

    QPushButton* nbouton = new QPushButton("Quitter");

    // on crée ensuite un bouton

    QWidget::QObject::connect(nbouton, SIGNAL(clicked()),qApp,SLOT(quit()));

    // Question 3 : on associe le signal "click" sur le bouton au slot "quit"

    nbouton->show();

    // Question 2 : on affiche le bouton. show sert à générer une fenêtre composée
    // du widget qui appelle la méthode.

    QPushButton* nbouton2 = new QPushButton("Quitter");
    nbouton2->show();

    // Question 4 : si on crée un deuxième bouton et qu'on fait show(), cela affiche une nouvelle fenêtre.

    return app.exec();
}
