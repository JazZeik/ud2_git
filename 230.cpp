#include <iostream>
using namespace std;

int main () {
	// Declaración de variables
	int a=0, b=0, resto=0;

	// Introducción de variables
	do {
		cout << "Introduzca en valor del primer número: ";
		cin >> a;
		cout << "Introduzca en valor del segundo número: ";
		cin >> b;
		if ((a <= 0) || (b <= 0))
			cout << "ERROR:" << endl;
	} while ((a <= 0) || (b <= 0));
	
	// Calculo mcd (máximo común divisor)
	resto = a % b;
	while (resto != 0) {
		a = b;
		resto = b;
		resto = a % b;
	}
	cout << "El m.c.d. es: " << b << endl;
	cout << "Fin del programa." << endl;
}
