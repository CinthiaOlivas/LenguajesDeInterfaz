
#include <iostream>
using namespace std;
//Ejercicio 59- Cinthia Olivas
//Interseccion al eje de las X de la recta y= 4x +3
int main()
{
	float a = 4;
	float b = 3; 
	float result = 0;

	cout << "\nEncontrar interseccion al eje de las X de la recta ";
	cout << "\nRepresentada por la ecuacion: y= 4x +3";
	
	cout << "\n\nSe despeja a X de la ecuacion";
	b = -3;
	result = b/a;	 
	cout << "\n4x = -3";
	cout << "\nX = -3/4";
	
	cout << "\n\tLa interseccion en X es: (0, " <<result<<")"<<endl;

	
	return 0;
}