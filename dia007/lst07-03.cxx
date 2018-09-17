// Listado 7.2
// uso de ciclos con while

#include <iostream>

using namespace std;


int main()
{
   unsigned short chico;
   unsigned long grande;
   const unsigned short MAXCHICO = 65535;

   cout << "Escriba un numero chico: ";
   cin >> chico;
   cout << "Escriba un numero grande: ";
   cin >> grande;

   cout << "chico: " << chico << "...";

   // para cada iteracion evaluar tres condiciones

   while (chico < grande && grande > 0 && chico < MAXCHICO)
   {
      if (chico % 5000 == 0)
         cout << ".";

      chico++;

      grande-=2;

   }


   cout << "\nChico: " << chico << " Grande: " << grande << endl;
   return 0;

}
