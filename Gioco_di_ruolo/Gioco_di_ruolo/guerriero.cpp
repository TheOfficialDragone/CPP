//
//  guerriero.cpp
//  Gioco_di_ruolo
//
//  Created by Rocco Carpi on 08/06/21.
//

#include "guerriero.hpp"

Guerriero :: Guerriero(string n) : Personaggio()
{
    setNome(n);
    setForza(rand()%14+5);
    setItelligenza(rand()%12+1);
    setCarisma(rand()%16+1);
    setHp(rand()%30+1);
}

string Guerriero:: visualizza()
{
    string s;
    
    s += Personaggio :: visualizza_personaggio();
    
    return s;
}
