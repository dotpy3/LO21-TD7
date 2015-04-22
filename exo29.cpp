#include <QApplication>
#include <QFileDialog>
#include <QComboBox>
#include "Calendar.h"
#include "TacheEditeur.h"

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    TacheManager& m=TacheManager::getInstance();
    QString chemin = QFileDialog::getOpenFileName();
    m.load(chemin);

    Tache& t=m.getTache("T2");

    TacheEditeur fenetre(t);
    fenetre.show();
    return app.exec();
}
