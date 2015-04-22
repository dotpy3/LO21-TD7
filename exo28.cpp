#include "entete.h"
#include <QLineEdit>

int main(int argc, char* argv[]){
    QApplication app2(argc, argv);

    QWidget fenetre;
    fenetre.setFixedSize(200,200);

    QLineEdit identificateur(&fenetre);
    identificateur.move(10,10);

    fenetre.show();

    return app2.exec();
}
