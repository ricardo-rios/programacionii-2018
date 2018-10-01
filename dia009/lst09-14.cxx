// Listado 9.10


#include <iostream>

using namespace std;

class GatoSimple
{

public:
       GatoSimple(int edad, int peso);
       ~GatoSimple() {}
       int ObtenerEdad()
       { return suEdad; }
       int ObtenerPeso()
       { return suPeso; }

private:
       int suEdad;
       int suPeso;

};

GatoSimple::GatoSimple(int edad, int peso)
{
   suEdad = edad;
   suPeso = peso;
}

GatoSimple & LaFuncion();


int main()
{
   GatoSimple & rGato = LaFuncion();
   int edad = rGato.ObtenerEdad();
   cout << "!rGato tiene " << edad << " años de edad!\n";
   cout << "&rGato: "  << &rGato << endl;
   // Como nos deshacemos de esa memoria?
   GatoSimple * apGato = &rGato;
   delete apGato;
   // Hmmm?, ¿a quien se refiere ahora rGato??

   return 0;

}

GatoSimple & LaFuncion()
{
   GatoSimple * apPelusa = new GatoSimple(5, 9);
   cout << "apPelusa: " << apPelusa << endl;
   return *apPelusa;
}
