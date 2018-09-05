
#include <iostream>

using namespace std;

float Convertir(float); // prototipo de la funcion

int main()
{
   float TempFar;
   float TempCen;

   cout << "Escriba la temperatura en grados Fahrenheit: ";
   cin >> TempFar;
   TempCen = Convertir(TempFar);
   cout << "\nAqui esta la temperatura en grados centigrados: ";
   cout << TempCen << endl;

   return 0;
}

float Convertir(float TempFar)
{
   float TempCen;

   TempCen = ((TempFar - 32)*5) / 9;
   return TempCen;

}
