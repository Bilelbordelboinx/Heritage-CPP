///////////////////////////////////////////////////////////
//  triangle.cpp
//  Implementation of the Class CTriangle
//  Created on:      20-janv.-2026 10:08:10
//  Original author: Utilisateur
///////////////////////////////////////////////////////////

#include "triangle.h"
using namespace std;
#include <iostream>

CTriangle::CTriangle(){

}



CTriangle::~CTriangle(){

}


CTriangle::CTriangle(string _nom, int _hauteur, int _base) :CForme(_nom),hauteur(_hauteur),base(_base) {

}


void CTriangle::afficher()
{
	CForme::afficher();
	cout << "Type : Triangle, Base : " << base << ", Hauteur : " << hauteur << endl;
}


double CTriangle::surface(){

	return (base * hauteur) / 2.0;
}