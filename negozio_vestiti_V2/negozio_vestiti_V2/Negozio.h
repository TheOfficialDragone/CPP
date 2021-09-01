#ifndef NEGOZIO_H
#define NEGOZIO_H


#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>


#include "Vestito.h"


using namespace std;

class Negozio
{
    public:
        void set_nome(string n);
        string get_nome();

        void set_indirizzo(string i);
        string get_indirizzo();

        void set_magazzino(vector <Vestito> m);
        vector <Vestito>get_magazzino();

        string visualizza();
        int cercaVestito(string v);
        int faiConto(string v, int p);
    
        Negozio(string n_input,string indirizzo_input, vector <Vestito> magazzino_input);
        

    private:
        string nome;
        string indirizzo;
       vector <Vestito> magazzino;

};

#endif // NEGOZIO_H
