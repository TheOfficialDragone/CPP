//
//  Viaggiatore.hpp
//  agenzia_viaggi
//
//  Created by Rocco Carpi on 08/07/21.
//

#ifndef Viaggiatore_hpp
#define Viaggiatore_hpp

#include <stdio.h>
#include "Persona.hpp"

using namespace::std;

class viaggiatore : public persona
{
private:
    string nazionalit√†;
    
public:
    void set_nazionalit√†(string n);
    string get_nazionalit√†();
    viaggiatore(int id_input, string nome_input, string cognome_input, int e_input, string sesso_input,string nazionalita_input);
};
#endif /* Viaggiatore_hpp */
