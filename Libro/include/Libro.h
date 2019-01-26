#ifndef LIBRO_H
#define LIBRO_H
#include <iostream>
#include <cstring>
#include <cstdio>

class Libro
{
    private:

        char autore[30],titolo[30];
        int anno;

    public:
        char codice[30];

        Libro(char codice[],char autore[],char titolo[],int anno);
        Libro();

        char* getCodice();
        char* getAutore();
        char* getTitolo();
        int getAnno(void);

        void setAutore(char autore[]);
        void setCodice(char codice[]);
        void setTitolo(char titolo[]);
        void setAnno(int anno);


};

#endif // LIBRO_H
