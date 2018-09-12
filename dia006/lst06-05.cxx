// Este programa no compilara


#include <iostream>

using namespace std;

class Gato
{
   public:
     Gato(int edadInicial); // constructor
     ~Gato();
     int ObtenerEdad() const;
     void AsignarEdad(int Edad);
     // funciones miembro publicas
     void Maullar();

   private:
     int suEdad;
};


Gato::Gato(int edadInicial)
{
   suEdad = edadInicial;
   cout << "Constructor de Gato\n";
}


Gato::~Gato()
{
   cout << "Destructor de Gato\n";
}

int Gato::ObtenerEdad() const
{
  return (suEdad++);
}

void Gato::AsignarEdad(int edad)
{
  suEdad = edad;
}


void Gato::Maullar()
{

  cout << "Miau.\n";

}


int main()
{
  Gato Pelusa(5);
  Pelusa.Maullar();
  Pelusa.Ladrar();
  Pelusa.suEdad = 7;
  return 0;

}
