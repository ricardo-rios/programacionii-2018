#include <iostream>

using namespace std;

void intDiv(int x, int y)
{
   int z = x / y;
   cout << "z: " << z << endl;
}

void floatDiv(int x, int y)
{
   float a = (float)x;  // estilo antiguo 
   float b = static_cast<float>(y); // estilo preferido
   float c = a / b; 
 
   cout << "c: " << c << endl; 

}





int main()
{
   int x = 5, y = 3; 
   intDiv(x,y); 
   floatDiv(x,y); 
     
   return 0;
}
