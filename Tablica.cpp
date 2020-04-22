#include "Tablica.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

template<int NumberOfEl> Tablica<NumberOfEl>::Tablica()
{
	srand(time(NULL));
	int x = 1, y = 100;
	for (int i = 0; i < NumberOfEl; i++)
		Tab[i] = x+rand()%(y-x+1);
}

template<int NumberOfEl>
int Tablica<NumberOfEl>::Maksimum()
{
	int max = Tab[0];

	for (int i = 1; i < NumberOfEl; i++)
		if (max < Tab[i])
			max = Tab[i];
	return max;
}

template<int NumberOfEl>
int Tablica<NumberOfEl>::Minimum()
{
	int max = Tab[0];

	for (int i = 1; i < NumberOfEl; i++)
		if (max > Tab[i])
			max = Tab[i];
	return max;
}

template<int NumberOfEl>
void Tablica<NumberOfEl>::Sortuj()
{
	for (int i = 0; i < NumberOfEl; i++)
		for (int j = 1; j < NumberOfEl - i; j++)
			if (Tab[j - 1] > Tab[j])
				 swap(Tab[j - 1], Tab[j]);
}

template<int NumberOfEl>
void Tablica<NumberOfEl>::Wyswietl()
{
	for (int i = 0; i < NumberOfEl; i++) {
		std::cout << Tab[i] << std::endl;
	}
}





