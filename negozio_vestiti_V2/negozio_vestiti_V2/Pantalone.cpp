#include "Pantalone.h"


void Pantalone::set_fallato(bool f)
{
    fallato = f;
}
bool Pantalone:: get_fallato()
{
    return fallato;
}

string Pantalone:: visualizza()
{
    string p = Vestito::visualizza();

    p +=  "fallato: " + to_string(fallato);

    return p;
}

int Pantalone::calcola_Prezzo()
{
    int prezzo_pantalone = Pantalone::get_prezzo();

    if(fallato == true)
    {
        prezzo_pantalone = prezzo_pantalone *70/100;
        return prezzo_pantalone;
    }else
        return prezzo_pantalone;
}



Pantalone::Pantalone(string nome_input,string taglia_input,int prezzo_input,string colore_input,bool fallato_input) : Vestito( nome_input, taglia_input, prezzo_input, colore_input)
{
   fallato = fallato_input;
}

Pantalone::~Pantalone()
{
    //dtor
}
