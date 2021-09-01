//
//  Viaggio.hpp
//  agenzia_viaggi
//
//  Created by Rocco Carpi on 07/07/21.
//

#ifndef Viaggio_hpp
#define Viaggio_hpp
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include "Viaggiatore.hpp"
#include <iostream>

using namespace std;

class viaggio
{
private:
    int ID;
    string destinazione_finale;
    float costo;
    string data_inizio;
    string data_fine;
    int posti_disponibili;
    vector<viaggiatore>lista_viaggiatori;

// METODO PRENOTA E CANCELLA 
    
public:
    
    void set_ID(int id_input);
    int get_ID();
    
    void set_dest(string dest_input);
    string get_dest();
    
    void set_costo(int cost_input);
    float get_costo();
    
    void set_dataInizio(string inizio_input);
    string get_dataInizio();
    
    void set_dataFine(string fine_input);
    string get_dataFine();
    
    void set_posti(int posti_input);
    int get_posti();
    
   
    
    void prenota(int n , viaggiatore v);
    void cancella(int n, viaggiatore v);
    
    viaggio(int id_input,string dest_input,int cost_input,string inizio_input,string fine_input,int posti_input,vector<viaggiatore>lista_viaggiatori_input);
    
    
    
};
#endif /* Viaggio_hpp */
