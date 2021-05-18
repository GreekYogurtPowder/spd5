#ifndef ZADANIE_H
#define ZADANIE_H

#include <vector>

using namespace std;

class zadanie
{
public:
	long j; //nr zadania
	vector<long> p; //czasy trwania
	long sum_p; //suma czasow trwania ze wszystkich maszyn
	zadanie();
};

#endif