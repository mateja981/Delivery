#include "Prodavac.h"

void Prodavac::obrada(Posiljka& p) {

	for(int i=0; i<katalozi.brojelemenata();i++){
		if (katalozi[i].artikal == p.dohartikal()) {
			p.postavibrojdana(p.dp.brojdana + katalozi[i].brojdana);
			p.postavicenuposiljke(p.dp.cenaposiljke + katalozi[i].marza * katalozi[i].artikal.dohcena());
		}
	}
}
void Prodavac::dodaj(Artikal& a, double m, int d)
{
	Katalog k{ a,m,d };
	katalozi += k;
}
;