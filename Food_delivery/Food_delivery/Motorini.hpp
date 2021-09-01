//
//  Motorini.hpp
//  Food_delivery
//
//  Created by Rocco Carpi on 31/08/21.
//

#ifndef Motorini_hpp
#define Motorini_hpp

#include <stdio.h>
#include <iostream>
#include "mezzi_di_consegna.hpp"

using namespace::std;

class motorini : public mezziDiconsegna
{
private:
   int velocitaMedia = 30;
    int numMaxPorzioni;
    
public:
    void set_porzioni(int p);
    int get_porzioni(){return numMaxPorzioni;}
    
    motorini(string modello_input, int disponibilita_input, int porzioni_input);
   
};
#endif /* Motorini_hpp */
