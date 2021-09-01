//
//  Linea.hpp
//  Linea_assemblaggio
//
//  Created by Rocco Carpi on 11/07/21.
//

#ifndef Linea_hpp
#define Linea_hpp
#include "Pezzo.hpp"
#include <stdio.h>
#include <vector>
using namespace std;

class linea : public pezzo
{

public:
    int cassette_giornaliere;
    vector<pezzo>cassette;
    vector<pezzo>asce;
    void set_cassette(int n);
    vector <pezzo> get_asce();
    int get_cassette();
    linea(int n, vector<pezzo>cassette_input,vector<pezzo>asce_input,bool a);
};

#endif /* Linea_hpp */
