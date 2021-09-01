#include "Cliente.h"
#include "Negozio.h"

Cliente::Cliente()
{
    //ctor
}

Cliente::~Cliente()
{
    //dtor
}

void Cliente::compra(string nomeVestito, int quantita, vector<Negozio> citta, Negozio &n, float &prezzo)
{
    prezzo = 10000000.0;

    for (auto neg : citta)
        if (neg.faiConto(nomeVestito,quantita,*this)!=-1 && neg.faiConto(nomeVestito,quantita,*this)<prezzo)
        {
            n=neg;
            prezzo=n.faiConto(nomeVestito,quantita,*this);
        }
}

float Cliente::compra(string nomeVestito, int quantita, Negozio n)
{
    float prezzo = n.faiConto(nomeVestito,quantita,*this);
    if (prezzo!=-1)
    {
        n.rimuoviVestito(nomeVestito,quantita);
        return prezzo;
    }
    return -1;
}
