//
//  Docenti.cpp
//  Università
//
//  Created by Rocco Carpi on 27/05/21.
//

#include "Docenti.hpp"

Docente::Docente(string nome_input,string cognome_input,int matricola_input,corso corso_input):Persona(nome_input, cognome_input, matricola_input)
{
    c = corso_input;
}

Docente :: Docente()
{
    
}

string  Docente :: visualizza()
{
    string s = "";
    
    s += Persona :: visualizza();
    s += " nome corso ";
    s+= c.get_nome();
    
    return s;
}
