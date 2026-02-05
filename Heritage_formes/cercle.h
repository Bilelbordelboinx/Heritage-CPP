///////////////////////////////////////////////////////////
//  cercle.h
//  Implementation of the Class CCercle
//  Created on:      05-févr.-2026 23:00:00
//  Original author: Enzo Demeiller
///////////////////////////////////////////////////////////

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