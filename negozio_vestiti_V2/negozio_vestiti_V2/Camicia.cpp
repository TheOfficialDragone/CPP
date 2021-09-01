#include "Camicia.h"

void Camicia:: set_saldo(bool s)
{
    in_saldo = s;
}

bool Camicia:: get_saldo()
{
    return in_saldo;
}


int Camicia:: calcola_Prezzo()
{
    int prezzo_camicia = Camicia::get_prezzo();

    if(in_saldo == 1)
    {
       prezzo_camicia = prezzo_camicia * 85/100;       
        return prezzo_camicia;
    }else
        return prezzo_camicia;

}


string Camicia:: visualizza()
{
    string s = Vestito::visualizza();
     string p = "";
    if(in_saldo == 0)
    {
         p = "true";
    }
    else
    {
         p = "false";
    }
    s += " in saldo: " + p;

    return s;
}
Camicia::Camicia(string nome_input,string taglia_input,int prezzo_input,string colore_input, bool sconto_input) : Vestito( nome_input, taglia_input, prezzo_input, colore_input)
{
    in_saldo = sconto_input;
}

Camicia::~Camicia()
{
    //dtor
}
