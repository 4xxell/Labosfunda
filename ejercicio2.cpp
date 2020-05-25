#include "iostream"

using namespace std;

int main (void)
{
    int numero;

    cout << endl << "Verificar si un numero es par o no" << endl << endl;

    cout << "Ingrese su numero a comprobar: " << endl;
    cin >> numero;
    if (numero%2 == 0) 
    {cout << "Es par.";}
    else {cout << "No es par.";}


    return 0;
}