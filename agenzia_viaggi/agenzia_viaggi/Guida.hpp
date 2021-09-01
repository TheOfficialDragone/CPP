//
//  Guida.hpp
//  agenzia_viaggi
//
//  Created by Rocco Carpi on 08/07/21.
//

#ifndef Guida_hpp
#define Guida_hpp

#include <stdio.h>
#include "Persona.hpp"
#include <string>

using namespace::std;

class guida : public persona
{
private:
    string lingue_parlate;
    
public:
    void set_lingue(string l);
    string get_lingue();
    
    guida(int id_input, string nome_input, string cognome_input, int e_input, string sesso_input,string lingue);
};
#endif /* Guida_hpp */
