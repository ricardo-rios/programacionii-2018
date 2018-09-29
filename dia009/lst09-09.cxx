// Listado 9.8


#include <iostream>

using namespace std;

typedef unsigned short USHORT;
enum CODIGO_ERR { EXITO, ERROR };

CODIGO_ERR Factor(USHORT, USHORT &, USHORT &);

int main()
{
   USHORT numero, alcuadrado, alcubo;
   CODIGO_ERR resultado;

   cout << "Escriba un numero (0-20): ";
   cin >> numero;
   resultado = Factor(numero, alcuadrado, alcubo);

   if ( resultado == EXITO)
   {
      cout << "numero: " << numero << "\n";
      cout << "al cuadrado: " << alcuadrado << "\n";
      cout << "al cubo: " << alcubo << "\n";
   }

   else
      cout << "!Se encontro un error!\n";



   return 0;

}


CODIGO_ERR Factor(USHORT n, USHORT & rAlCuadrado, USHORT & rAlCubo)
{

   if (n > 20)
      return ERROR;
   else
   {
      rAlCuadrado = n * n;
      rAlCubo = n * n * n;
      return EXITO;
   }


}
