#include "tacheediteur.h"

#include "entete.h"

TacheEditeur::TacheEditeur(QWidget *parent) : QWidget(parent)
{

}

TacheEditeur::TacheEditeur(Tache& t) : QWidget(){

    QWidget fenetre;

    QGridLayout *layout= new QGridLayout;
    QHBoxLayout *layout1= new QHBoxLayout;
    QHBoxLayout *layout2= new QHBoxLayout;
    QHBoxLayout *layout3= new QHBoxLayout;
    QHBoxLayout *layout4= new QHBoxLayout;

    QLabel *texteId1= new QLabel("identificateur");
    QLabel *texteId2= new QLabel("preemptive");


    QLabel *texteTitre= new QLabel("titre");

    QLabel *texteDisp1= new QLabel("disponibilité");
    QLabel *texteDisp2= new QLabel("échéance");
    QLabel *texteDisp3= new QLabel("durée");

    QLineEdit *lineId = new QLineEdit;
    lineId->setPlaceholderText(t.getId());

    QCheckBox *checkId = new QCheckBox;
    if (t.isPreemptive()) checkId->setChecked(true);

    QTextEdit *contenuTitre = new QTextEdit;
    contenuTitre->setPlaceholderText(t.getTitre());

    QDateEdit* date1 = new QDateEdit(t.getDateDisponibilite());
    QDateEdit* date2 = new QDateEdit(t.getDateEcheance());

    QSpinBox *temps1 = new QSpinBox;
    temps1->setSuffix(" heure(s)");
    temps1->setMinimum(0);
    QSpinBox *temps2 = new QSpinBox;
    temps2->setSuffix(" minute(s)");
    temps2->setMinimum(0);

    QPushButton *clickButt1 = new QPushButton("Annuler");
    QPushButton *clickButt2 = new QPushButton("Sauver");

    layout1->addWidget(texteId1);
    layout1->addWidget(lineId);
    layout1->addWidget(checkId);
    layout1->addWidget(texteId2);

    layout2->addWidget(texteTitre);
    layout2->addWidget(contenuTitre);

    layout3->addWidget(texteDisp1);
    layout3->addWidget(date1);
    layout3->addWidget(texteDisp2);
    layout3->addWidget(date2);
    layout3->addWidget(texteDisp3);
    layout3->addWidget(temps1);
    layout3->addWidget(temps2);

    layout4->addWidget(clickButt1);
    layout4->addWidget(clickButt2);

    layout->addLayout(layout1,0,0);
    layout->addLayout(layout2,1,0);
    layout->addLayout(layout3,2,0);
    layout->addLayout(layout4,3,0);

    fenetre.setLayout(layout);
}

TacheEditeur::~TacheEditeur()
{

}

