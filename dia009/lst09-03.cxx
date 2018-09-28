// Listado 9.1
// Muestra del uso de referencias.


#include <iostream>

using namespace std;


int main()
{

   int intUno;
   int & rUnaRef = intUno;

   intUno = 5;

   cout << "intUno:\t" << intUno << endl;
   cout << "rUnaRef:\t" << rUnaRef << endl;
   cout << "&intUno:\t" << &intUno << endl;
   cout << "&rUnaRef:\t" << &rUnaRef << endl;

   int intDos = 8;
   rUnaRef = intDos; // no es lo que usted piensa!
   cout << "\nintUno:\t" << intUno << endl;
   cout << "intDos:\t" << intDos << endl;
   cout << "rUnaRef:\t" << rUnaRef << endl;
   cout << "&intUno:\t" << &intUno << endl;
   cout << "&intDos:\t" << &intDos << endl;
   cout << "&rUnaRef:\t" << &rUnaRef << endl;


   return 0;

}
