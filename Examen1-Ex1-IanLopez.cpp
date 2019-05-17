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

	if(numero % 5 == 0)
	{
		cout << "el numero es divisible per 5";
	}
	else{
		cout << "el numero NO es divisible per 5";
	}

	return 0;
}
