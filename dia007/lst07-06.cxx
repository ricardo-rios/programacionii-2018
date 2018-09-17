// Listado 7.6


#include <iostream>

using namespace std;


int main()
{
   int contador = 0;

   cout << "¿Cuantos holas?: ";
   cin >> contador; 
 
   while(contador > 0)
   {
      cout << "!Hola!\n";
      contador--; 
   }

   cout << "Contador: " << contador << ".\n";
   return 0;

}
