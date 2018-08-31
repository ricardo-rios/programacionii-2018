#include <iostream>

using namespace std;

// funcion FuncionDeMuestra
// imprime un mensaje util

void FuncionDeMuestra()
{
   cout << "Estamos dentro de una FuncionDeMuestra\n";
}

int main()
{
   cout << "Estamos de dentro de la funcion main\n";
   FuncionDeMuestra();
   cout << "Estamos de regreso en main\n";
   return 0;
}
