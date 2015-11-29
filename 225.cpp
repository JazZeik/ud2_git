#include <iostream>
using namespace std;

int main (){
	// Declaración de variables
	int multiplo=0, dato=0, inicio=0, fin=0, i=0; // i=cantidad de multiplos a=números a comprobar
	
	// Introducción del número a calcular sus multiplos
	do {
		if (dato < 0)
			cout << "ERROR" << endl;
		cout << "Introduzca un número a calcular sus multiplos: ";
		cin >> dato;
	} while (dato < 0);

	// Introducción de intervalo
	cout << "Ahora introduciremos el intervalo en el cual se buscaran los multiplos:" << endl;
	do {
		cout << "Introduzca el valor más bajo: ";
		cin >> inicio;
		cout << "Introduzca el valor más alto: ";
		cin >> fin;
		if (fin <= inicio)
			cout << "ERROR" << endl;
	} while (fin <= inicio);

	// Calculo de multiplos
	for (multiplo=inicio; (inicio <= multiplo) && (multiplo <= fin);multiplo++){
		if (multiplo%dato == 0){
			i = i+1;
			cout << "nº" << i << ". Multiplo: " << multiplo << endl;
		}
	}
	
	cout << "Fin de calculo de multiplos" << endl;
}
