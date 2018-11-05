// Listado 12.11


#include <iostream>
#include <string.h>

using namespace std;

// Clase String rudimentaria
class String
{
public:
  // Constructores
  String();
  String(const char * const);
  String(const String &);
  ~String();
  // operadores sobrecargados
  char & operator[] (unsigned short offset);
  char operator[] (unsigned short offset ) const;
  String operator+ (const String &);
  void operator+= (const String &);
  String & operator= (const String &);
  // metodos generales de acceso
  unsigned short GetLen() const
     { return itsLen; }
  const char * GetString() const
     { return itsString; }

private:
  String (unsigned short); // constructor privado
  char * itsString;
  unsigned short itsLen;
};

// constructor predeterminado crea una cadena de 0 bytes
String::String()
{
   itsString = new char[1];
   itsString[0] = '\0';
   itsLen = 0;
}


// constructor privado (ayudante), solo lo utilizan
// los métodos de la clase para crear una cadena nueva del
// tamaño requerido. LLena de caracteres nulos.

String::String(unsigned short len)
{
   itsString = new char [ len+1 ];

   for (unsigned short i=0; i <= len; i++)
      itsString[i] = '\0';
   itsLen = len;
}

// Convierte un arreglo de caracteres en una Cadena
String::String(const char * const cString)
{
   itsLen = strlen(cString);
   itsString = new char [ itsLen + 1 ];

   for (unsigned short i = 0; i < itsLen; i++)
      itsString[i] = cString[i];
   itsString[ itsLen ] = '\0';
}


// constructor de Copia
String::String(const String & rhs)
{
   itsLen = rhs.GetLen();
   itsString = new char [ itsLen + 1 ];

   for (unsigned short i = 0; i < itsLen; i++ )
      itsString[i] = rhs[i];
   itsString[ itsLen ] = '\0';
}


// destructor, libera la memoria asignada
String::~String()
{
   delete [] itsString;
   itsLen = 0;
}

// operador igual a, libera la memoria existente
// luego copia la cadena y el tamanho
String & String::operator= (const String & rhs)
{
   if (this == &rhs)
      return *this;
   delete [] itsString;
   itsLen = rhs.GetLen();
   itsString = new char[ itsLen + 1 ];
   for (unsigned short i = 0; i < itsLen; i++)
      itsString[i] = rhs[i];
   itsString[itsLen] = '\0';
   return *this;

}

// operador de desplazamiento no constante, !regresa
// referencia a caracter para que se pueda cambiar
char & String::operator[] (unsigned short offset)
{
   if (offset > itsLen)
      return itsString[ itsLen - 1 ];
   else
      return itsString[ offset ];
}


// crea una cadena nueva al agregar la cadena
// actual a rhs
String String::operator+ (const String & rhs)
{
   unsigned short totalLen = itsLen + rhs.GetLen();
   String temp(totalLen);
   unsigned short i;
   for (i = 0; i < itsLen; i++)
      temp[i] = itsString[i];
   for (unsigned short j = 0; j < rhs.GetLen(); j++, i++)
      temp[i] = rhs[j];
   temp[totalLen] = '\0';
   return temp;

}


// cambia la cadena actual, no regresa nada
void String::operator+= (const String & rhs)
{
   unsigned short rhsLen = rhs.GetLen();
   unsigned short totalLen = itsLen + rhsLen;
   String temp(totalLen);
   unsigned short i;

   for (i=0; i < itsLen; i++)
      temp[i] = itsString[i];
   for (unsigned short j = 0; j < rhs.GetLen(); j++, i++)
      temp[i] = rhs[ i - itsLen ];
   temp[ totalLen ] = '\0';
   *this = temp;
}

int main()
{
   String s1("Prueba inicial");
   cout << "S1:\t" << s1.GetString() << endl;

   char * temp = "!Hola, mundo!";
   s1 = temp;
   cout << "S1:\t" << s1.GetString() << endl;

   char tempDos[26];
   strcpy(tempDos, "; !es grandioso estar aqui!");
   s1 += tempDos;
   cout << "tempDos:\t" << tempDos << endl;
   cout << "S1:\t" << s1.GetString() << endl;

   cout << "S1[3]:\t" << s1[3] << endl;
   s1[3] = 'x';
   cout << "S1:\t" << s1.GetString() << endl;

   cout << "S1[999]:\t" << s1[999] << endl;

   String s2(" Otra cadena");
   String s3;
   s3 = s1 + s2;
   cout << "S3:\t" << s3.GetString() << endl;

   String s4;
   s4 = "¿Por que trabaja esta funcion?"; 
   cout << "S4:\t" << s4.GetString() << endl;


   return 0;

}
