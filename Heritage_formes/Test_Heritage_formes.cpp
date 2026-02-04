// Heritage_formes.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "forme.h"
#include "rectangle.h"
#include "carre.h"
#include "triangle.h"
#include "OctogoneRegulier.h"

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
CForme maForme("Test");
int main()
{
	partie2();
	return 0;
}

