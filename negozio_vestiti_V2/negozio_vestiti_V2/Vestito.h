#ifndef VESTITO_H
#define VESTITO_H

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Vestito
{
    public:
        void set_nome(string n);
        string get_nome();

        void set_taglia(string t);
        string get_taglia();

        void set_prezzo(int p);
        int get_prezzo();

        void set_colore(string c);
        string get_colore();

       virtual string visualizza();

        Vestito(string nome_input,string taglia_input,int prezzo_input,string colore_input);
        virtual ~Vestito();
        int calcola_Prezzo();

    private:
        string nome;
        string taglia;
        int prezzo;
        string colore_principale;
};

#endif // VESTITO_H
