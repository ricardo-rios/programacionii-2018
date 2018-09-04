// Listado 4.9 - muestra el uso apropiado de las llaves
// en instrucciones if anidadas

#include <iostream>

using namespace std;

int main()
{
   int x, y, z;
   cout << "Escriba dos numeros.\n";
   cout << "Primero: ";
   cin >> x;
   cout << "\nSegundo: ";
   cin >> y;
   cout << "\n";

   if (x > y)
      z = x;
   else
      z = y;

   cout << "z: " << z;
   cout << "\n";

   z = (x > y) ? x : y;

   cout << "z: " << z;
   cout << "\n";
   
   return 0;
}
