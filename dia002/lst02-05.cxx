#include <iostream>

using namespace std;

int Suma(int x, int y)
{
   cout << "En suma(), se recibieron " << x << y << "\n"; 
   return (x+y); 
}

int main()
{
   cout << "Estoy en main()!\n"; 
   int a, b, c;
   cout << "Escriba dos numeros: ";
   cin >> a; 
   cin >> b; 
   cout << "\nLLamando a Suma()\n"; 
   c = Suma(a,b);
   cout << "De regreso en main().\n";
   cout << "c contiene el numero " << c; 
   cout << "\nSaliendo...\n\n"; 
   return 0;

}
