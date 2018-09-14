// Muestra las funciones en linea
// y la inclusion de archivos de encabezado


#include "lst06-06.hpp"


Gato::Gato(int edadInicial)  // constructor
{
   suEdad = edadInicial;
}


Gato::~Gato()  // destructor no realiza ninguna accion
{
}



int main()
{
  Gato Pelusa(5);
  Pelusa.Maullar();
  cout << "Pelusa es un gato que tiene ";
  cout << Pelusa.ObtenerEdad() << " años de edad.\n";
  Pelusa.Maullar();
  Pelusa.AsignarEdad(7);
  cout << "Ahora Pelusa tiene ";
  cout << Pelusa.ObtenerEdad() << " años de edad.\n";

  return 0;

}
