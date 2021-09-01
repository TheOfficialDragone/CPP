//
//  Studente.cpp
//  Università
//
//  Created by Rocco Carpi on 13/05/21.
//

#include "Studente.hpp"

void Studente::set_corso(string a)
{
    a = corso_laurea;
}

Studente :: Studente(string nome_input,string cognome_input,int matricola_input,string corso_input) : Persona(nome_input, cognome_input,matricola_input)
{
    set_corso(corso_input);
}

string Studente:: get_corso()
{
    return corso_laurea;
}

string Studente::visualizza()
{
    string s = "";
    s+= Persona :: visualizza();
    s += " corso:";
    s+= get_corso();
    
    return s;
}
