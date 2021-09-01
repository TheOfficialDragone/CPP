#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include <vector>
class Negozio;

using namespace std;


class Cliente
{
    public:
        Cliente();
        Cliente(string nc, char s): nomecognome(nc), sesso(s) {};

        string getNomeCognome() {return nomecognome;}
        char getSesso() {return sesso;}

        void compra(string nomeVestito, int quantita, vector<Negozio> citta, Negozio &n, float &prezzo);
        float compra(string nomeVestito, int quantita, Negozio n);

        virtual ~Cliente();

    private:
        string nomecognome;
        char sesso;
};

#endif // CLIENTE_H
