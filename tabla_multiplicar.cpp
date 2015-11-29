#include <iostream>
using namespace std;

int main () {

	//declaración de variables
	double num=0.0;
	int i=1;

	// Introducción del número a calcular
	cout << "Introduzca el número del que busca la tabla de multiplicación: ";
	cin >> num;

	// Bucle que hace y saca la tabla elegída por pantalla
	do {
		cout << num << " x " << i << " = " << num*i << endl;
		i = i + 1;
	} while (i <= 10);
}
