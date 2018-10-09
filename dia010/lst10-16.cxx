// Listado 10.5



#include <iostream>

using namespace std;

class Contador
{
public:
   Contador();
   ~Contador(){}
   int ObtenerSuVal() const
      { return suVal; }
   void AsignarSuVal(int x)
      { suVal = x; }

private:
  int suVal;

};


Contador::Contador():
   suVal(0)
{}

int main()
{
   int elShort = 5;
   Contador elCtr = elShort;
   cout << "elCtr: ";
   cout << elCtr.ObtenerSuVal() << endl; 

   return 0;

}
