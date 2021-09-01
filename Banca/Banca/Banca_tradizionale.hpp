//
//  Banca_tradizionale.hpp
//  Banca
//
//  Created by Rocco Carpi on 18/05/21.
//

#ifndef Banca_tradizionale_hpp
#define Banca_tradizionale_hpp

#include <stdio.h>
#include <iostream>
#include "banca.hpp"

using namespace std;

class banca_tradizionale : public banca
{
    
public:
    int indirizzo_x;
    int indirizzo_y;
    string città;
    int ID_filiale;
    
    banca_tradizionale();
    banca_tradizionale(string nome,int x,int y,string citta,int ID);
    string localizza();
    
};
#endif /* Banca_tradizionale_hpp */
