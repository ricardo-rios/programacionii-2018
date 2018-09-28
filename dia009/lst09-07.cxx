// Listado 9.4


#include <iostream>

using namespace std;

void intercambiar(int & rx, int & ry);

int main()
{
   int x = 5, y = 10;

   cout << "main(). Antes del intercambio, x: " << x << " y:" << y << "\n";
   intercambiar(x, y);
   cout << "main(). Despues del intercambio, x: " << x << " y:" << y << "\n";

   return 0;

}


void intercambiar(int & rx, int & ry)
{
  int temp;

  cout << "Intercambiar(). Antes del intercambio, ";
  cout << "rx: " << rx <<  " ry: " << ry << "\n";

  temp = rx;
  rx = ry;
  ry = temp;

  cout << "Intercambiar(). Después del intercambio, ";
  cout << "rx: " << rx <<  " ry: " << ry << "\n";


}
