///////////////////////////////////////////////////////////
//  OctogoneRegulier.cpp
//  Implementation of the Class OctogoneRegulier
//  Created on:      20-janv.-2026 10:20:48
//  Original author: Utilisateur
///////////////////////////////////////////////////////////

#include "OctogoneRegulier.h"
using namespace std;
#include <cmath>
#include <iostream>
COctogoneRegulier::COctogoneRegulier(){
	
}



COctogoneRegulier::~COctogoneRegulier(){

}

/**
 * Affiche le nom de la forme
 */
void COctogoneRegulier::afficher()
{
	CForme::afficher();
	cout << "Type : Octogone Regulier, Cote : " << cote << endl;
}


/**
 * constructeur qui initialise le nom de la forme
 */
COctogoneRegulier::COctogoneRegulier(string _nom, int _cote):CForme(_nom),cote(_cote){

}

double COctogoneRegulier::surface()
{

	return 2 * (1 + sqrt(2)) * cote * cote ;
}