//
//  food_delivery.hpp
//  Food_delivery
//
//  Created by Rocco Carpi on 31/08/21.
//

#ifndef food_delivery_hpp
#define food_delivery_hpp

#include <stdio.h>
#include <iostream>


using namespace std;

class foodDelivery
{
private:
    string nome;
    int posizione_x;
    int posizione_y;
    float prezzo;
    string cibo_tipico;
    
public:
    void set_nome(string n);
    string get_nome(){ return nome;}
    
    void set_x(int x);
    int get_x(){return posizione_x;}
    
    void set_y(int y);
    int get_y(){return posizione_y;}
    
    void set_prezzo(float prezzo);
    float get_prezzo(){return prezzo;}
    
    void set_cibo(string c);
    string get_cibo(){return cibo_tipico;}
    
    void ordina(int x , int y);
    
    foodDelivery(string nome_input, int x_inp, int y_inp, float prezzo_input, string cibo_input);
    
};

#endif /* food_delivery_hpp */
