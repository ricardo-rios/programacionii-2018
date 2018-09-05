
#include <iostream>

using namespace std;

void miFuncion(); // prototipo

int x=5, y=7;  // variables globales

int main()
{
   cout << "x desde la funcion main: " << x << "\n";
   cout << "y desde la funcion main: " << y << "\n";
   miFuncion();
   cout << "!Ya salimos de miFuncion!\n\n"; 
   cout << "x desde la funcion main: " << x << "\n";
   cout << "y desde la funcion main: " << y << "\n";

   return 0;
}

void miFuncion()
{
   int y = 10;

   cout << "x desde miFuncion: " << x << "\n";
   cout << "y desde miFuncion: " << y << "\n";

}
