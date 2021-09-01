//
//  Motorini.cpp
//  Food_delivery
//
//  Created by Rocco Carpi on 31/08/21.
//

#include "Motorini.hpp"

motorini::motorini(string modello_input, int disponibilita_input, int porzioni_input) : mezziDiconsegna(modello_input, disponibilita_input)
{
    numMaxPorzioni = porzioni_input;
}
