//
//  Persona.hpp
//  agenzia_viaggi
//
//  Created by Rocco Carpi on 08/07/21.
//

#ifndef Persona_hpp
#define Persona_hpp

#include <stdio.h>
#include <string>

using namespace::std;

class persona
{
private:
    int id;
    string nome;
    string cognome;
    int età;
    string sesso;
    
public:
    void set_id(int id_input);
    int get_id();
    
    void set_nome(string n);
    string get_nome();
    
    void set_cognome(string c);
    string get_cognome();
    
    void set_eta(int e);
    int get_eta();
    
    void set_sesso(string s);
    string get_sesso();
    
    persona(int id_input, string nome_input, string cognome_input, int e_input, string sesso_input);
    
    
};
#endif /* Persona_hpp */
