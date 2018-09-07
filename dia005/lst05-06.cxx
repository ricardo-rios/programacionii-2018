// Listado 5.4 - muestra de parametros pasados por valor


#include <iostream>

using namespace std;

int Duplicador(int CantidadDuplicar);

int main()
{

   int resultado = 0;
   int entrada;

   cout << "Escriba un numero entre 0 y 10,000 para duplicarlo: ";
   cin >> entrada;

   cout << "\nAntes de llamar al duplicador...";
   cout << "\nentrada: " << entrada << " duplicada:" << resultado << "\n";

   resultado = Duplicador(entrada);

   cout << "\nRegresando del duplicador...";
   cout << "\nentrada: " << entrada << " duplicada:" << resultado << "\n";


   return 0;
}

int Duplicador(int original)
{
   if (original <= 10000)
      return original * 2;
   else
      return -1;
   cout << "!No puede llegar aquí!\n";
}
