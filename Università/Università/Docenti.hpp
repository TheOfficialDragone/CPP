//
//  Docenti.hpp
//  Università
//
//  Created by Rocco Carpi on 27/05/21.
//

#ifndef Docenti_hpp
#define Docenti_hpp

#include "Persona.hpp"
#include "Corso_di_Laurea.hpp"

#include <stdio.h>

using namespace::std;

class Docente : public Persona
{
public:
    Docente(string nome_input,string cognome_input,int matricola_input,corso corso_input);
    Docente();
    string visualizza();
private:
    corso c;
};


#endif /* Docenti_hpp */
