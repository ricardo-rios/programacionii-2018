// Listado 8.11


#include <iostream>
#include <ctype.h>
#include <string.h>

bool ObtenerPalabra(char * cadena, char * palabra, int & desplazamientoDePalabra);

using namespace std;


// programa controlador
int main()
{
   const int tamBufer = 255;
   char buffer[ tamBufer + 1 ];
   char palabra[ tamBufer + 1 ];
   int desplazamientoDePalabra = 0;

   cout << "Escriba una cadena: ";
   cin.getline(buffer, tamBufer);
   while (ObtenerPalabra(buffer, palabra, desplazamientoDePalabra))
   {
     cout << "Obtuve esta palabra: " << palabra << endl;
   }

   return 0;
}


bool ObtenerPalabra(char * cadena, char * palabra, int & desplazamientoDePalabra)
{
   if (!cadena[ desplazamientoDePalabra ])
      return false;
   char * ap1, * ap2;

   // apuntar a la siguiente palabra
   ap1 = ap2 = cadena + desplazamientoDePalabra;

   // saltarse los primeros espacios en blancos
   for (int i=0; i < (int)strlen(ap1) && !isalnum(ap1[ 0 ]); i++)
      ap1++;

   if (!isalnum(ap1[ 0 ]))
      return false;

   ap2 = ap1;

   while (isalnum(ap2[ 0 ]))
      ap2++;

   int len = int (ap2 - ap1);

   strncpy(palabra, ap1, len);

   palabra[ len ] = '\0';

   for (int i = int(ap2 - cadena); i < (int)strlen(cadena) && !isalnum(ap2[ 0 ]); i++)
      ap2++;
   desplazamientoDePalabra = int(ap2 - cadena);
   return true;

}
