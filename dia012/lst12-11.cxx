// Listado 12.11


#include <iostream>
#include <string.h>

using namespace std;


int main()
{
   char *Cadena1 = "!Asi, siempre asi he de verte!";
   char Cadena2[80] = "sss";
   char Cadena3[80] = "";


   cout << "Cadena1: " << Cadena1 << endl;
   strcpy(Cadena2, Cadena1);
   cout << "Cadena2: " << Cadena2 << endl;
   strncpy(Cadena3, Cadena1, 5); // no es toda la cadena
   Cadena3[5] = '\0'; // Necesita un terminador nulo
   cout << "Cadena3 despues de strncpy: ";
   cout << Cadena3 << endl;
   cout << "Cadena1 mide " << strlen(Cadena1) << " bytes de largo, \n";
   cout << "Cadena2 mide " << strlen(Cadena2) << " bytes de largo, \n";
   cout << " y Cadena3 mide " << strlen(Cadena3) << " bytes de largo " << endl;
   strcat(Cadena3, Cadena1);
   cout << "Cadena3 despues de strcat: " << Cadena3 << endl;
   cout << "Cadena1 aun mide " << strlen(Cadena1) << " bytes de largo, \n";
   cout << "Cadena2 aun mide " << strlen(Cadena2) << " bytes de largo, \n";
   cout << "y Cadena3 ahora mide " << strlen(Cadena3) << " bytes de largo " << endl;
   Cadena1 = "Alli estas hoy, junto a la tienda de Ayax...";
   cout << "Cadena1: " << Cadena1 << endl;
   strcat(Cadena3, Cadena1);
   cout << "Cadena3 despues de strcat2: " << Cadena3 << endl;
   cout << "Cadena1 mide ahora " << strlen(Cadena1) << " bytes de largo, \n";
   cout << "Cadena2 aun mide " << strlen(Cadena2) << " bytes de largo, \n";
   cout << "y Cadena3 mide ahora " << strlen(Cadena3) << " bytes de largo" << endl;

   return 0;

}
