// Listado 9.4


#include <iostream>

using namespace std;

void intercambiar(int * x, int * y);

int main()
{
   int x = 5, y = 10;

   cout << "main(). Antes del intercambio, x: " << x << " y:" << y << "\n";
   intercambiar(&x, &y);
   cout << "main(). Despues del intercambio, x: " << x << " y:" << y << "\n";

   return 0;

}


void intercambiar(int * apx, int * apy)
{
  int temp;

  cout << "Intercambiar(). Antes del intercambio, ";
  cout << "*apx: " << *apx <<  " *apy: " << *apy << "\n";

  temp = *apx;
  *apx = *apy;
  *apy = temp;

  cout << "Intercambiar(). Después del intercambio, "; 
  cout << "*apx: " << *apx <<  " *apy: " << *apy << "\n";


}
