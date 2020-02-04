#include <iostream>

using namespace std;
//Ejercicio 60- Cinthia Olivas
//Encontrar los valores de Y= x^2, desde x= -6 hasta x= 6 

int main()
{
	int inferior, superior, contador = 0;
	cout << "\nTabulacion de Y= x^2: ";

	cout << "\nIngrese limite inferior: "; cin >> inferior;
	cout << "\nIngrese limite superior: "; cin >> superior;

	for (contador = inferior; contador>=inferior && contador<= superior ; contador++)
	{
		cout<<"\n\tf(" << contador << ") = " << contador * contador<<endl;  
	}	
    return 0;
}

