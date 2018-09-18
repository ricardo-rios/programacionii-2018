// Listado 7.12


#include <iostream>

using namespace std;


int main()
{
   unsigned short int numero;
   cout << "Escriba un numero entre 1 y 5: ";
   cin >> numero;

   switch (numero) {
     case 0: cout << "Demasiado pequeño, !lo siento!";
             break;

     case 5: cout << "!Buen trabajo!\n"; // la ejecucion pasa a la siguiente clausula case
     case 4: cout << "!Buena elección!\n"; // la ejecucion pasa a la siguiente clausula case
     case 3: cout << "!Excelente!\n"; // la ejecucion pasa a la siguiente clausula case
     case 2: cout << "!Magistral!\n"; // la ejecucion pasa a la siguiente clausula case
     case 1: cout << "!Increible!\n";
             break;
     default: cout << "!Demasiado grande!\n";
              break;

   }

   cout << "\n\n"; 
   return 0;

}
