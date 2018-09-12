// Declaracion de la clase Gato
// Los datos miembro son privados, los metodos de acceso publicos
// se encargan de asignar y obtener los valores de los datos privados


class Gato
{
public:
  // elementos de acceso publicos
  unsigned int ObtenerEdad();
  void AsignarEdad(unsigned int Edad);

  unsigned int ObtenerPeso();
  void AsignarPeso(unsigned int Peso);

  // funciones miembro publicas
  void Maullar();

private:
  unsigned int suEdad;
  unsigned int suPeso;


}
