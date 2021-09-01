//
//  personaggio.cpp
//  Gioco_di_ruolo
//
//  Created by Rocco Carpi on 07/06/21.
//

#include "personaggio.hpp"
#include <stdio.h>
#include <string>

using namespace::std;

void Personaggio::setNome(string nome_input)
{
    nome = nome_input;
}

string Personaggio:: getNome()
{
    return nome;
}

void Personaggio:: setForza(int forza_input)
{
    forza = forza_input;
}

int Personaggio:: getForza()
{
    return forza;
}

void Personaggio:: setCarisma(int carisma_input)
{
    carisma = carisma_input;
}

int Personaggio:: getCarisma()
{
    return carisma;
}

void Personaggio:: setHp(int hp_input)
{
    hp = hp_input;
}

void Personaggio:: setItelligenza(int intelligenza_input)
{
    intelligenza = intelligenza_input;
}

int Personaggio:: getHp()
{
    return hp;
}

int Personaggio:: getIntelligenza()
{
    return intelligenza;
}


Personaggio :: Personaggio()
{
    
};


Personaggio :: Personaggio(string n, int f, int i, int c,int h)
{
    setNome(n);
    setForza(f);
    setItelligenza(i);
    setCarisma(c);
    setHp(h);
}


string Personaggio:: visualizza_personaggio()
{
    string s;
    
    s+= "nome personaggio:";
    s += getNome();
    s+= " forza:";
    s+= to_string(getForza());
    s+= " intelligenza:";
    s+= to_string(getIntelligenza());
    s += " carisma:";
    s += to_string(getCarisma());
    s+= " HP:";
    s+= to_string(getHp());
    
    return s;
}
