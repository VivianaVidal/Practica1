#include <iostream>

using namespace std;

/*
FUNCION MAIN:
    se pide dos numeros a y b; y se hace a^b
*/

int main()
{
    int numA, numB, i,total=0;
    cout << "Escriba un numero A: ";
    cin>>numA;

    cout << "Escriba un numero B: ";
    cin>>numB;

    total=numA;

    for (i=1; i<numB; i++)
    {

        total=total*numA;

     }

    cout<<"El numero "<<numA<<" elevado a "<<numB<<" es: "<<total<<endl;
    return 0;
}
