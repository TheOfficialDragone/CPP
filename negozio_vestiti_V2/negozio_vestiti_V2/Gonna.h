#ifndef GONNA_H
#define GONNA_H

#include <stdio.h>
#include <iostream>
#include <string>

#include "Vestito.h"
#include "Cliente.h"

using namespace std;

class Gonna : public Vestito
{
    public:
        void set_sconto(float s);
        float get_sconto();
        string visualizza();
        int calcola_Prezzo(Cliente c);
        Gonna(string nome_input,string taglia_input,int prezzo_input,string colore_input,float sconto_input);
        virtual ~Gonna();

    private:
        float sconto;
};

#endif // GONNA_H
