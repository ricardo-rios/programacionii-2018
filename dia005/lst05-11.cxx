#include <iostream>

using namespace std;


int fib(int n)
{
   cout << "Procesando fib(" << n << ")... ";
   if (n < 3)
   {
      cout << "!Regresa 1!\n";
      return 1;
   }

   else
   {
      cout << "Llama a fib(" << n-2 << ") y a fib(" << n-1 << ").\n";
      return (fib(n-2) + fib(n-1));
   }
}
