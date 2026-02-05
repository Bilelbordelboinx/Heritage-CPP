///////////////////////////////////////////////////////////
//  cercle.cpp
//  Implementation of the Class CCercle
//  Created on:      05-févr.-2026 23:05:00
//  Original author: Enzo Demeiller
///////////////////////////////////////////////////////////



#include "cercle.h"
#include <iostream>
#include <cmath> // Pour M_PI

CCercle::CCercle(string _nom, double _rayon) : CForme(_nom) {
    this->rayon = _rayon;
}

CCercle::~CCercle() {}

void CCercle::afficher() {
    CForme::afficher(); // Affiche le nom
    std::cout << "Type : Cercle, Rayon : " << rayon << std::endl;
}

double CCercle::surface() {
    return 3.14159 * rayon * rayon; // Calcul de la surface
}