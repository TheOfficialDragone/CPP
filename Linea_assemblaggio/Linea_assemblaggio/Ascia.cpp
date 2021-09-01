//
//  Ascia.cpp
//  Linea_assemblaggio
//
//  Created by Rocco Carpi on 11/07/21.
//

#include "Ascia.hpp"

void ascia:: set_legno(string legno_input)
{
    tipo_legno = legno_input;
}

string ascia:: get_legno()
{
    return tipo_legno;
}

ascia :: ascia(string legno_input,bool a) : pezzo(a)
{
    tipo_legno = legno_input;
}
