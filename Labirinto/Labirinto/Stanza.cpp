//
//  Stanza.cpp
//  Labirinto
//
//  Created by Rocco Carpi on 26/07/21.
//

#include "Stanza.hpp"

Stanza :: Stanza(int n_stanza_input, int codice_ap_input, int t_apertura_input, Oggetto *o_input)
{
    numero_stanza = n_stanza_input;
    codice_apertura = codice_ap_input;
    tempo_apertura = t_apertura_input;
    p = o_input;
}

Stanza :: ~ Stanza()
{
    
}
