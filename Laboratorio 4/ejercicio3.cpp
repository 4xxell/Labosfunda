#include "iostream"

using namespace std;

int main (void)
{
    int numero;

    cout << endl << "Verificar si un numero es negativo, 0 o positivo." << endl << endl;

    cout << "Ingrese el numero a verificar: " << endl;
    cin >> numero;

    if (numero < 0)
    {cout << "El numero es negativo";}

    else if (numero > 0)
    {cout << "El numero es positivo";}

    else {cout << "El numero es 0";}

    return 0;


}