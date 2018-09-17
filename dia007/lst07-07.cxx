// Listado 7.7


#include <iostream>

using namespace std;


int main()
{
   int contador = 0;

   cout << "¿Cuantos holas?: ";
   cin >> contador;

   do
   {
      cout << "!Hola!\n";
      contador--;
   } while(contador > 0);

   cout << "Contador: " << contador << ".\n";
   return 0;

}
