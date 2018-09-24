// Listado 8.4


#include <iostream>

using namespace std;

class GatoSimple
{
public:
      GatoSimple();
      ~GatoSimple();
private:
      int suEdad;
};

GatoSimple::GatoSimple()
{
   cout << "Se llamo al constructor.\n";
   suEdad = 1;
}

GatoSimple::~GatoSimple()
{
   cout << "Se llamo al destructor.\n";
}


int main()
{
   cout << "GatoSimple Pelusa....\n";
   GatoSimple Pelusa;
   cout << "GatoSimple *apFelix = new GatoSimple...\n";
   GatoSimple * apFelix = new GatoSimple;
   cout << "delete apFelix...\n";
   delete apFelix;
   cout << "saliendo, observe como se va Pelusa...\n"; 

   return 0;

}
