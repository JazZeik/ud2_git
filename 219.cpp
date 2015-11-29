/* Ejemplo satelite while*/

#include <iostream>
using namespace std;

int main (){

	//declaración variables
	int ndatos=0;
	double dato=0.0, suma=0.0, media=0.0;

	//introducción de datos
	cin >> dato;
	cout << "Recibido: " << dato << endl;

	while (dato >= 0){
		cout << "Procesando..." << endl;
		suma = suma + dato;
		ndatos = ndatos + 1;
		cin >> dato;
		cout << "Recibido: " << dato << endl;
	}

	//final de transmisión
	media = suma / ndatos;
	cout << "La media de los datos es: " << media << endl;
	cout << "Fin de transmisión" << endl;
}
