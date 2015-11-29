/* Este ejercicio sin las llaves del if da como resultado las dos salidas si introducimos el 0
*/

#include <iostream>
using namespace std;

int main(){
	int dato;
	cout << "Introduzca un valor entero distinto de cero" << endl;
	cin >> dato;
	if (dato != 0)
		cout << "Ha escrito " << dato << " que es distinto de cero" << endl;
		cout << "Es un alumno muy obediente" << endl;
	
	if (dato == 0)
		cout << "Ups! que desobediente..." << endl;
}
