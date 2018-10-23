// Listado 12.4


#include <iostream>

using namespace std;

class GATO
{
public:
  GATO()
  { suEdad = 1; suPeso = 5; }
  ~GATO() {}
  int ObtenerEdad() const
  { return suEdad; }
  int ObtenerPeso() const
  { return suPeso; }
  void AsignarEdad(int edad)
  { suEdad = edad; }

private:
  int suEdad;
  int suPeso;

};

int main()
{
   GATO * Familia[500];
   int i;
   GATO * apGato;

   for (i=0; i < 500; i++)
   {
      apGato = new GATO;
      apGato->AsignarEdad(2 * i + 1);
      Familia[i] = apGato;
   }

   for(i=0; i < 500; i++)
   {
      cout << "Gato #" << i + 1 << ": ";
      cout << Familia[i]->ObtenerEdad() << endl;
   }


   return 0;

}
