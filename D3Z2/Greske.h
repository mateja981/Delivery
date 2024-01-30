#pragma once
#include <exception>
using namespace std;

class GNepostojeciPodatak : public exception
{
public:
	GNepostojeciPodatak() : exception("GRESKA: Ne postoji podatak na toj poziciji") {};
};

class GNijeObradjenaPosiljka : public exception
{
public:
	GNijeObradjenaPosiljka() : exception("GRESKA: Posiljka nije obradjena") {};
};

class GPosiljkaVecPoslata : public exception
{
public:
	GPosiljkaVecPoslata() : exception("GRESKA: Posiljka je vec poslata") {};
};