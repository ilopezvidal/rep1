//============================================================================
// Name        : Examen1-Ex5-IanLopez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {


	int numerador, denominador, divisor, numero;
	bool esprimer;

	cout << "Introdueix Numerador";
	cin >> numerador;

	cout << "Introdueix Denominador";
	cin >> denominador;

	esprimer = true;
	divisor = 2;

	while(divisor <= numerador)
	{
		if(numerador % divisor == 1)
			numerador = numerador / divisor;
		divisor++;
	}

	cout << numerador << endl;

	cout << divisor;

	return 0;
}
