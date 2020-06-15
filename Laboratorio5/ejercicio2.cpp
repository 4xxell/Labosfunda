//Construya un programa que lea la hora, hh, mm y ss, en el modo de 24
//horas. Luego calcule y despliegue cuál es la hora un segundo después.

#include "iostream"
using namespace std;

int main()
{
    int h, m, s;

    cout << "Introduzca la horas: " << endl;
    cin >> h;
    cout << "Introduzca los minutos" << endl;
    cin >> m;
    cout << "Introduzca los segundos" << endl;
    cin >> s;

    if (h>=0 && h<=23 && m>=0 && m<=59 && s>=0 && s<=59)
    {
        s++;
        if (s==60)
        {
            s=0;
            m++;
            if (m==60)
            {
                m=0;
                h++;
                if(h==24)
                    h=0;
            }
        }
        cout << "Un segundo despues la hora es: " << h  << ":" << m << ":" << s << endl;
    }
    else
        cout << "No introduciste correctamente los datos" << endl;

    system("pause");

}