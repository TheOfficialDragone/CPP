//
//  Linea.cpp
//  Linea_assemblaggio
//
//  Created by Rocco Carpi on 11/07/21.
//

#include "Linea.hpp"
void linea:: set_cassette(int n)
{
    cassette_giornaliere = n;
}
int linea :: get_cassette()
{
    return cassette_giornaliere;
}
vector<pezzo> linea :: get_asce()
{
    return asce;
}

linea:: linea(int n, vector<pezzo>cassette_input,vector<pezzo>asce_input,bool a) : pezzo(a)
{
    cassette_giornaliere = n;
    cassette = cassette_input;
    asce = asce_input;
}
