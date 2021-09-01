//
//  Rosticceria.cpp
//  Food_delivery
//
//  Created by Rocco Carpi on 31/08/21.
//

#include "Rosticceria.hpp"

Rosticceria::Rosticceria(string nome_input, int x_inp, int y_inp, float prezzo_input, string cibo_input,int costo_cons_input,vector<motorini>mezzi_input):foodDelivery(nome_input,x_inp,y_inp,prezzo_input,cibo_input)
{
    prezzo_consegna = costo_cons_input;
    parco_mezzi = mezzi_input;
}

void Rosticceria:: set_costo_consegna(int c)
{
    prezzo_consegna = c;
}
