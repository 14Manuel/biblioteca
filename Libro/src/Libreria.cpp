#include <iostream>
#include <cstring>
#include <cstdio>
#include "Libreria.h"
#include "Libro.h"
#define nmax 100



        Libreria::Libreria()
        {
            for(int i=0; i<nmax;i++)
            {
                controllo[i]=false;
            }
        }

        bool Libreria::addLibro(Libro libro)
        {
            for(int i=0;i<nmax;i++)
            {
                if(controllo[i]==false)
                {
                    libreria[i]=libro;
                    controllo[i]=true;
                    return true;
                }
            }
            return false;
        }

        bool Libreria::togliLibro(char code[])
        {
            for(int i=0;i<nmax;i++)
            {
                if(controllo[i]!=false)
                {
                    bool ctrl=true;
                    for(int j=0;code[j]!='\0';j++)
                    {
                        if(libreria[i].codice[j]!=code[j])
                        {
                            ctrl=false;
                            break;
                        }
                    }

                    if(ctrl==true)
                    {
                        controllo[i]=false;
                        return true;
                    }
                }
            }
            return false;
        }

        Libro Libreria:: cercaLibro(char code[])
        {
            for(int i=0;i<nmax;i++)
            {
                if(controllo[i]!=false)
                {
                    bool ctrl=true;
                    for(int j=0;code[j]!='\0';j++)
                    {
                        if(libreria[i].codice[j]!=code[j])
                        {
                            ctrl=false;
                            break;
                        }
                    }

                    if(ctrl==true)
                    {
                        return libreria[i];
                    }
                }
            }
            //eccezione
        }

