#include <iostream>
using namespace std;

int main (){
	//declaracion de variables
	double radio_circulo=0.0, area_circulo=0.0, longitud_perimetro_circulo=0.0;

	//captacion de variables
	cout << "Introduzca radio del círculo: ";
	cin >> radio_circulo;

	//comprobacion de entradas
	if (radio_circulo <= 0)
		cout << "El radio introducido es una troleada" << endl;
	else {
		//calculo de salidas
		cout << "Radio del círculo: " << radio_circulo << endl;
		area_circulo = 3.1416 * (radio_circulo*radio_circulo);
		cout << "El área del círculo es: " << area_circulo << endl;
		longitud_perimetro_circulo = 2*3.1416*radio_circulo;
		cout << "El perímetro del círculo es: " << longitud_perimetro_circulo << endl;
	}
}
