#pragma once
#ifndef CCERCLE_H
#define CCERCLE_H

#include "forme.h"

class CCercle : public CForme {
private:
    double rayon; // Attribut demandé

public:
    CCercle(string _nom, double _rayon);
    virtual ~CCercle();

    // Redéfinition des méthodes obligatoires
    void afficher() override;
    double surface() override;
};

#endif