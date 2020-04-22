#pragma once
template<int NumberOfEl> class Tablica

{private:
	int Tab[NumberOfEl];

public:
	Tablica();//konstruktor
	int operator[](size_t el) { return Tab[el]; }
	int Maksimum();
	int Minimum();
	void Sortuj();
	void Wyswietl();
};