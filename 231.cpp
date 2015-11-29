#include <iostream>
using namespace std;

int main () {
	// Declaración de variables
	int n=0, i=1, resultado=0;
	// Introducción de variables
	cout << "Introduzca un número a calcular si es un cuadrado perfecto: ";
	cin >> n;

	// Calculo del cuadrado perfecto
	while (resultado < n) {
		resultado = i * i;
		i = i + 1;
	}

	// Salida
	if (resultado == n)
		cout << "El número introducido es un cuadrado perfecto." << endl;
	else 
		cout << "El número introducido no es un cuadrado perfecto." << endl;

	cout << "Fin del programa" << endl;
}
