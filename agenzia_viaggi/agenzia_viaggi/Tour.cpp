//
//  tour.cpp
//  agenzia_viaggi
//
//  Created by Rocco Carpi on 08/07/21.
//

#include "Tour.hpp"

void tour:: set_assicurazione(bool a)
{
    assicurazione = a;
}

bool tour::guidato()
{
    if (lista_guide.empty())
    {
        return false;   // non c'è nessuna guida
    } else
    {
        return true;    //c'è almeno una guida
    }
}

bool tour:: get_assicurazione()
{
    return assicurazione;
}



tour :: tour(int id_input,string dest_input,int cost_input,string inizio_input,string fine_input,int posti_input,bool assicurazione_input,vector<guida>lista_guide_input,vector<viaggiatore>lista_viaggiatori_input):viaggio( id_input, dest_input, cost_input, inizio_input, fine_input, posti_input,lista_viaggiatori_input)
{
    assicurazione = assicurazione_input;
    lista_guide = lista_guide_input;
}
