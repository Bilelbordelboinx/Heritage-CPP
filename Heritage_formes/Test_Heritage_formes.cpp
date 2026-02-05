// Heritage_formes.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
///////////////////////////////////////////////////////////
//  Test_Heritage_formes.cpp
//  Implementation of the Main Test Function
//  Created on:      05-févr.-2026 21:00:00
//  Original author: Utilisateur
//  Secondary author: Enzo Demeiller
///////////////////////////////////////////////////////////


#include <iostream>
#include "forme.h"
#include "rectangle.h"
#include "carre.h"
#include "triangle.h"
#include "OctogoneRegulier.h"
#include "cercle.h"
using namespace std;

// fonctions de test à coder
void partie1()
{
    cout << "Test P1" << endl;

	CRectangle rect("MonRectangle", 4, 5);
	rect.afficher();
	cout << "Surface du rectangle : " << rect.surface() << endl;

	CCarre carre(3);
	carre.afficher();
	double tmp = carre.surface();
	cout << "Surface du carre : " << carre.surface() << endl;

	CTriangle tri("MonTriangle", 4, 6);
	tri.afficher();
	cout << "Surface du triangle : " << tri.surface() << endl;

	COctogoneRegulier octo("MonOctogone", 2);
	octo.afficher();
	cout << "Surface de l'octogone : " << octo.surface() << endl;
}
void partie2() {
	cout << "Test P2" << std::endl;
	CForme* ptrForme;
	ptrForme = new CRectangle("Rectangle_Dynamique", 10, 5);
	cout << "Surface via pointeur : " << ptrForme->surface() << std::endl;
	delete ptrForme;
}
void partie5()
{
	cout << "Test P5" << endl;
	const int nbFormes = 4;
	CForme* mesFormes[nbFormes];

	mesFormes[0] = new CRectangle("Rectangle_P5", 10.0, 5.0);
	mesFormes[1] = new CCarre(4.0);
	mesFormes[2] = new CTriangle("Triangle_P5", 6.0, 4.0);
	mesFormes[3] = new COctogoneRegulier("Octogone_P5", 3.0);

	for (int i = 0; i < nbFormes; i++) {
		mesFormes[i]->afficher();
		std::cout << "Surface : " << mesFormes[i]->surface() << std::endl;
		std::cout << "-----------------------------------" << std::endl;
	}

	for (int i = 0; i < nbFormes; i++) {
		delete mesFormes[i];
	}
}
void partie6()
{
	cout << "Test P6" << endl;
	CCarre monCarre(5.0);
	std::cout << "Surface du carre (via CRectangle) : " << monCarre.surface() << std::endl;
}
void partie7()
{ 
	const int nb = 5; 
	CForme* mesFormes[nb];

	mesFormes[0] = new CRectangle("Rect", 10, 5);
	mesFormes[1] = new CCarre(4);
	mesFormes[2] = new CTriangle("Tri", 6, 4);
	mesFormes[3] = new COctogoneRegulier("Octo", 3);
	mesFormes[4] = new CCercle("Cercle", 5.0);

	for (int i = 0; i < nb; i++) {
		mesFormes[i]->afficher();
		std::cout << "Surface : " << mesFormes[i]->surface() << std::endl;
		delete mesFormes[i];
	}

}
		
int main()
{
	partie7();
	return 0;
}

