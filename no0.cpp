#include <iostream>
using namespace std;

int main () {

	//declaración de variables
	double num1=0.0, num2=0.0, i=0.0;

	// Bucle 
	do {
		cout << "Introduzca un número que no sea el cero: ";
		cin >> num1;
	} while (num1 == 0);

	// Bucle 2
	do {
		cout << "Introduzca otro número que no sea el cero: ";
		cin >> num2;
	} while (num2 == 0);
}
