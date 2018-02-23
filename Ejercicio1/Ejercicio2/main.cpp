#include <iostream>

using namespace std;
/*
FUNCION MAIN:
    se pide un numero y se dice si es par o impar
*/

int main()
{
    int num;
    cout << "Escriba un numero: ";
    cin>>num;
    cout << "El numero que escribio es: "<<num<<endl;

    if (num%2==0)
    {
        cout<<"El numero es par"<<endl;
    }
    else
    {
        cout<<"El numero es Impar"<<endl;

    }



    return 0;
}
