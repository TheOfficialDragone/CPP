#ifndef NEGOZIO_H
#define NEGOZIO_H
#include <vector>
#include "Vestito.h"


class Negozio
{
    public:
        Negozio();
        Negozio(string n, string i): nome(n), indirizzo(i) {};
        string getNome() {return nome;}
        string getIndirizzo() {return indirizzo;}
        // setter di nome e indirizzo non sensati

        void aggiungiVestito(Vestito *v) {magazzino.push_back(v);}

        int cercaVestito(string nomeVestito);
        float faiConto(string nomeVestito, int quantita, Cliente c);

        void rimuoviVestito(string nomeVestito, int quantita);

        virtual ~Negozio();

    private:
        string nome;
        string indirizzo;
        vector<Vestito *> magazzino;
};

#endif // NEGOZIO_H
