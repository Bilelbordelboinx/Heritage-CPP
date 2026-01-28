///////////////////////////////////////////////////////////
//  carre.cpp
//  Implementation of the Class CCarre
//  Created on:      20-janv.-2026 10:11:05
//  Original author: Utilisateur
///////////////////////////////////////////////////////////

#include "carre.h"
#include <iostream>
using namespace std;
CCarre::CCarre(){

}



CCarre::~CCarre(){

}


CCarre::CCarre(int _cote) : CRectangle("Carre", _cote, _cote)
{

}


void CCarre::afficher()
{
	/*CForme::afficher();
	cout << "Type : Carré, Côté : " << largeur << endl;*/
	CRectangle::afficher();
}

double CCarre::surface(){

	return CRectangle::surface();
}