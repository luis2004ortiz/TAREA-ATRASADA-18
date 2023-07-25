#include <iostream>

using namespace std;

void tablaMultiplicar(int tabla)
{
    cout<<endl<<"Tabla de multiplicar de "<<tabla;
    for (int k=1; k<=10;  k++)
    {
        cout<<endl<<tabla<<" X "<< k<< " = " <<(tabla*k);
    }
    

}

int main()
{
  cout<<endl<<"Funcion que imprima en pantalla la tabla d multiplicar de un entero";
  tablaMultiplicar(3);
  tablaMultiplicar(5);
  tablaMultiplicar(10);

  //Imprima las 20 tablas de multiplicar


   int suma=0;
  for (int k=1; k<=20;  k++)
    {
        tablaMultiplicar(k);
    }

  return 0;
}