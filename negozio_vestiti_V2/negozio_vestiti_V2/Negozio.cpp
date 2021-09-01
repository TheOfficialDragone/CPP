//
//  Negozio.cpp
//  negozio vestiti
//
//  Created by Rocco Carpi on 30/08/21.
//

#include "Negozio.h"

void Negozio:: set_nome(string n)
{
    nome = n;
}
string Negozio:: get_nome(){return nome;}

void Negozio:: set_indirizzo(string i)
{
    indirizzo = i;
}
string Negozio:: get_indirizzo(){return indirizzo;}

void Negozio:: set_magazzino(vector <Vestito> m)
{
    magazzino = m;
}
 vector <Vestito> Negozio::get_magazzino(){return magazzino;}

string Negozio:: visualizza()
{
    string s = "";
    
    s +=  "nome " + get_nome() + "" + "indirizzo " + get_indirizzo();
    
    return s;
}
int Negozio:: cercaVestito(string v)
{
    int cont = 0;
    
    for (auto p: magazzino)
    {
        if (p.get_nome() == v)
        {
            ++cont;
        }
    }
    return cont;
}

/**
 passo la quantita  e il nome del vestito
 return della spesa totale
 */
int Negozio:: faiConto(string v, int p)
{
    int prezzo_tot = 0;
    int q = p;
    if (cercaVestito(v) < p)
    {
        return -1;
    }else
    {
        for (auto a : magazzino)
        {
            if (a.get_nome() == v)
            {
                prezzo_tot += a.get_prezzo();
                q--;
                
                if (q == 0)
                {
                    break;
                }
            }
        }
    }
    
    return prezzo_tot;
}


Negozio::Negozio(string n_input,string indirizzo_input, vector <Vestito> magazzino_input)
{
    nome = n_input;
    indirizzo = indirizzo_input;
    magazzino = magazzino_input;
}


