// Listado 7.12


#include <iostream>

using namespace std;


int main()
{

   int filas, columnas;
   char elCaracter;

   cout << "¿Cuantas filas? ";
   cin >> filas;
   cout << "¿Cuantas columnas? ";
   cin >> columnas;
   cout << "¿Cual caracter? ";
   cin >> elCaracter;

   for (int i=0; i<filas; i++)
   {
      for (int j=0; j<columnas; j++)
         cout << elCaracter;
      cout << "\n";


   }


   return 0;

}
