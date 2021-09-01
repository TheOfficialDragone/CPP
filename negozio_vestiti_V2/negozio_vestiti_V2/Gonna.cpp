#include "Gonna.h"

void Gonna:: set_sconto(float s)
{
    sconto = s;
}

float Gonna:: get_sconto()
{
    return sconto;
}

int Gonna:: calcola_Prezzo(Cliente c)
{
    char sesso_cliente = c.get_sesso();
    int prezzo_gonna = Gonna::get_prezzo();

    if(sesso_cliente == 'f')
    {
        prezzo_gonna = prezzo_gonna * (100 -(int)(sconto * 100))/100;
        return prezzo_gonna;
    }
    else
        return Gonna::get_prezzo();
}

string Gonna:: visualizza()
{
    string g = Vestito::visualizza();

    g+= "sconto applicato: " + to_string(sconto);

    return g;
}

Gonna::Gonna(string nome_input,string taglia_input,int prezzo_input,string colore_input,float sconto_input) : Vestito( nome_input, taglia_input, prezzo_input, colore_input)
{
   sconto = sconto_input;
}

Gonna::~Gonna()
{
    //dtor
}
