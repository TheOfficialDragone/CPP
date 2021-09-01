//
//  Operaio.hpp
//  Linea_assemblaggio
//
//  Created by Rocco Carpi on 11/07/21.
//

#ifndef Operaio_hpp
#define Operaio_hpp

#include <stdio.h>
#include <string>
#include "Linea.hpp"
using namespace std;

class operaio
{
private:
    string nome;
    string cognome;
    int matricola;
    
public:
    void set_nome(string nome_input);
    string get_nome();
    void set_cognome(string cognome_input);
    string get_cognome();
    void set_matricola(int matricola_input);
    int get_matricola();
    void lavora(linea a);
    
    operaio(string nome_input, string cognome_input,int id_input);
};
#endif /* Operaio_hpp */
