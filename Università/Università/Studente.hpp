//
//  Studente.hpp
//  Università
//
//  Created by Rocco Carpi on 13/05/21.
//

#ifndef Studente_hpp
#define Studente_hpp

#include "Persona.hpp"
#include <string>

using namespace::std;

class Studente : public Persona
{
public:
    Studente(string nome_input,string cognome_input,int matricola_input,string corso_input);
    Studente();
    void set_corso(string a);
    string get_corso();
    string visualizza();
    
private:
    string corso_laurea;
};

#endif /* Studente_hpp */
