#ifndef LIBRERIA_H
#define LIBRERIA_H
#include "Libro.h"
#define nmax 100


class Libreria
{
    private:
        Libro libreria[nmax];
        bool controllo[nmax];
        int numlibri;

    public:

        Libreria();


        bool addLibro(Libro libro);

        bool togliLibro(char code[]);


        Libro cercaLibro(char code[]);
};

#endif // LIBRERIA_H
