// Listado 4.8 - muestra por que las llaves
// son importantes en instrucciones if anidadas

#include <iostream>

using namespace std;

int main()
{
   int x;
   cout << "Escriba un numero menor que 10 o mayor que 100: ";
   cin >> x;
   cout << "\n";

   if (x >= 10)
      if (x > 100)
         cout << "Mayor que 100, !gracias!\n";
   else
      cout << "Menor que 10, !gracias!\n"; // no es la instruccion else que se quiere



   return 0;
}
