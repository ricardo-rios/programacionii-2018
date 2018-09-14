// lst06-06.hpp


#include <iostream>

using namespace std;

class Gato
{
   public:
     Gato(int edadInicial);
     ~Gato();
     int ObtenerEdad() const { return suEdad; } // en linea
     void AsignarEdad(int edad) { suEdad = edad; } // en linea
     void Maullar() const { cout << "Miau.\n";  } // en linea

   private:
     int suEdad;
};
