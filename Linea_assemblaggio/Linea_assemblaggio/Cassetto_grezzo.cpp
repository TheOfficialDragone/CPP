//
//  Cassetto_grezzo.cpp
//  Linea_assemblaggio
//
//  Created by Rocco Carpi on 11/07/21.
//

#include "Cassetto_grezzo.hpp"

void cassetto:: set_nome()
{
    nome_modello = "cassetto di " + get_legno();
}

string cassetto:: get_nome()
{
    return nome_modello;
}

cassetto :: cassetto(string a, bool c) : ascia(a, c)
{
    nome_modello = "cassetto di " + a;
}
