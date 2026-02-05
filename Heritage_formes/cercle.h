#pragma once
#ifndef CCERCLE_H
#define CCERCLE_H

#include "forme.h"

class CCercle : public CForme {
private:
	double rayon; // Rayon du cercle

public:
    CCercle(string _nom, double _rayon);
	virtual ~CCercle(); // Destructeur virtuel

    
	void afficher() override; // Affiche les détails du cercle
	double surface() override; // Calcule et retourne la surface du cercle
};

#endif