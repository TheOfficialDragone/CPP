//
//  Guida.cpp
//  agenzia_viaggi
//
//  Created by Rocco Carpi on 08/07/21.
//

#include "Guida.hpp"


void guida::set_lingue(string l)
{
    lingue_parlate = l;
}

string guida:: get_lingue()
{
    return lingue_parlate;
}

guida :: guida(int id_input, string nome_input, string cognome_input, int e_input, string sesso_input,string lingue) : persona(id_input,nome_input,cognome_input,e_input, sesso_input)
{
    set_lingue(lingue);
}
