#include "iostream"

using namespace std;

int main (void)

{
    int numero1, numero2;

    cout << endl << "Numeros divisibles entre si." << endl << endl;

    cout << "Ingrese el divisor: " << endl;
    cin >> numero1;
    cout << "Ingrese el dividendo: " << endl;
    cin >> numero2;

    if (numero1%numero2 == 0) 
    {cout << "Es divisible.";}
    else {cout << "No es divisible.";}


}

