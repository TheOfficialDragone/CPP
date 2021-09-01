//
//  Giocatore.hpp
//  Labirinto
//
//  Created by Rocco Carpi on 26/07/21.
//

#ifndef Giocatore_hpp
#define Giocatore_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "Oggetto.hpp"

using namespace std;
class Giocatore
{
private:
    string nome;
    string cognome;
    int soldi_guadagnati;
    vector<int>codici_apertura;
    vector<Oggetto>lista_oggetti;
    
    
public:
    void set_nome(string n_input);
    string get_nome();
    
    void set_cognome(string c_input);
    string get_cognome();
    
    void set_soldi(int s_input);
    int get_soldi();
    
    vector<Oggetto>get_lista();
    
    string visualizza();
    
    void visualizza_codici();
    void raccogli(Oggetto p);
    void popolaCodici(vector<int> codici);
    Giocatore(string n_input, string c_input, int soldi_input, vector<Oggetto>oggetti_input); // il vector lo crea in automatico!
    
    ~Giocatore();
};
#endif /* Giocatore_hpp */
