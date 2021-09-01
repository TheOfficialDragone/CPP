//
//  mezzi_di_consegna.cpp
//  Food_delivery
//
//  Created by Rocco Carpi on 31/08/21.
//

#include "mezzi_di_consegna.hpp"

void mezziDiconsegna:: set_modello(string a)
{
    modello = a;
}

void mezziDiconsegna:: set_disponibilita(int a)
{
    disponibilita = a;
}

mezziDiconsegna :: mezziDiconsegna(string modello_input, int disp_input)
{
    modello = modello_input;
    disponibilita = disp_input;
}
