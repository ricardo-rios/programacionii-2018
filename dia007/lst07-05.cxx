// Listado 7.1
// uso de ciclos con go to

#include <iostream>

using namespace std;


int main()
{
   int contador = 0;

   while(true)
   {
      contador++;
      if (contador > 10)
         break;
   }

   cout << "Contador: " << contador << ".\n";
   return 0;

}
