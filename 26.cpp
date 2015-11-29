#include <iostream>
#include <cmath>
using namespace std;

int main (){

	//declaración de variables
	double a=0.0,b=0.0,c=0.0;
	double x1=0.0, x2=0.0;

	//introducción de variables
	cout << "Introduzca el valor de la variable x cuadrado: ";
	cin >> a;
	cout << "Introduzca el valor de la variable x: ";
	cin >> b;
	cout << "Introduzca el valor de la variable sin x: ";
	cin >> c;

	//calculo del programa
	if (a == 0)
		cout << "Si la x cuadrado es 0 no es una ecuación de segundo grado" << endl;
	else {
		if ((b*b-4*a*c) < 0)
			cout << "El discriminante es negativo" << endl;
		else {
			x1=(-b+(sqrt(b*b-4*a*c)))/(2*a);
			x2=(-b-(sqrt(b*b-4*a*c)))/(2*a);
			cout << "Según la expresión ax2+bx+c=0 x1=" << x1 << " x2=" << x2 << endl;
		}
	}
}
