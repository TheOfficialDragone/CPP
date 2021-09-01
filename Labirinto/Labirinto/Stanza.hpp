//
//  Stanza.hpp
//  Labirinto
//
//  Created by Rocco Carpi on 26/07/21.
//

#ifndef Stanza_hpp
#define Stanza_hpp

#include <iostream>
#include "Oggetto.hpp"
#include <stdio.h>

class Stanza 
{
private:
    int numero_stanza;
    int codice_apertura;
    int tempo_apertura;
    Oggetto *p;
    
public:
    Stanza(int n_stanza_input, int codice_ap_input, int t_apertura_input, Oggetto *o_input);
    string visualizza();
    
    ~ Stanza();
};
#endif /* Stanza_hpp */
