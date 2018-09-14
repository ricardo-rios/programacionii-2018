// Muestra las funciones en linea
// y la inclusion de archivos de encabezado


#include "lst06-07.hpp"

Rectangulo::Rectangulo(int superior, int izquierdo, int inferior, int derecho)
{
  suSuperior = superior;
  suIzquierdo = izquierdo;
  suInferior = inferior;
  suDerecho = derecho;

  suSupIzq.AsignarX(izquierdo);
  suSupIzq.AsignarY(superior);

  suSupDer.AsignarX(derecho);
  suSupDer.AsignarY(superior);

  suInfIzq.AsignarX(izquierdo);
  suInfIzq.AsignarY(inferior);

  suInfDer.AsignarX(derecho);
  suInfDer.AsignarY(inferior);


}

// Calcular el área del rectángulo encontrando los lados
int Rectangulo::ObtenerArea() const
{
  int Ancho = suDerecho - suIzquierdo;
  int Altura = suSuperior - suInferior;
  return ( Ancho * Altura );


}


int main()
{
   // inicializar una variable Rectangulo local
   Rectangulo MiRectangulo(100, 20, 50, 80);

   int area = MiRectangulo.ObtenerArea();

   cout << "Area: " << area << "\n";
   cout << "Coordenada X superior izquierda:";
   cout << MiRectangulo.ObtenerSupIzq().ObtenerX() << endl;

   return 0;



}
