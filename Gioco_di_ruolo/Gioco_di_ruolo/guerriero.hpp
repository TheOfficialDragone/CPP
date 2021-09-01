//
//  guerriero.hpp
//  Gioco_di_ruolo
//
//  Created by Rocco Carpi on 08/06/21.
//

#ifndef guerriero_hpp
#define guerriero_hpp

#include <stdio.h>
#include "personaggio.hpp"

using namespace::std;

class Guerriero : public Personaggio
{
public:
    Guerriero(string n);
    
    string visualizza();
};
#endif /* guerriero_hpp */
