// Listado 12.9


#include <iostream>

using namespace std;


int main()
{
   char bufer[80];

   cout << "Escriba la cadena: ";
   cin.get(bufer, 79); // llegar hasta 79 o newline 
   cout << "Aqui esta el bufer: " << bufer << endl;

   return 0;

}
