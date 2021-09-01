//
//  Montatore.hpp
//  Linea_assemblaggio
//
//  Created by Rocco Carpi on 11/07/21.
//

#ifndef Montatore_hpp
#define Montatore_hpp

#include <stdio.h>
#include "Operaio.hpp"
#include <iostream>
using namespace::std;

class montatore : public operaio
{
private:
    int probabilita_pausa;
    int probabilita_fallimento;
    
public:
    montatore(string nome, string cognome, int id);
    
    
};

#endif /* Montatore_hpp */
