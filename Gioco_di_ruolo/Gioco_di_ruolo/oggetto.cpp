//
//  oggetto.cpp
//  Gioco_di_ruolo
//
//  Created by Rocco Carpi on 07/06/21.
//

#include "oggetto.hpp"
#include <stdio.h>
using namespace::std;


void Oggetto:: set_nome(string nome_input)
{
    nome = nome_input;
}

string Oggetto:: get_nome()
{
    return nome;
}

void Oggetto:: set_successo(int successo_input)
{
    probabilita_successo = successo_input;
}

int Oggetto:: get_successo()
{
    return probabilita_successo;
}

Oggetto :: Oggetto(string a, int s)
{
    set_nome(a);
    set_successo(s);
};

Oggetto :: Oggetto()
{
    
};

void usa(Personaggio p)
{
    
};
