//
//  crociera.hpp
//  agenzia_viaggi
//
//  Created by Rocco Carpi on 07/07/21.
//

#ifndef crociera_hpp
#define crociera_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "Viaggio.hpp"

using namespace std;

class crociera : public viaggio
{
private:
    bool animazione_a_bordo;
    
public:
    void set_animazione(bool a);
    bool get_animazione();
    crociera(int id_input,string dest_input,int cost_input,string inizio_input,string fine_input,int posti_input,bool a,vector<viaggiatore>lista_viaggiatori_input);
};
#endif /* crociera_hpp */
