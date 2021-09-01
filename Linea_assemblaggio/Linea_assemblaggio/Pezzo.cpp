//
//  Pezzo.cpp
//  Linea_assemblaggio
//
//  Created by Rocco Carpi on 11/07/21.
//

#include "Pezzo.hpp"
void pezzo:: set_difettoso(bool a)
{
    difettoso = a;
}

bool pezzo:: get_difettoso()
{
    return difettoso;
}
pezzo:: pezzo(bool a)
{
    difettoso = a;
}
