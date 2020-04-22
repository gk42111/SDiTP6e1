#include "Tablica.h"
#include "Tablica.cpp"

using namespace std;
int main()
{
	//Zad 1
	Tablica<10> T;
	cout << T[9]<<endl;
	cout << T.Maksimum() << endl;
	cout << T.Minimum() << endl;
	T.Sortuj();
	T.Wyswietl();
	cin.get();
}