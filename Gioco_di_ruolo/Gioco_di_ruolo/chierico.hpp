//
//  chierico.hpp
//  Gioco_di_ruolo
//
//  Created by Rocco Carpi on 08/06/21.
//

#ifndef chierico_hpp
#define chierico_hpp

#include <stdio.h>

#include "personaggio.hpp"
#include "cura.hpp"
#include <list>

using namespace::std;

class Chierico : Personaggio
{
public:
   // list<Cura>inventario;
    Chierico(string n);
    
    string visualizza();
};
#endif /* chierico_hpp */
