#include <iostream>

using namespace std;

int cuadrado(int num)
{
    int resultado = num*num;

    return resultado;
}

/*
int cuadrado2(int num)
{
    return num*num;
}
*/

int main()
{

    cout<<"Funcion que devuelva el cuadrado de un entero";
    cout<<endl<<"El cuadrado de 10 es"<<cuadrado(10); //primera forma para llenar la funcion

    int x= cuadrado(11); //sgunda forma para llenar la funcion
    cout<<endl<<"El cuadrado de 11 es "<<x;

    int num;
    cout<<"Ingrese el numero que desas calcular al cuadrado: ";
    cin>>num;
    cout<<"El cuadrado de "<<num<<" es "<<cuadrado(num);

    //Realizar la sumatoria de los cuadrados de los numeros del 1 al 20
    int suma=0;
    for  (int k=1; k<=20; k++)
    {
        suma+=cuadrado(k); //suma+suma+cuadrado(k)
    }
    cout<<endl<<"La suma de los cuadrados de los numeros de 1 al 20 es "<<suma;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
     


     

    return 0;
}