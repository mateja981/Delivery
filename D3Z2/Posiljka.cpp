#include "Posiljka.h"

int Posiljka::id = 0;

ostream& Posiljka::detaljiposiljke(ostream& os) const
{
	os << "Broj dana za posiljku: " << this->dohbrojdana() << endl;
	os << "Cena posiljke: " << this->dohcenuposiljke() << endl;
	return os;
}

void Posiljka::izracunajdetalje()
{
	for (int i = 0; i < rukovodioci.brojelemenata(); i++) {
		rukovodioci[i]->obrada(*this);
	}
	izracunavanje = 1;
}

ostream& Posiljka::ispis(ostream& os) const
{
	os << "POSILJKA[" << id << "," << artikal.dohnaziv() << "]";
	return os;
}
