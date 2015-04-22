#ifndef TACHEEDITEUR_H
#define TACHEEDITEUR_H

#include <QWidget>
#include "Calendar.h"

class TacheEditeur : public QWidget
{
    Q_OBJECT
public:
    explicit TacheEditeur(QWidget *parent = 0);
    explicit TacheEditeur(Tache& t);
    ~TacheEditeur();

signals:

public slots:
};

#endif // TACHEEDITEUR_H
