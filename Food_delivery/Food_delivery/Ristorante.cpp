//
//  Ristorante.cpp
//  Food_delivery
//
//  Created by Rocco Carpi on 31/08/21.
//

#include "Ristorante.hpp"

void ristorante:: set_preparazione(int t)
{
    tempo_preparazione = t;
}

ristorante::ristorante(string nome_input, int x_inp, int y_inp, float prezzo_input, string cibo_input,int tempo_input,vector<Auto>mezzi_input) : foodDelivery(nome_input,x_inp,y_inp,prezzo_input,cibo_input)
{
 
    tempo_preparazione = tempo_input;
    parco_mezzi = mezzi_input;
}
