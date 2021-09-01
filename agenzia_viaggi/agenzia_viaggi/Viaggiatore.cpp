//
//  Viaggiatore.cpp
//  agenzia_viaggi
//
//  Created by Rocco Carpi on 08/07/21.
//

#include "Viaggiatore.hpp"

void viaggiatore::set_nazionalità(string n)
{
    nazionalità = n;
}

string viaggiatore:: get_nazionalità()
{
    return nazionalità;
}

viaggiatore :: viaggiatore(int id_input, string nome_input, string cognome_input, int e_input, string sesso_input,string nazionalita_input): persona( id_input,nome_input,cognome_input,e_input, sesso_input)
{
    set_nazionalità(nazionalita_input);
}
