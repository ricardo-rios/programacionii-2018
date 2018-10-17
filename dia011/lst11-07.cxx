// Listado 11.5


#include <iostream>

using namespace std;

enum RAZA {GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mamifero
{
public:
  void Mover() const
     { cout << "Mamifero se mueve un paso\n"; }
  void Mover(int distancia) const
  {
    cout << "Mamifero se mueve ";
    cout << distancia << " pasos\n";
  }

protected:
  int suEdad;
  int suPeso;
};

class Perro : public Mamifero
{
public:
  // Otros compiladores tal vez emitan una advertencia
  // de que se está ocultando una función!
  void Mover() const
     { cout << "Perro se mueve 5 pasos.\n"; }

};




int main()
{
   Mamifero animalGrande;
   Perro fido;

   animalGrande.Mover(2);
   fido.Mamifero::Mover(10);

   return 0;
}
