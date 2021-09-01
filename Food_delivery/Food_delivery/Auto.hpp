//
//  Auto.hpp
//  Food_delivery
//
//  Created by Rocco Carpi on 31/08/21.
//

#ifndef Auto_hpp
#define Auto_hpp

#include <stdio.h>
#include <iostream>

#include "mezzi_di_consegna.hpp"

using namespace std;

class Auto : public mezziDiconsegna
{
private:
     int velocita = 60;
    
    
public:
    int get_velocita(){return velocita;}
    Auto(string modello_input, int disponibilita_input);
};
#endif /* Auto_hpp */
