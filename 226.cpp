#include <iostream>
using namespace std;

int main (){
	// Declaración de variables
	int n=0, factorial=1, i=0; // n= número a calcular el factorial, i=auxiliar

	// Introducción del número factorial
	do {
	cout << "Introduzca el número del cual quiere calcular el factorial: ";
	cin >> n;
		if (n < 0)
			cout << "ERROR: número introducído no valido." << endl;
	} while (n < 0);

	// Calculo de factorial
	for (i=1;(i <= n);i++) {
		factorial = factorial * i;
	}

	// Salida de los resultados
	cout << "El factorial o " << n << "! es: " << factorial << endl;
	cout << "Fin del programa." << endl;
}
