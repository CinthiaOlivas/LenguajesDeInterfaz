#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>

using namespace std;
//Ejercicio 58- Cinthia Olivas
//Determinar la pareja de ordenadas con respecto a un punto

int main()
{
    float x1,x2,y1,y2,b2,b1,m,r1,r2 =0; //b1 y b2 pareja de ordenadas del punto 
    float xm, ym = 0;
    int opc = 0;

    cout << "CALCULOS CON RESPECTO A UN PUNTO P";

    cout << "\nA continuacion ingrese valores del punto P";
    cout << "\nValor en X1: "; cin >> x1;
    cout << "\nValor en Y1: "; cin >> y1;
    system("cls");
    cout << "\nDigite el numero correspondiente, Operacion que desea realizar: \n1)Conocer punto simetrico con respecto a P \n2)Conocer punto medio entre dos puntos \nR: "; 
    cin >> opc;    
    switch (opc)
    {
    case 1: 
    {
        //Calcular el punto simetrico
        system("cls");
        cout << "\nA continuacion ingrese valores del punto medio M";
        cout << "\nValor en X: "; cin >> b1;
        cout << "\nValor en Y: "; cin >> b2;
        r1 = (2 * b1) - x1;
        r2 = (2 * b2) - y1;
        system("cls");
        cout << "\nLos valores del punto simetrico a P son =";
        cout <<"\n("<<r1<<","<< r2<<")"<<endl;      
        break;
    }
    case 2:
    {
        //Calcular Punto medio en un segmento
        system("cls");
        cout << "\nA continuacion ingrese valores del punto B";
        cout << "\nValor en X: "; cin >> x2;
        cout << "\nValor en Y: "; cin >>y2;
        xm = (x1 + x2) / 2;
        ym = (y1 + y2) / 2;
        system("cls");
        cout << "\nLos valores del punto medio M son =";
        cout << "\n(" << xm << "," << ym << ")" << endl;        
        break;
    }
    default:
        cout << "El valor ingresado es incorrecto";
        break;
    }

    return 0;
}

