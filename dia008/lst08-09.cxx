// Listado 8.9


#include <iostream>

using namespace std;

typedef unsigned short int USHORT;

int main()
{
   USHORT * apInt = new USHORT;
   *apInt = 10;
   cout << "*apInt: " << *apInt << endl;
   delete apInt;

   long * apLong = new long;
   *apLong = 90000;
   cout << "*apLong: " << *apLong << endl;

   *apInt = 20; // caramba este fue eliminado!

   cout << "*apInt: " << *apInt << endl;
   cout << "*apLong: " << *apLong << endl;
   delete apLong; 

   return 0;

}
