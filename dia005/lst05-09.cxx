// Listado 5.9 - muestra las funciones en linea.


#include <iostream>

using namespace std;

inline int Duplicar(int);

int main()
{
   int numero;

   cout << "Escriba un numero con el que quiera trabajar: ";
   cin >> numero;
   cout << "\n";

   numero = Duplicar(numero);
   cout << "Numero: " << numero << endl;

   numero = Duplicar(numero);
   cout << "Numero: " << numero << endl;

   numero = Duplicar(numero);
   cout << "Numero: " << numero << endl;


   return 0;
}


int Duplicar(int numero)
{
   return numero * 2;
}
