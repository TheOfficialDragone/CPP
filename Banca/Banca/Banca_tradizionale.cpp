//
//  Banca_tradizionale.cpp
//  Banca
//
//  Created by Rocco Carpi on 18/05/21.
//

#include "Banca_tradizionale.hpp"

banca_tradizionale::banca_tradizionale(string n,int x,int y,string citt,int ID)
{
    nome = n;
    indirizzo_x = x;
    indirizzo_y = y;
    città = citt;
    ID_filiale = ID;
}

string banca_tradizionale::localizza()
{
    return città;
}
