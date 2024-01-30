#pragma once
#include "Artikal.h"
#include "Lista.h"
#include "Rukuvalac.h"
#include "Prodavac.h"

class Posiljka
{
	Artikal& artikal;
	static int id;
	Lista<Rukuvalac*> rukovodioci;
	struct DetaljiPosiljke {
			int brojdana=0;
			double cenaposiljke=0;
		};
	DetaljiPosiljke dp;
	bool izracunavanje=0;

protected:
	void postavibrojdana(int bd) { dp.brojdana = bd; }
	void postavicenuposiljke(double cp) { dp.cenaposiljke = cp; }

public:
	friend class Prodavac;

	Posiljka(Artikal& a) : artikal(a) { id++; }
	void operator+=(Rukuvalac* r) { if (izracunavanje) throw GPosiljkaVecPoslata(); rukovodioci += r; }

	Artikal& dohartikal() { return artikal; }
	int dohbrojdana() const { if (!izracunavanje) throw GNijeObradjenaPosiljka(); return dp.brojdana; }
	double dohcenuposiljke() const { if (!izracunavanje) throw GNijeObradjenaPosiljka(); return dp.cenaposiljke; }
	int dohid() { if (!izracunavanje) throw GNijeObradjenaPosiljka(); return id; }
	ostream& detaljiposiljke(ostream& os) const;
	void izracunajdetalje();
	ostream& ispis(ostream& os) const;
	friend ostream& operator << (ostream& os, const Posiljka& p) { return p.ispis(os); }

};

