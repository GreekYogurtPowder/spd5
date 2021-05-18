#include <cstdio>
#include <ctime>
#include <windows.h>
#include "instancja.h"
using namespace std;

int main()
{
	clock_t start, stop;
	vector<long> pi;
	instancja inst = instancja();

	cout << endl << "-----ZADANIA-----" << endl;
	inst.wypiszTabele();

	cout << endl << endl << "-----PERMUTACJA NATURALNA-----" << endl << endl;
	inst.wypiszPi(inst.domyslnePi());
	cout << endl;
	inst.wypiszWyniki(inst.domyslnePi());

	cout << endl << "-----ALGORYTM JOHNSONA-----" << endl << endl;
	start = clock();
	pi = inst.johnson();
	stop = clock();
	inst.wypiszPi(pi);
	cout << endl;
	inst.wypiszWyniki(pi);
	cout << "Czas dzialania: " << (stop - start) / 1000.0 << " s" << endl;

	cout << endl << "-----ALGORYTM NEH-----" << endl << endl;
	start = clock();
	pi = inst.neh(false, 0);
	stop = clock();
	cout << endl;
	inst.wypiszPi(pi);
	cout << endl;
	inst.wypiszWyniki(pi);
	cout << "Czas dzialania: " << (stop - start) / 1000.0 << " s" << endl;

	cout << endl << "-----ALGORYTM NEH+ NAJCZESTSZE ZADANIE-----" << endl << endl;
	start = clock();
	pi = inst.neh(false, 1);
	stop = clock();
	cout << endl;
	inst.wypiszPi(pi);
	cout << endl;
	inst.wypiszWyniki(pi);
	cout << "Czas dzialania: " << (stop - start) / 1000.0 << " s" << endl;

	cout << endl << "-----ALGORYTM NEH+ NAJDLUZSZE ZADANIE-----" << endl << endl;
	start = clock();
	pi = inst.neh(false, 2);
	stop = clock();
	cout << endl;
	inst.wypiszPi(pi);
	cout << endl;
	inst.wypiszWyniki(pi);
	cout << "Czas dzialania: " << (stop - start) / 1000.0 << " s" << endl;

	cout << endl << endl;
	return 0;
}