// Listado 4.6 - muestra el uso de la instruccion if
// con la clausuala else.

#include <iostream>

using namespace std;

int main()
{

   int primerNumero, segundoNumero;
   cout << "Escriba un numero grande: ";
   cin >> primerNumero;

   cout << "\nEscriba un numero más pequeño:  ";
   cin >> segundoNumero;

   if ( primerNumero >= segundoNumero)
      cout << "\n!Gracias!\n";
   else
      cout << "\nOh. !El segundo es mas grande!\n";


   return 0;
}
