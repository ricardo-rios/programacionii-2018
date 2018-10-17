// Listado 10.1


#include <iostream>

using namespace std;

enum RAZA {GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mamifero
{
public:
  // constructores
  Mamifero();
  ~Mamifero();
  // metodos de acceso
  int ObtenerEdad() const;
  void AsignarEdad(int);
  int ObtenerPeso() const;
  void AsignarPeso(int);
  // Otros metodos
  void Hablar() const;
  void Dormir() const;
protected:
  int suEdad;
  int suPeso;
};

class Perro : public Mamifero
{
public:
  // Constructores
  Perro();
  ~Perro();
  // metodos de acceso
  RAZA ObtenerRaza() const;
  void AsignarRaza(RAZA);
  // Otros metodos
  void MoverCola();
  void PedirAlimento();

protected:
  RAZA suRaza;


};
