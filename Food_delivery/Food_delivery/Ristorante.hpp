//
//  Ristorante.hpp
//  Food_delivery
//
//  Created by Rocco Carpi on 31/08/21.
//

#ifndef Ristorante_hpp
#define Ristorante_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

#include "food_delivery.hpp"
#include "Auto.hpp"

using namespace std;

class ristorante : public foodDelivery
{
private:
    int tempo_preparazione;
    vector<Auto>parco_mezzi;
    
public:
    void set_preparazione(int t);
    int get_preparazione(){return tempo_preparazione;}
    
    vector<Auto> get_parco(){return parco_mezzi;}
    
    ristorante(string nome_input, int x_inp, int y_inp, float prezzo_input, string cibo_input,int tempo_input,vector<Auto>mezzi_input);
    
};

#endif /* Ristorante_hpp */
