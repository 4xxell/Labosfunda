//Elabore una función que retorne el mcd de dos números que se le
//proporcionen como argumento. Utilice el método de Euclides, que ya se
//presentó en un ejemplo del documento donde se explican las instrucciones
//iterativas. Su función deberá retornar el mcd de los dos enteros recibidos y
//deberá ser desplegado en pantalla.
#include "iostream"
using namespace std;
int a, b, mcd, sobrante;

int main()
{
    cout << "Hallar el MCD de dos numeros" << endl;
    ;mcdfun();
    cout << endl;
    system("pause");
    return 0;
}

void mcdfun()
{
    cout << "Introduzca el numero de mayor valor: " << endl;
    cin >> a;
    cout << "Introduzca el numero de menor valor: " << endl;
    cin >> b;
    sobrante = a%b;
    if(sobrante==0)
    {
      cout << "El MCD es: " << b;
    }
    while(!sobrante == 0)
    {
     a = b;
     b = sobrante;
     sobrante = a%b;
     if(a%b == 0){
        cout << "El MCD es: " << b;
        break;
     }
    } 
}

