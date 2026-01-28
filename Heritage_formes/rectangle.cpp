///////////////////////////////////////////////////////////
//  rectangle.cpp
//  Implementation of the Class CRetangle
//  Created on:      20-janv.-2026 10:20:43
//  Original author: Utilisateur
///////////////////////////////////////////////////////////

#include "rectangle.h"
#include <iostream>
using namespace std;

CRectangle::CRectangle(){

}



/**
 * constructeur prends le paramètre "nom" de la classe de base et les deux
 * paramètres "longueur" et "largeur" propres à la classe CRectangle
 */
CRectangle::CRectangle(string _nom, int _largeur, int _longueur):CForme(_nom),largeur(_largeur),longueur(_longueur) {

}


CRectangle::~CRectangle(){

}


/**
 * affiche le nom, la longueur, la largeur et la surface du rectangle
 */
void CRectangle::afficher()
{
	CForme::afficher();
	cout << "Type : Rectangle, Largeur : " << largeur << ", Longueur : " << longueur << endl;
}



/**
 * retourne la surface du rectangle
 */
double CRectangle::surface(){

	return largeur * longueur ;
}