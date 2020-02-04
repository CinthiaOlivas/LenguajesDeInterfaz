
#include <iostream>
using namespace std;
//Ejercicio 61- Cinthia Olivas
//Encontrar los valores de Y= 4x^2 - 5x +2, desde x= -3 hasta x= 5 

int main()
{
	int inferior, superior, contador = 0;
	cout << "\nTabulacion de Y= 4x^2 - 5x +2 desde X= -3 hasta X= 5:  ";
	inferior = -3;
	superior = 5;

	for (contador = inferior; contador >= inferior && contador <= superior; contador++)
	{
		cout << "\n\tf(" << contador << ") = " << (4* pow (contador,2)) - (5 *contador) +2 << endl;
	}
	return 0;
}

