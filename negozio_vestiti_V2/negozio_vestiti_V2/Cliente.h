#ifndef CLIENTE_H
#define CLIENTE_H

#include <stdio.h>
#include <iostream>
#include <string>

#include "Vestito.h"
#include "Negozio.h"
using namespace std;

class Cliente
{
    public:
        void set_nome(string n);
        string get_nome();
        

        void set_cognome(string c);
        string get_cognome();

        void set_sesso(char s_input);
        char get_sesso();

        string visualizza();

        int compra(Negozio n, Vestito v, int quantita );
    
        Cliente(string nome_input, string cognome_input,char sesso_input);
        virtual ~Cliente();

    

    private:
    string nome;
    string cognome;
    char sesso;
};

#endif // CLIENTE_H
