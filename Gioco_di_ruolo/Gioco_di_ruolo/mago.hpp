//
//  mago.hpp
//  Gioco_di_ruolo
//
//  Created by Rocco Carpi on 07/06/21.
//

#ifndef mago_hpp
#define mago_hpp

#include <stdio.h>
#include "personaggio.hpp"

using namespace::std;

class Mago : public Personaggio
{
public:
    
    Mago(string n);
   
    string visualizza();
};

#endif /* mago_hpp */
