#include <iostream>
using namespace std;

int main (){
	// Declaración de variables
	int n=0, sumatoria=0, i=0; // n= número a calcular la sumatoria, i=auxiliar

	// Introducción del número factorial
	do {
	cout << "Introduzca el número del cual quiere calcular la sumatoria: ";
	cin >> n;
		if (n < 0)
			cout << "ERROR: número introducído no valido." << endl;
	} while (n < 0);

	// Calculo de sumatoria
	for (i=0;(i <= n);i++) {
		sumatoria = sumatoria + i;
	}

	// Salida de los resultados
	cout << "La sumatoria desde 1 hasta el número introducido es: " << sumatoria << endl;
	cout << "Fin del programa." << endl;
}
