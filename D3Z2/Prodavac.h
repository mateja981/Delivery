#pragma once
#include "Artikal.h"
#include "Greske.h"
#include "Lista.h"
#include "Posiljka.h"
#include "Rukuvalac.h"

class Prodavac : public Rukuvalac
{
	string naziv;
	struct Katalog
	{
		Artikal& artikal;
		double marza;
		int brojdana;
	};

	Lista<Katalog> katalozi;
public:
	Prodavac(string n): naziv(n){}
	string dohnaziv() { return naziv; }
	void obrada(Posiljka& p) override;
	virtual void dodaj(Artikal& a, double m, int d) override;

};

