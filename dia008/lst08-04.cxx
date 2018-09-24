// Listado 8.4


#include <iostream>

using namespace std;



int main()
{
   int variableLocal = 5;
   int * apLocal = &variableLocal;
   int * apHeap = new int;

   *apHeap = 7;
   cout << "variableLocal: " << variableLocal << "\n";
   cout << "*apLocal: " << *apLocal << "\n";
   cout << "*apHeap: " << *apHeap << "\n";
   delete apHeap;
   apHeap = new int;
   *apHeap = 9;
   cout << "*apHeap: " << *apHeap << "\n";
   delete apHeap;


   return 0;

}
