//
//  banca_online.cpp
//  Banca
//
//  Created by Rocco Carpi on 18/05/21.
//

#include "banca_online.hpp"

void banca_online::set_sito(string a)
{
    a = indirizzo_web;
    
}

string banca_online::get_sito()
{
    return indirizzo_web;
}

banca_online::banca_online(string n,string url_web)
{
    nome = n;
    indirizzo_web = url_web;
}

string banca_online::localizza()
{
    return indirizzo_web;
}
