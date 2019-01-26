#include <iostream>
#include "Libreria.h"
#include "Libro.h"

using namespace std;

int main()
{
    Libreria libreria;
    bool controllo;
    Libro l1=Libro ("123456","gigi","piero",2001);
    cout << "stiamo inserendo un oggetto" << endl;
    controllo=libreria.addLibro(l1);
    cout<<controllo<<endl;

    cout<<"stiamo togliendo un oggetto"<<endl;
    controllo=libreria.togliLibro("123456");
    cout<<controllo<<endl;

    return 0;
}
