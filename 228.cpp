#include <iostream>
using namespace std;

int main (){
	// Declaración de variables
	int n=0, modulo=1, i=1; // n= número a comprobar, i=auxiliar

	// Introducción del número a comprobar si es primo
	do {
	cout << "Introduzca el número del cual quiere comprobar si es primo: ";
	cin >> n;
		if (n < 0)
			cout << "ERROR: número introducído no valido." << endl;
	} while (n < 0);

	// Calculo de la comprobación
	while (modulo != 0) {
		i = i + 1;
		modulo = n % i;
	}

	// Salida de los resultados
	if (n == i)
		cout << "El número es primo." << endl;
	else {
		cout << "El modulo de " << n << " partido " << i << " es: " << modulo << endl;
		cout << "Por lo tanto el número no es primo" << endl;
	}
	cout << "Fin del programa." << endl;
}
