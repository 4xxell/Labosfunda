#include "iostream"
#include "string"
using namespace std;

int main (void) 
{ int longitud, par, impar; 
  string frase;

  cout << endl << "Verificar la longitud de una cadena." << endl;
  
  cout << endl << "Digite una palabra: " << endl; 
  cin >> frase; 
  
  longitud = frase.size();
  
  {if(longitud < 10) 
  {cout << "La palabra contiene menos de 10 caracteres, en total son: " << longitud;}  //quise agregar tambien el total de caracteres que tiene la palabra xD
  
  else if(longitud > 10) 
  {cout<<"La palabra supera los 10 caracteres, en total son: " << longitud;} 
  
  else {cout << "La palabra contiene 10 caracteres, en total son: " << longitud;}}
  
   {
      if(longitud % 2 == 0)
      {cout << " y la longitud es par." << endl;}
      else {cout << " y la longitud no es par." << endl;}
   }
  return 0; 
}