// Listado 9.10


#include <iostream>

using namespace std;

class GatoSimple
{

public:
       GatoSimple(); 
       GatoSimple(GatoSimple &); // constructor de copia 
       ~GatoSimple(); // destructor
       int ObtenerEdad() const 
       { return suEdad; }
       void AsignarEdad(int edad)
       { suEdad = edad; }

private:
       int suEdad; 

}; 

GatoSimple::GatoSimple()
{
   cout << "Constructor de GatoSimple...\n"; 
   suEdad = 1; 
}

GatoSimple::GatoSimple(GatoSimple &)
{
   cout << "Constructor de copia de GatoSimple...\n"; 
}

GatoSimple::~GatoSimple()
{
   cout << "Destructor de GatoSimple...\n"; 
}


const GatoSimple * FuncionDos(const GatoSimple * const elGato);

int main()
{
   cout << "Crear un gato...\n";
   GatoSimple Pelusa; 
   cout << "Pelusa tiene "; 
   cout << Pelusa.ObtenerEdad(); 
   cout << " años de edad\n"; 
   int edad = 5; 
   Pelusa.AsignarEdad(edad); 
   cout << "Pelusa tiene "; 
   cout << Pelusa.ObtenerEdad(); 
   cout << " años de edad\n"; 
   cout << "LLamando a FuncionDos...\n";
   FuncionDos(&Pelusa); 
   cout << "Pelusa tiene "; 
   cout << Pelusa.ObtenerEdad(); 
   cout << " años de edad\n"; 
 

   return 0;

}




// FuncionDos, pasa por referencia 
const GatoSimple * FuncionDos(const GatoSimple * const elGato)
{
   cout << "FuncionDos. Regresando...\n"; 
   cout << "Ahora Pelusa tiene " << elGato->ObtenerEdad(); 
   cout << " años de edad \n"; 
   // elGato->AsignarEdad(8); 
 
   return elGato;

}
