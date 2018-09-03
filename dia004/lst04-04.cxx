// Listado 4.4 - muestra el uso de
// los operadores de incremento de
// prefijo y posfijo.

#include <iostream>

using namespace std;

int main()
{
   int miEdad = 39;
   int suEdad = 39;
   cout << "Yo tengo: " << miEdad << " años.\n";
   cout << "Usted tiene: " << suEdad << " años \n";
   miEdad++;
   ++suEdad;
   cout << "Pasa un año...\n";
   cout << "Ahora tengo: " << miEdad << " años.\n";
   cout << "Usted tiene: " << suEdad << " años \n";
   cout << "Pasa otro año\n";
   cout << "Ahora tengo: " << miEdad++ << " años.\n";
   cout << "Usted tiene: " << ++suEdad << " años \n";
   cout << "Imprimamos eso de nuevo.\n";
   cout << "Yo tengo: " << miEdad << " años.\n";
   cout << "Usted tiene: " << suEdad << " años \n";

   return 0;
}
