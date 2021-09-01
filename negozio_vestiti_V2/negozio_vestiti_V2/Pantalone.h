#ifndef PANTALONE_H
#define PANTALONE_H

#include <stdio.h>
#include <iostream>
#include <string>

#include "Vestito.h"


using namespace std;

class Pantalone : public Vestito
{
    public:

        void set_fallato(bool f);
        bool get_fallato();

        Pantalone(string nome_input,string taglia_input,int prezzo_input,string colore_input, bool fallato_input);
        virtual ~Pantalone();
        string visualizza();
        int calcola_Prezzo();
    private:
        bool fallato;
};

#endif // PANTALONE_H
