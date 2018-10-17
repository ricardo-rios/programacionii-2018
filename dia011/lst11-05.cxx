// Listado 11.5


#include <iostream>

using namespace std;

enum RAZA {GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mamifero
{
public:
  // constructores
  Mamifero()
     { cout << "Constructor de mamifero...\n";  }
  ~Mamifero()
     { cout << "Destructor de mamifero...\n"; }
  // Otros metodos
  void Hablar() const
      { cout << "!Sonido de mamifero!\n"; }
  void Dormir() const
      { cout << "shhh. Estoy durmiendo.\n"; }


protected:
  int suEdad;
  int suPeso;
};

class Perro : public Mamifero
{
public:
  // Constructores
  Perro()
     { cout << "Constructor de Perro...\n"; }
  ~Perro()
     { cout << "Destructor de Perro...\n"; }
  // Otros metodos
  void MoverCola() const
       { cout << "Moviendo la cola...\n"; }
  void PedirAlimento() const
       { cout << "Pidiendo alimento...\n"; }
  void Hablar() const
       { cout << "!Guau!\n"; }

private:
  RAZA suRaza;


};




int main()
{
   Mamifero animalGrande;
   Perro fido;

   animalGrande.Hablar();
   fido.Hablar();

   return 0;
}
