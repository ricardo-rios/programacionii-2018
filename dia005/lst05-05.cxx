// Listado 5.4 - muestra de parametros pasados por valor


#include <iostream>

using namespace std;

void intercambiar(int x, int y);

int main()
{
   int x = 5, y=10;
   cout << "\nmain(). Antes del intercambio, x: " << x << " y:" << y << "\n";
   intercambiar(x,y);
   cout << "\nmain(). Despues del intercambio, x: " << x << " y:" << y << "\n";

   return 0;
}

void intercambiar(int x, int y)
{
   int temp;

   cout << "\nIntercambiar(). Antes del intercambio, x: " << x << " y:" << y << "\n";

   temp = x;
   x = y;
   y = temp;

   cout << "\nIntercambiar(). Despues del intercambio, x: " << x << " y:" << y << "\n";

}
