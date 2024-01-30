#pragma once
#include <iostream>
using namespace std;


class Artikal
{
	string naziv;
	int barkod;
	double cena;
public:
	Artikal(string n, int b, double c) : naziv(n), barkod(b), cena(c) {}

	string dohnaziv() { return naziv; }
	int dohbarkod() { return barkod; }
	double dohcena() { return cena; }

	friend bool operator == (Artikal& a1, Artikal& a2) { if (a1.barkod == a2.barkod) return 1; return 0; }

};

