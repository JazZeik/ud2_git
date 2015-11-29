#include <iostream>
#include <cmath>
using namespace std;

int main (){
	// Declaración de variables
	double x1=0.0, y1=0.0, r1=0.0; // datos circunferencia 1
	double x2=0.0, y2=0.0, r2=0.0; // datos circunferencia 2
	double distancia=0.0, posicion1=0.0, posicion2=0.0; // distancia entre circunferencias, longitud del origen al centro de las circunferencias

	// Introducción de los datos de la circunferencia 1
	cout << "Introduzca el valor X, el valor Y y el radio de la circunferencia 1: ";
	cin >> x1 >> y1 >> r1;
	cout << "Introduzca el valor X, el valor Y y el radio de la circunferencia 2: ";
	cin >> x2 >> y2 >> r2;

	// Calculo de la distancia entre circunferencias
	distancia = sqrt ((pow((x2-x1),2)) + (pow((y2-y1),2)));

	// Relación entre las dos circunferencias
	if (distancia == 0) {
		if (r1 == r2)
			cout << "Las circunferencias se superponen." << endl;
		else {
			if (r1 < r2)
				cout << "La circunferencia 1 está contenida en la 2." << endl;
			else 
				cout << "La circunferencia 2 está contenida en la 1." << endl;
		}
	}
	else {
		if (distancia == (r1+r2))
			cout << "Las circunferencias se tocan en un punto." << endl;
		else {
			if (distancia < r1+r2) {
				if (r2 <= r1/2)
					cout << "La circunferencia 2 está contenida en la 1." << endl;
				else
					cout << "Las circunferencias se cortan en dos puntos." << endl;
			}
			else
				cout << "Las circunferencias no tienen relación entre ellas." << endl;
		}
	}

	cout << "Fin del programa." << endl;
}
