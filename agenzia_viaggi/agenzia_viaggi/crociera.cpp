//
//  crociera.cpp
//  agenzia_viaggi
//
//  Created by Rocco Carpi on 07/07/21.
//

#include "crociera.hpp"
#include <string>
using namespace std;


 void crociera :: set_animazione(bool a)
{
     animazione_a_bordo = a;
 }

bool crociera :: get_animazione()
{
    return animazione_a_bordo;
}

crociera :: crociera(int id_input,string dest_input,int cost_input,string inizio_input,string fine_input,int posti_input,bool a,vector<viaggiatore>lista_viaggiatori_input) : viaggio(id_input,dest_input, cost_input,inizio_input,fine_input,posti_input,lista_viaggiatori_input)
{
    animazione_a_bordo = a;
}
