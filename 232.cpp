#include <iostream>
using namespace std;

int main () {
	// Declaración de variables
	int a=0, b=0, minimo=0, maximo=0, i=0;

	// Introducción y calculo del maximo y minimo
		cout << "Introduzca un número: ";
		cin >> a;
		maximo = a;
		minimo = a;
		cout << "1 número introducido." << endl;
	for (i=2;(i <= 100);i++) {
		cout << "Introduzca otro número: ";
		cin >> b;
		cout << i << " números introducidos." << " Procesando: " << b << endl;
		if (b < minimo)
			minimo = b;
			if (b > maximo)
				maximo = b;
		cout << "El menor número introducido hasta ahora es: " << minimo << endl;
		cout << "El mayor número introducido hasta ahora es: " << maximo << endl;
	}
	cout << "Fin del programa." << endl;
}
