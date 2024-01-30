#include <iostream>
#include "Artikal.h"
#include "Greske.h"
#include "Lista.h"
#include "Posiljka.h"
#include "Rukuvalac.h"
using namespace std;

int main() {

	try
	{
		Artikal a1("Artikal1", 123, 100);
		//Artikal a2("Artikal2", 321, 1500);
		//Posiljka posiljka1(a2);
		//cout << (a1 == a2) << endl;
		Rukuvalac* prodavac1 = new Prodavac("Prodavac1");
		//Rukuvalac* prodavac2 = new Prodavac("Prodavac2");
		//Rukuvalac* prodavac3 = new Prodavac("Prodavac3");
		//Rukuvalac* prodavac4 = new Prodavac("Prodavac4");

		prodavac1->dodaj(a1, 1.2, 5);
		Posiljka posiljka1(a1);
		//prodavac2->dodaj(a1, 1.3, 3);
		//prodavac3->dodaj(a2, 1.0, 4);
		posiljka1 += prodavac1;
		//posiljka1 += prodavac2;
		//posiljka1 += prodavac3;
		//cout << posiljka1 << endl;
		posiljka1.izracunajdetalje();
		//cout << posiljka1 << endl;
		posiljka1.detaljiposiljke(cout);
	}
	catch (exception e) {
		cout << e.what() << endl;
	}

}