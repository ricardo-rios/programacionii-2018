// Listado 11.2 Uso de un objeto derivado


#include <iostream>

using namespace std;

enum RAZA {GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mamifero
{
public:
  // constructores
  Mamifero() : suEdad(2), suPeso(5) {}
  ~Mamifero(){}
  // metodos de acceso
  int ObtenerEdad() const
      { return suEdad; }
  void AsignarEdad(int peso)
      { suPeso = peso; }
  int ObtenerPeso() const
      { return suPeso; }
  void AsignarPeso(int peso)
      { suPeso = peso; }
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
  Perro() : suRaza(GOLDEN){}
  ~Perro(){}
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


int main()
{
   Perro fido;
   fido.Hablar();
   fido.MoverCola();
   cout << "fido tiene ";
   cout << fido.ObtenerEdad() << " años de edad\n";

   return 0; 


}
