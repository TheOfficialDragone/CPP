//
//  tour.hpp
//  agenzia_viaggi
//
//  Created by Rocco Carpi on 08/07/21.
//

#ifndef tour_hpp
#define tour_hpp

#include <stdio.h>
#include <string>
#include <vector>

#include "Viaggio.hpp"
#include "Viaggiatore.hpp"
#include "Guida.hpp"
using namespace std;

class tour : public viaggio
{
private:
    bool assicurazione;
    vector<guida>lista_guide;
public:
    void set_assicurazione(bool a);
    bool get_assicurazione();
    bool guidato();
    tour(int id_input,string dest_input,int cost_input,string inizio_input,string fine_input,int posti_input,bool a,vector<guida>lista_guide_input,vector<viaggiatore>lista_viaggiatori_input);
};

#endif /* tour_hpp */
