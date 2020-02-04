
#include <iostream>

using namespace std;
int main()
{
    //Ejercicio 62- Cinthia Olivas
    //Encontrar los ceros de la ecuacion x^2 -4x -165. 

    float a, b, c, d, x1, x2,r1,r2 = 0;

    cout << "DETERMINAR LOS CEROS DE LA FUNCION CUADRATICA\n";
    cout << "\tx^2 -4x -165" << endl;

    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;
    cout << "Ingrese el valor de C: "; cin >> c;

     //Formula General
    d = sqrt(pow(b, 2) - 4 * a * c);
    x1 = (-b + d) / (2 * a);
    x2 = (-b - d) / (2 * a);

    cout << "\nEl valor de X1 es: " << x1 << endl;
    cout << "\nEl valor de X2 es: " << x2 << endl;
    
    cout << "\n\tComprobacion\n";
    r1 = a * (pow(x1, 2)) + b * x1 + c;
    cout <<a<<"("<<x1<<")^2" << " " <<b<< "(" << x1 << ")" << " " <<c<<" = "<<r1 << endl; //Sustituye los valores calculados en la ecuacion para dar el resultado 0
    r2 = a * (pow(x2, 2)) + b * x2 + c;
    cout << a << "(" << x2 << ")^2" << " "<< b << "(" << x2 << ")" << " " << c << " = " << r2 << endl;
    return 0;
}

