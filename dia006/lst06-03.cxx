// Muestra de la declaracion de una clase y
// la definicion de los metodos de la clase.


#include <iostream>

using namespace std;

class Gato
{
   public:
     // elementos de acceso publicos
     int ObtenerEdad();
     void AsignarEdad(int Edad);
     // funciones miembro publicas
     void Maullar();

   private:
     int suEdad;
};


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
  Gato Pelusa;
  Pelusa.AsignarEdad(5);
  Pelusa.Maullar();
  cout << "Pelusa es un gato que tiene ";
  cout << Pelusa.ObtenerEdad() << " años de edad.\n";
  Pelusa.Maullar();

  return 0;

}
