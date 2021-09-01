#include "Vestito.h"


void Vestito::set_nome(string n)
{
    nome = n;
}

string Vestito::get_nome()
{
    return nome;
}

void Vestito::set_taglia(string t)
{
    taglia = t;
}
string Vestito::get_taglia()
{
    return taglia;
}

void Vestito::set_prezzo(int p)
{
    prezzo = p;
}
int Vestito::get_prezzo()
{
    return prezzo;
}

void Vestito::set_colore(string c)
{
    colore_principale = c;
}
string Vestito::get_colore()
{
    return colore_principale;
}

int Vestito :: calcola_Prezzo() {return 0;};



string Vestito::visualizza()
{
    string s = " ";
    s+= "Nome: "+ nome +  " Taglia: "+taglia +  " Prezzo: " +to_string(prezzo) + " Colore: " + colore_principale;
    return s;
}

Vestito::Vestito(string nome_input,string taglia_input,int prezzo_input,string colore_input)
{
    nome = nome_input;
    taglia = taglia_input;
    prezzo = prezzo_input;
    colore_principale = colore_input;
}


Vestito::~Vestito()
{
    //dtor
}
