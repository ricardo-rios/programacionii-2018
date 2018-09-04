// Listado 4.7 - una instruccion if
// compleja

#include <iostream>

using namespace std;

int main()
{
   // Pedir dos numeros
   // Asignar los numeros a primerNumero y segundoNumero
   // Si primerNumero es mayor que segundoNumero,
   // ver si primerNumero es un multiplo de segundoNumero
   // Si esto sucede, ver si son el mismo numero

   int primerNumero, segundoNumero;
   cout << "Escriba dos numeros.\nPrimero: ";
   cin >> primerNumero;
   cout << "\nSegundo: ";
   cin >> segundoNumero;
   cout << "\n\n";

   if (primerNumero >= segundoNumero)
   {
      if ((primerNumero % segundoNumero) == 0) // es primerNumero multiplo de segundoNumero
      {
         if (primerNumero == segundoNumero)
            cout << "!Son iguales!\n";
         else
            cout << "!El primer numero es multiplo del segundo!\n";

      }

      else
         cout << "!El primer numero no es multiplo del segundo!\n";

   }
   else
      cout << "!Hey! !El segundo es mas grande!\n"; 


   return 0;
}
