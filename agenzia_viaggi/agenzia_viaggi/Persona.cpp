//
//  Persona.cpp
//  agenzia_viaggi
//
//  Created by Rocco Carpi on 08/07/21.
//

#include "Persona.hpp"

void persona::set_id(int id_input)
{
    id = id_input;
}
int persona::get_id()
{
    return id;
}

void persona:: set_nome(string n)
{
    nome = n;
}
string persona:: get_nome()
{
    return nome;
}

void persona:: set_cognome(string c)
{
    cognome = c;
}
string persona::get_cognome()
{
    return cognome;
}

void persona::set_eta(int e)
{
    età = e;
}
int persona::get_eta()
{
    return età;
}

void persona::set_sesso(string s)
{
    sesso = s;
}
string persona::get_sesso()
{
    return sesso;
}

persona::persona(int id_input, string nome_input, string cognome_input, int e_input, string sesso_input)
{
    set_id(id_input);
    set_nome(nome_input);
    set_cognome(cognome_input);
    set_eta(e_input);
    set_sesso(sesso_input);
    
}
