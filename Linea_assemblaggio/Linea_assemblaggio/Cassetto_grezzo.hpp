//
//  Cassetto_grezzo.hpp
//  Linea_assemblaggio
//
//  Created by Rocco Carpi on 11/07/21.
//

#ifndef Cassetto_grezzo_hpp
#define Cassetto_grezzo_hpp

#include <stdio.h>
#include "Ascia.hpp"
#include <string>
using namespace::std;

class cassetto : public ascia
{
private:
    string nome_modello;
    
public:
    void set_nome();
    string get_nome();
    cassetto(string a, bool c);
};

#endif /* Cassetto_grezzo_hpp */
