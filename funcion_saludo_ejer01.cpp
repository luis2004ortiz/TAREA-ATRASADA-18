#include <iostream>

using namespace std;

void saludo()
{
    cout<<endl<<"Hola bienvenidos a la Pucese Esmeraldas";
    cout<<endl<<"Primero de Tics";
}

void saludopersonalizado(string nombre)
{
    cout<<endl<<"hola"<<nombre<<", Bienvenido a esmeraldas, que distutes del mar!!!";
}

int main()
{

    cout<<"Uso de Funciones en C++";
    cout<<"La funcion saludo";

    saludo(); // primera llamda de la funcion
    cout<<endl<<"Regresar al main";

    cout<<endl;
    saludo(); // segunda llamda
    cout<<endl<<"Finalizado";

    saludopersonalizado("Jermy Ortiz");
    saludopersonalizado("Luis Plaza");
    saludopersonalizado("Hector Jorkini");



    return 0;
}
