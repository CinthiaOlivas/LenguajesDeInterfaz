
#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>

using namespace std;

int main()
{   
    //Ejercicio 57- Cinthia Olivas
    //Introducir los números reales A,B y C, coeficientes de la ecuacion cuadrática Ax^2 + Bx + C =0. Determinar si la ecuacion tiene raíces
    
    float a, b, c,d,x1,x2 = 0;
    
    cout << "DETERMINAR LAS RAICES DE LA ECUACION\n";
    cout << "\tAx^2 + Bx + C =0"<< endl;

    cout << "Digite el valor de A: "; cin >> a;
    cout << "Digite el valor de B: "; cin >> b;
    cout << "Digite el valor de C: "; cin >> c;

    cout << "\n\tEl metodo utilizado es Formula general\n";
    
    //Formula General
        d = sqrt(pow(b, 2) - 4 * a * c);
        x1 = (-b + d) / (2 * a);
        x2 = (-b - d) / (2 * a);
        cout << "\nEl valor de X1 es: " << x1 << endl;
        cout << "\nEl valor de X2 es: " << x2 << endl;
        return 0;
}


