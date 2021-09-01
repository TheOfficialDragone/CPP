//
//  Operaio.cpp
//  Linea_assemblaggio
//
//  Created by Rocco Carpi on 11/07/21.
//

#include "Operaio.hpp"

void operaio:: set_nome(string nome_input)
{
    nome = nome_input;
}
string operaio:: get_nome()
{
    return nome;
}

void operaio:: set_cognome(string cognome_input)
{
    cognome = cognome_input;
}
string operaio:: get_cognome()
{
    return cognome;
}

void operaio:: set_matricola(int matricola_input)
{
    matricola = matricola_input;
}
int operaio:: get_matricola()
{
    return matricola;
}

void operaio:: lavora(linea l)
{
    
}


operaio:: operaio(string nome_input, string cognome_input,int id_input)
{
    nome = nome_input;
    cognome = cognome_input;
    matricola = id_input;
}
