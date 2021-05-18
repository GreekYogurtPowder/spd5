#ifndef INSTANCJA_H
#define INSTANCJA_H

#include "zadanie.h"
#include "RandomNumberGenerator.h"
#include <iostream>
#include <algorithm>

using namespace std;

class instancja
{
public:
	vector<zadanie> lista_zadan;
	long ilosc_zadan;
	long ilosc_operacji;

	instancja();
	void wypiszTabele();

	vector<long> domyslnePi();
	void wypiszPi(vector<long> pi);
	void wypiszWyniki(vector<long> pi);
	long funkcja_oceny(vector<long> pi);
	vector<long> johnson();
	vector<long> neh(bool czyWypisywac, int wersja);

	long najwiekszaIloscOperacjiNaSciezce(vector<long> pi, long pomijane_zadanie);
	long najwiekszaSumaOperacjiNaSciezce(vector<long> pi, long pomijane_zadanie);
};

#endif