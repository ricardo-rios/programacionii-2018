// Muestra de la declaracion de un constructor
// y un destructor para la clase Gato


#include <iostream>

using namespace std;

class Gato
{
   public:
     Gato(int edadInicial); // constructor
     ~Gato();
     int ObtenerEdad();
     void AsignarEdad(int Edad);
     // funciones miembro publicas
     void Maullar();

   private:
     int suEdad;
};


Gato::Gato(int edadInicial)
{
   suEdad = edadInicial;
}

Gato::~Gato()
{

}

int Gato::ObtenerEdad()
{
  return suEdad;
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
  cout << "Pelusa es un gato que tiene ";
  cout << Pelusa.ObtenerEdad() << " años de edad.\n";
  Pelusa.Maullar();
  Pelusa.AsignarEdad(7);
  cout << "Pelusa es un gato que tiene ";
  cout << Pelusa.ObtenerEdad() << " años de edad.\n";
  Pelusa.Maullar();

  return 0;

}
