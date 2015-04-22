#include "entete.h"
#include <QLineEdit>
#include <QTextEdit>
#include <QHBoxLayout>
#include "Calendar.h"
#include <QString>
#include <QFileDialog>
#include <string>
#include <QString>

int main(int argc, char* argv[]){
    QApplication app2(argc, argv);

    QWidget fenetre;
    fenetre.setFixedSize(200,200);

    /* Question 1 :
     *
     * On positionne les éléments de façon absolue
     *
     * QLineEdit identificateur(&fenetre);
    identificateur.move(10,10);

    QTextEdit titre(&fenetre);
    titre.setFixedSize(180,110);
    titre.move(10,45);

    QPushButton save("Sauver",&fenetre);
    save.move(10,170);
    save.setFixedWidth(80); */

    /* Question 2 :
     *
     * On crée un layout, QVBoxLayout *layout,
     * qui se chargera d'agencer les éléments automatiquement de façon
     * verticale.
     * (il existe QHBoxLayout pour l'agencement horizontal)
     *
     * */

    QString chemin=QFileDialog::getOpenFileName();

    TacheManager& m =TacheManager::getInstance();

    m.load(chemin);
    TacheManager::Iterator it = m.getIterator();
    QString texteId;
    QString texteTitre;
    if(!it.isDone()) {
        Tache& t = it.current();
        texteId = t.getId();
        texteTitre = t.getTitre();
    } else {
        texteId = "";
        texteTitre = "";
    }

    QLineEdit* identificateur = new QLineEdit();
    QTextEdit* titre = new QTextEdit();
    identificateur->setPlaceholderText(texteId);
    titre->setPlaceholderText(texteTitre);
    QPushButton* save = new QPushButton("Sauver");

    QVBoxLayout *layout= new QVBoxLayout;

    layout->addWidget(identificateur);
    layout->addWidget(titre);
    layout->addWidget(save);

    fenetre.setLayout(layout);

    fenetre.show();
    return app2.exec();
}
