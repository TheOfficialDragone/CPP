#ifndef VESTITO_H
#define VESTITO_H
#include <iostream>
#include "Cliente.h"


using namespace std;


class Vestito
{
    public:
        Vestito();
        Vestito(string n, string t, string c, float p): nome(n), taglia(t), coloreprinc(c), prezzo(p) {};
        string getNome() {return nome;}
        string getTaglia() {return taglia;}
        string getColore() {return coloreprinc;}
        float getPrezzo() {return prezzo;}

        // no setter per nome, ok per taglia, colore e soprattutto prezzo
        void setTaglia(string t) {taglia=t;}
        void setColore(string c) {coloreprinc=c;}
        void setPrezzo(float p) {prezzo=p;}

        virtual float calcolaPrezzo(Cliente c) = 0;
        virtual ~Vestito();

    private:
        string nome;
        string taglia;
        string coloreprinc;
        float prezzo;
};

#endif // VESTITO_H
