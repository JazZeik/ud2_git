#include <iostream>
using namespace std;

int main () {

	//declaración de variables
	double numero_uno=0.0, numero_dos=0.0, numero_tres=0.0, maximo=0.0;

	//introducción de valores
	cout << "Introduzca el primer valor: ";
	cin >> numero_uno;
	cout << "Introduzca el segundo valor: ";
	cin >> numero_dos;
	cout << "Introduzca el tercer valor: ";
	cin >> numero_tres;

	//calculo del mayor de los valores
	if (numero_uno <= numero_dos){
		maximo = numero_dos;
		if (maximo <= numero_tres)
			maximo = numero_tres;
	}
	else {
		maximo = numero_uno;
	}

	cout << "El valor maximo introducido es: " << maximo << endl;
}		
