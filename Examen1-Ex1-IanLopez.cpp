//============================================================================
// Name        : Examen1-Ex1-IanLopez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int numero;

	do
	{
		cout << "introdueix un numero superior a 0" << endl;
		cin >> numero;
	}while(numero < 0);

	if(numero % 2 == 0)
	{
		cout << "el numero es divisible per 2";
	}
	else{
		cout << "el numero NO es divisible per 2";
	}

	return 0;
}
