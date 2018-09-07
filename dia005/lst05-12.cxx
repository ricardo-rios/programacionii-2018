#include <iostream>
#include "lst05-11.h"

using namespace std;

// Listado 5.12 muestra el uso de bibliotecas

int main()
{
   int n, respuesta;
   cout << "Escriba el número a encontrar: ";
   cin >> n;
   cout << "\n\n";

   respuesta = fib(n);

   cout << respuesta << " es el numero " << n << " en la serie de Fibonacci\n";

   return 0;
}
