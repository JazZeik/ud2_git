/* Ejemplo satelite*/

#include <iostream>
using namespace std;

int main (){

	//declaración variables
	int dato;

	//Introducción de la retransmisión
	do{
		cin >> dato;
		cout << "Recibido: " << dato << endl;
	} while (dato >=0);
	
	//Final de la transmisión
	cout << "Fin de transmisión" << endl;
}
