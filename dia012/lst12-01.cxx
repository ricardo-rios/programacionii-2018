// Listado 12.1


#include <iostream>

using namespace std;

int main()
{
   int miArreglo[5];
   int i;

   for (i=0; i < 5; i++ )
   {
      cout << "Valor para miArreglo[" << i << "]: ";
      cin >> miArreglo[i];
   }

   for (i=0; i < 5; i++)
      cout << i << ": " << miArreglo[i] << "\n";
      
   return 0;

}
