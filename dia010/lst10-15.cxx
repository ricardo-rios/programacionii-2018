// Listado 10.5



#include <iostream>

using namespace std;

class GATO
{
public:
   GATO(); // constructor predeterminado
   int ObtenerEdad() const
       { return *suEdad; }
   int ObtenerPeso() const
       { return *suPeso; }
   void AsignarEdad(int edad)
       { *suEdad = edad; }
   GATO & operator=(const GATO &);

private:
   int * suEdad;
   int * suPeso;
};

GATO::GATO()
{
   suEdad = new int;
   suPeso = new int;
   *suEdad = 5;
   *suPeso = 9;
}


GATO & GATO::operator=(const GATO & rhs)
{
   if (this == &rhs)
      return * this;

   *suEdad = rhs.ObtenerEdad();
   *suPeso = rhs.ObtenerPeso();
   return *this;
}

int main()
{
   GATO pelusa;

   cout << "edad de pelusa: ";
   cout << pelusa.ObtenerEdad() << endl;
   cout << "Estableciendo edad de pelusa en 6...\n";
   pelusa.AsignarEdad(6);
   GATO bigotes;
   cout << "edad de bigotes: ";
   cout << bigotes.ObtenerEdad() << endl;
   cout << "copiando pelusa a bigotes...\n";
   bigotes = pelusa;
   cout << "edad de bigotes: ";
   cout << bigotes.ObtenerEdad() << endl;    

   return 0;

}
