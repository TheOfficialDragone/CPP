#ifndef CAMICIA_H
#define CAMICIA_H

#include <stdio.h>
#include <iostream>
#include <string>
#include "Vestito.h"


using namespace std;

class Camicia : public Vestito
{
    public:
        void set_saldo(bool s);
        bool get_saldo();
        string visualizza();
        int calcola_Prezzo();
        Camicia(string nome_input,string taglia_input,int prezzo_input,string colore_input, bool sconto_input);
        virtual ~Camicia();

    private:
        bool in_saldo;
};

#endif // CAMICIA_H
