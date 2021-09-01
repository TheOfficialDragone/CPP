#include "Negozio.h"

Negozio::Negozio()
{
    //ctor
}

Negozio::~Negozio()
{
    //dtor
}

int Negozio::cercaVestito(string nomeVestito)
{
    int numero=0;

    for (auto v : magazzino)
        if (v->getNome()==nomeVestito)
            numero++;

    return numero;
}

float Negozio::faiConto(string nomeVestito, int quantita, Cliente c)
{
    float conto=0.0;
    int q=quantita;
    if (cercaVestito(nomeVestito)<quantita)
        return -1;

    for (auto v : magazzino)
        if (v->getNome()==nomeVestito)
        {
            conto += v->calcolaPrezzo(c);
            q--;
            if (q==0) // finiti i prodotti
                break;
        }
    return conto;
}

void Negozio::rimuoviVestito(string nomeVestito, int quantita)
{
    int q=quantita;

    for (vector<Vestito *>::iterator it=magazzino.begin(); it!=magazzino.end(); ++it)
        if (q>0 && (*it)->getNome()==nomeVestito)
        {
            it = magazzino.erase(it);
            q--;
            if (q==0)
                break;
        }
}
