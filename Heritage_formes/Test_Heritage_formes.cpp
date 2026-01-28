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
    cout << "Test" << endl;

	CRectangle rect("MonRectangle", 4, 5);
	rect.afficher();
	cout << "Surface du rectangle : " << rect.surface() << endl;

	CCarre carre(3);
	carre.afficher();
	cout << "Surface du carre : " << carre.surface() << endl;

	CTriangle tri("MonTriangle", 4, 6);
	tri.afficher();
	cout << "Surface du triangle : " << tri.surface() << endl;

	COctogoneRegulier octo("MonOctogone", 2);
	octo.afficher();
	cout << "Surface de l'octogone : " << octo.surface() << endl;
}
void partie2();
/// etc...

int main()
{
	partie1();
	return 0;
}

