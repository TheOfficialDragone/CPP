//
//  chierico.cpp
//  Gioco_di_ruolo
//
//  Created by Rocco Carpi on 08/06/21.
//

#include "chierico.hpp"

Chierico :: Chierico(string n) : Personaggio()
{
    setNome(n);
    setForza(rand()%16+1);
    setItelligenza(rand()%12+1);
    setCarisma(rand()%12+8);
    setHp(rand()%20+1);
   // inventario = a;
}

string Chierico:: visualizza()
{
    string s;
    
    s += Personaggio :: visualizza_personaggio();
    
    return s;
}
