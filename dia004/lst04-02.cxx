// Listado 4.2 - muestra la resta y 
// el desbordamiento de enteros

#include <iostream>

using namespace std;

int main()
{
   unsigned int diferencia; 
   unsigned int numeroGrande = 100; 
   unsigned int numeroChico = 50;
  
   diferencia = numeroGrande - numeroChico; 
   cout << "La diferencia es: " << diferencia; 
   diferencia = numeroChico - numeroGrande;    
   cout << "\nAhoraLa diferencia es: " << diferencia << endl;   
     
   return 0;
}
