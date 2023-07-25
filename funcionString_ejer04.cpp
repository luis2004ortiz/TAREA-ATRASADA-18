#include <iostream>

using namespace std;

string mensajePuedesVotar(string nombre, int edad)
{
    string aux="";
    if (edad>=1 && <16)
       aux="hola " + nombre + ", no puedes votar!!!";
    else if(edad>=16 && edad<65)
       aux="hola " + nombre + ", tu voto es opcional!!!";
    else if(edad>=65 && edad<90)
       aux="hola " + nombre + ", tu voto es opcional!!!";
    else 
       aux="hola " + nombre + ", tu voto es opcional!!!";

    return aux;


}

int main()
{
    cout<<endl<<mensajePuedesVotar("Jermy",15);
    cout<<endl<<mensajePuedesVotar("Hector",50);
    cout<<endl<<mensajePuedesVotar("Luis",99);

    return 0;
}