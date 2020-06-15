//Escriba un programa que lea tres números enteros que representan los
//valores de día (dd), mes (mm) y año (aa) de una fecha cualquiera. Luego,
//calcule y dé como resultado de salida los valores de día, mes y año
//correspondientes al día siguiente. Su programa debe tomar en cuenta años
//bisiestos. Si la fecha digitada no es válida su programa no calculará el día
//siguiente e indicará el error de digitacion.

#include "iostream"
using namespace std;

int main()
{
    int dd, mm, aa;

    cout << "Introduzca el dia: " << endl;
    cin >> dd;
    cout << "Introduzca el mes" << endl;
    cin >> mm;
    cout << "Introduzca el anio" << endl;
    cin >> aa;

    if (dd>=1 && dd<=31 && mm>=1 && mm<=12 && aa%400!=0 && aa<=9999)
    {   if(dd==31 && mm==12)
        {
            dd=0;
            mm=0;
            aa++;
        }
        if(dd>=1)
        {
            dd++;
        }
        if(mm>=1 && mm!=12)
        {
            mm++;
        }
                
        cout << "Un dia despues la fecha es: " << dd  << "/" << mm << "/" << aa << endl;
    }
    else
        cout << "No introduciste correctamente los datos" << endl;

    system("pause");

}