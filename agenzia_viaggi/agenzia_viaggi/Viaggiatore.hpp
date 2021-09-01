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
    string nazionalità;
    
public:
    void set_nazionalità(string n);
    string get_nazionalità();
    viaggiatore(int id_input, string nome_input, string cognome_input, int e_input, string sesso_input,string nazionalita_input);
};
#endif /* Viaggiatore_hpp */
