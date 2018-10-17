// Listado 11.3 LLamadas a los constructores y destructores


#include <iostream>

using namespace std;

enum RAZA {GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mamifero
{
public:
  // constructores
  Mamifero();
  Mamifero(int edad);
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
  Perro(int edad);
  Perro(int edad, int peso);
  Perro(int edad, RAZA raza);
  Perro(int edad, int peso, RAZA raza);
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


Mamifero::Mamifero(int edad):
   suEdad(edad),
   suPeso(5)
{
  cout << "Constructor de mamifero(int)...\n";
}


Mamifero::~Mamifero()
{
  cout << "Destructor de mamifero..\n";
}

Perro::Perro():
   Mamifero(),
   suRaza(GOLDEN)
{
  cout << "Constructor de Perro...\n";
}


Perro::Perro(int edad):
   Mamifero(edad),
   suRaza(GOLDEN)
{
  cout << "Constructor de Perro(int)...\n";
}


Perro::Perro(int edad, int peso):
   Mamifero(edad),
   suRaza(GOLDEN)
{
  suPeso = peso;
  cout << "Constructor de Perro(int, int)...\n";
}

Perro::Perro(int edad, int peso, RAZA raza):
   Mamifero(edad),
   suRaza(raza)
{
  suPeso = peso;
  cout << "Constructor de Perro(int, int, RAZA)...\n";
}


Perro::Perro(int edad,  RAZA raza):
   Mamifero(edad),
   suRaza(raza)
{
  cout << "Constructor de Perro(int, RAZA)...\n";
}


Perro::~Perro()
{
  cout << "Destructor de Perro...\n";
}



int main()
{
   Perro fido;
   Perro rover(5);
   Perro buster(6, 8);
   Perro yorkie(3, GOLDEN);
   Perro dobbie(4, 20, DOBERMAN);
   fido.Hablar();
   rover.MoverCola();
   cout << "yorkie tiene ";
   cout << yorkie.ObtenerEdad() << " años de edad\n";
   cout << "dobbie pesa ";
   cout << dobbie.ObtenerPeso() << " libras\n";

   return 0;
}
