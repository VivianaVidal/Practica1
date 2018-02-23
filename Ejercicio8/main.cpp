#include <iostream>

using namespace std;
/*
 * Ejercicio 8. Escriba un programa que pida un número N e imprima en pantalla su factorial.
Ej: si se ingresa 5: 5!=1*2*3*4*5=120, por lo que se debe imprimir:
5!=120
 */

int main()
{
    int num, i, total, cont=1;
    cout << "Ingrese un numero: ";
    cin>>num;

    total=num;

    for (i=1; i<num; i++)
    {

       total=total*cont;
       cont++;
    }
    cout << "El factorial de "<<num<<" es: "<<total<<endl;

     return 0;
}
