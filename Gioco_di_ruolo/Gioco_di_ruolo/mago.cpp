//
//  mago.cpp
//  Gioco_di_ruolo
//
//  Created by Rocco Carpi on 07/06/21.
//

#include "mago.hpp"
#include <stdio.h>
#include <math.h>
#include <ranlib.h>

using namespace std;
Mago :: Mago(string n) : Personaggio()
{
    setNome(n);
    setForza(rand()%10+1);
    setItelligenza(rand()%20+11);
    setCarisma(rand()%16+1);
    setHp(rand()%10+1);
}

string Mago :: visualizza()
{
    string s;
    
    s += Personaggio :: visualizza_personaggio();
    
    return s;
}
