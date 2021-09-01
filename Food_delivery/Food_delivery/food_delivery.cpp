//
//  food_delivery.cpp
//  Food_delivery
//
//  Created by Rocco Carpi on 31/08/21.
//

#include "food_delivery.hpp"

void foodDelivery:: set_nome(string n)
{
    nome = n;
}

void foodDelivery:: set_x(int x)
{
    posizione_x = x;
}

void foodDelivery:: set_y(int y)
{
    posizione_y = y;
}

void foodDelivery:: set_prezzo(float p)
{
    prezzo = p;
}

void foodDelivery:: set_cibo(string c)
{
    cibo_tipico = c;
}

foodDelivery:: foodDelivery(string nome_input, int x_inp, int y_inp, float prezzo_input, string cibo_input)
{
    nome = nome_input;
    posizione_x = x_inp;
    posizione_y = y_inp;
    prezzo = prezzo_input;
    cibo_tipico = cibo_input;
}
