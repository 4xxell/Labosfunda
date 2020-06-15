//Elabore una función que retorne un valor booleano, true o false, que indique
//si un año es bisiesto o no. Para determinar si un año es bisiesto se hacen un
//máximo de dos pruebas, así: si el año es divisible entre 400, es bisiesto; pero
//si no es divisible entre 400 se realiza la siguiente prueba: que el año sea
//divisible entre 4 y no sea divisible entre 100; si tampoco cumple esta segunda
//prueba, entonces no es bisiesto. De acuerdo al valor booleano retornado,
//imprima un mensaje que indique si el año es o no bisiesto.

  
#include "iostream"
using namespace std;
int anio;
void formula()
{
   cout<<"Introduce el a"<<(char)164<<"o: ";
   cin >> anio;
  
   if(anio%400==0 or anio%4==0 and anio%100!=0)
   cout << "Es bisiesto" << endl;
   else 
   cout << "No es bisiesto" << endl;
}

int main(void)
{
  cout << "";formula(); 
  system("pause");
}