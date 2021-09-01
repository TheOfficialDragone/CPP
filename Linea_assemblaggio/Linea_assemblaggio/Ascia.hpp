//
//  Ascia.hpp
//  Linea_assemblaggio
//
//  Created by Rocco Carpi on 11/07/21.
//

#ifndef Ascia_hpp
#define Ascia_hpp

#include <stdio.h>
#include <string>
#include "Pezzo.hpp"

using namespace::std;

class ascia : public pezzo
{
private:
    string tipo_legno;
    
public:
    void set_legno(string legno_input);
    string get_legno();
    ascia(string legno_input,bool a);
};

#endif /* Ascia_hpp */
