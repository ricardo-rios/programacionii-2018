// Listado 7.12


#include <iostream>

using namespace std;


int main()
{

   int contador = 0;
   int max;

   cout << "¿Cuantos holas?: ";
   cin >> max;

   for ( ; ; )
   {
      if (contador < max)
      {
        cout << "!Hola!\n";
        contador++;
      }
      else
         break;

   }
   

   return 0;

}
