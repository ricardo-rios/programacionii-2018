#include <iostream>

using namespace std;

// funcion FuncionDeMuestra
// imprime un mensaje util

void FuncionDeMuestra()
{
   cout << "Estamos dentro de una funcion\n"; 
}

int main()
{
   cout << "Estamos de dentro de la funcion main\n";
   FuncionDeMuestra(); 
   cout << "Estamos de regreso dentro de la funcion main\n";
   return 0;  
}
