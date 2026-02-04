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
int main()
{
	partie6();
	return 0;
}

