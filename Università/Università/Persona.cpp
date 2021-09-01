//
//  Persona.cpp
//  Università
//
//  Created by Rocco Carpi on 13/05/21.
//

#include "Persona.hpp"
#include <stdio.h>
#include <string>
using namespace std;

void Persona ::  set_nome(string a)
{
    nome = a;
}

void Persona ::  set_cognome(string c)
{
    cognome = c;
}

void Persona ::  set_matricola(int m)
{
    matricola =  m;
}


Persona :: Persona(string nome_input, string cognome_input, int matricola_input)
{
    set_nome(nome_input);
    set_cognome(cognome_input);
    set_matricola(matricola_input);
}

Persona :: Persona()
{
    
}
string Persona::get_nome()
{
    return nome;
}

string Persona::get_cognome()
{
    return cognome;
}

int Persona:: get_matricola()
{
    return matricola;
}

string Persona:: visualizza()
{
    string s = "";
    
    s += "nome: ";
    s+= get_nome();
    s+=" cognome: ";
    s+= get_cognome();
    s+= " matricola: ";
    s+= to_string(get_matricola());
    
    return s;
}
