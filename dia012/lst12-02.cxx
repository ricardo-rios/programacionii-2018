// Listado 12.2


#include <iostream>

using namespace std;

int main()
{
   // centinelas
   long centinelaUno[3];
   long ArregloDestino[25];
   long centinelaDos[3];
   int i;

   for (i=0; i < 3; i++)
      centinelaUno[i] = centinelaDos[i] = 0;

   for (i=0; i < 25; i++)
      ArregloDestino[i] = 0;

   cout << "Prueba 1: \n";
   cout << "ArregloDestino[0]: " << ArregloDestino[0] << "\n";
   cout << "ArregloDestino[24]: " << ArregloDestino[24] << "\n\n";

   for (i=0; i < 3; i++)
   {
      cout << "centinelaUno[" << i << "]: ";
      cout << centinelaUno[i] << "\n";
      cout << "centinelaDos[" << i << "]: ";
      cout << centinelaDos[i] << "\n";
   }

   cout << "\nAsignando...";
   for (i=0; i <= 25; i++)
      ArregloDestino[i] = 20;
   cout << "\nPrueba 2: \n";
   cout << "ArregloDestino[0]: " << ArregloDestino[0] << "\n";
   cout << "ArregloDestino[24]: " << ArregloDestino[24] << "\n";
   cout << "ArregloDestino[25]: " << ArregloDestino[25] << "\n";

   for (i=0; i < 3; i++)
   {
      cout << "centinelaUno[" << i << "]: ";
      cout << centinelaUno[i] << "\n";
      cout << "centinelaDos[" << i << "]: ";
      cout << centinelaDos[i] << "\n";  

   }


   return 0;

}
