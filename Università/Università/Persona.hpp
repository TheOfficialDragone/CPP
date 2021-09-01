//
//  Persona.hpp
//  Università
//
//  Created by Rocco Carpi on 13/05/21.
//

#ifndef Persona_hpp
#define Persona_hpp

#include <stdio.h>
#include <string>
using namespace std;

 class Persona
{
public:
    Persona();
    Persona(string nome_input, string cognome_input, int matricola_input);
    
    void set_nome(string a);
    void set_cognome(string c);
    void set_matricola(int m);
    
    string get_nome();
    string get_cognome();
    int get_matricola();
    
    string visualizza();
    
private:
    string nome;
    string cognome;
    int matricola;
};
#endif /* Persona_hpp */
