#pragma once
class Posiljka;
class Artikal;

class Rukuvalac
{
public:
	virtual void obrada(Posiljka& p) {}
	virtual void dodaj(Artikal& a, double m, int d) {}
};

