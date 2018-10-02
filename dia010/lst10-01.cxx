// Listado 10.1



#include <iostream>

using namespace std;

class Rectangulo
{
public:
     // constructores
     Rectangulo(int ancho, int altura);
     ~Rectangulo(){}
     // funcion DibujarFigura() sobrecargada de la clase
     void DibujarFigura() const;
     void DibujarFigura(int unAncho, int unaAltura) const;

private:
     int suAncho;
     int suAltura;
};

// Implementación del constructor
Rectangulo::Rectangulo(int ancho, int altura)
{
   suAncho = ancho;
   suAltura = altura;
}

// Funcion DibujarFigura sobrecargada
void Rectangulo::DibujarFigura() const
{
   DibujarFigura(suAncho, suAltura);
}

// Funcion DibujarFigura sobrecargada - toma dos valores
// dibuja la figura con base en los parametros
void Rectangulo::DibujarFigura(int ancho, int altura) const
{
   for (int i = 0; i < altura; i++)
   {
      for (int j = 0; j < ancho; j++)
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
