// Listado 7.1
// uso de ciclos con go to

#include <iostream>

using namespace std;


int main()
{
       int contador = 0;
ciclo: contador++;

       cout << "contador: " << contador << "\n";
       if (contador < 5)
          goto ciclo;

       cout << "Completo. Contador: " << contador << ".\n"; 
       return 0;

}
