#include "entete.h"
#include <QLineEdit>
#include <QTextEdit>

int main(int argc, char* argv[]){
    QApplication app2(argc, argv);

    QWidget fenetre;
    fenetre.setFixedSize(200,200);

    QLineEdit identificateur(&fenetre);
    identificateur.move(10,10);

    QTextEdit titre(&fenetre);
    titre.setFixedSize(180,110);
    titre.move(10,45);

    QPushButton save("Sauver",&fenetre);
    save.move(10,170);
    save.setFixedWidth(80);

    fenetre.show();

    return app2.exec();
}
