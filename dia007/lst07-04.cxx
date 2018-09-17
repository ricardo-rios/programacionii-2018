// Listado 7.4
// Muestra de break y continue

#include <iostream>

using namespace std;


int main()
{
   unsigned short chico;
   unsigned long grande;
   unsigned long salto;
   unsigned long destino;
   const unsigned short MAXCHICO = 65535;

   cout << "Escriba un numero chico: ";
   cin >> chico;
   cout << "Escriba un numero grande: ";
   cin >> grande;
   cout << "Escriba un valor de salto: ";
   cin >> salto;
   cout << "Escriba un valor de destino: ";
   cin >> destino;
   cout << "\n";

   // establezca las 3 condiciones para detener el ciclo

   while (chico < grande && grande > 0 && chico < MAXCHICO)
   {
      chico++;

      if (chico % salto == 0)  // ¿saltar el decremento?
      {
         cout << "salto en " << chico << endl;
         continue;
      }

      if (grande == destino)  // ¿grande concuerda exactamente con destino?
      {
         cout << "!Destino alcanzado!";
         break;
      }

      grande -= 2;

   }


   cout << "\nChico: " << chico << " Grande: " << grande << endl;
   return 0;

}
