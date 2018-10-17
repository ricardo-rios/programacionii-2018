// Listado 11.3 LLamadas a los constructores y destructores


#include <iostream>

using namespace std;

enum RAZA {GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mamifero
{
public:
  // constructores
  Mamifero();
  ~Mamifero();
  // metodos de acceso
  int ObtenerEdad() const
      { return suEdad; }
  void AsignarEdad(int peso)
      { suPeso = peso; }
  int ObtenerPeso() const
      { return suPeso; }
  void AsignarPeso(int peso)
      { suPeso = peso; }
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
  Perro();
  ~Perro();
  // metodos de acceso
  RAZA ObtenerRaza() const
       { return suRaza; }
  void AsignarRaza(RAZA raza)
       { suRaza = raza; }
  // Otros metodos
  void MoverCola() const
       { cout << "Moviendo la cola...\n"; }
  void PedirAlimento() const
       { cout << "Pidiendo alimento...\n"; }

protected:
  RAZA suRaza;


};

Mamifero::Mamifero():
   suEdad(1),
   suPeso(5)
{
  cout << "Constructor de mamifero...\n";
}

Mamifero::~Mamifero()
{
  cout << "Destructor de mamifero..\n";
}

Perro::Perro():
   suRaza(GOLDEN)
{
  cout << "Constructor de Perro...\n";
}

Perro::~Perro()
{
  cout << "Destructor de Perro...\n";
}



int main()
{
   Perro fido;
   fido.Hablar();
   fido.MoverCola();
   cout << "fido tiene ";
   cout << fido.ObtenerEdad() << " años de edad\n";

   return 0;
}
