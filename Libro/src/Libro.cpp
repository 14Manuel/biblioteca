#include "Libro.h"
#include <string.h>


Libro::Libro(char codice[],char autore[],char titolo[],int anno)
{
    strcpy(this->codice,codice);
    strcpy(this->autore,autore);
    strcpy(this->titolo,titolo);
    this->anno=anno;
}

Libro::Libro()
{
    //this->anno=nullptr;
    //this->codice=nullptr;
//this->titolo=nullptr;
    //this->autore=nullptr;
}

char* Libro::getCodice(void)
{
    return codice;
}

char* Libro::getAutore(void)
{
    return autore;
}

char* Libro::getTitolo(void)
{
    return titolo;
}

int Libro::getAnno(void)
{
    return anno;
}


