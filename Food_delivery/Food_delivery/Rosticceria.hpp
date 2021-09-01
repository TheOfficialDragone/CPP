//
//  Rosticceria.hpp
//  Food_delivery
//
//  Created by Rocco Carpi on 31/08/21.
//

#ifndef Rosticceria_hpp
#define Rosticceria_hpp

#include <stdio.h>
#include <vector>

#include "Motorini.hpp"
#include "food_delivery.hpp"

class Rosticceria : public foodDelivery
{
private:
    int prezzo_consegna;
    vector<motorini>parco_mezzi;
    
public:
    void set_costo_consegna(int c);
    int get_costo(){return prezzo_consegna;}
    
    Rosticceria(string nome_input, int x_inp, int y_inp, float prezzo_input, string cibo_input,int costo_cons_input, vector<motorini>mezzi_input);
};
#endif /* Rosticceria_hpp */
