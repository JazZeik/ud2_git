#include <iostream>
using namespace std;

int main () {
	// Declaración de variables
	int n=0, i=0, a=0;

	// Introducción y calculo de las tablas
	for (i=1;(i <= 10);i++) {
		cout << i << ". Introduzca un número: ";
		cin >> n;
		cout << "Tabla del " << i << ":" << endl;
		for (a=1;(a <= 10);a++) {
			cout << i << " x " << a << " = " << n*a << endl;
		}
	}
	cout << "Fin del programa." << endl;
}

