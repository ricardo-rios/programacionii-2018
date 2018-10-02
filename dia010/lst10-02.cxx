// Listado 10.2



#include <iostream>

using namespace std;

class Rectangulo
{
public:
     // constructores
     Rectangulo(int ancho, int altura);
     ~Rectangulo(){}
     void DibujarFigura(int unAncho, int unaAltura, bool UsarValsActuales = false) const;

private:
     int suAncho;
     int suAltura;
};

// Implementación del constructor
Rectangulo::Rectangulo(int ancho, int altura):
   suAncho(ancho), // inicializaciones
   suAltura(altura)
{} // cuerpo vacio


// valores predeterminados usados para el tercer parametro.
void Rectangulo::DibujarFigura(int ancho, int altura, bool UsarValActual) const
{
   int imprimeAncho;
   int imprimeAltura;

   if (UsarValActual == true)
   {
      // usar los valores actuales de la clase
      imprimeAncho = suAncho;
      imprimeAltura = suAltura;
   }

   else
   {
     // usar los valores actuales de la clase
     imprimeAncho = ancho;
     imprimeAltura = altura;
   }



   for (int i = 0; i < imprimeAltura; i++)
   {
      for (int j = 0; j < imprimeAncho; j++)
      {
         cout << "*";
      }
      cout << "\n";

   }

}



int main()
{
   // Inicializar un rectangulo co 30, 5
   Rectangulo elRect(30,5);
   cout << "DibujarFigura(): \n";
   elRect.DibujarFigura();
   cout << "\nDibujarFigura(40,2): \n";
   elRect.DibujarFigura(40,2);


   return 0;

}
