//
//  Trappola.cpp
//  Labirinto
//
//  Created by Rocco Carpi on 26/07/21.
//

#include "Trappola.hpp"

Trappola:: Trappola(string nome_input,int valore_input) : Oggetto(nome_input, valore_input)
{
    
    probabilità_scatti = rand() %101;
}

string Trappola:: visualizza()
{
    string s = Oggetto :: visualizza();
    
    s += " probabilità scatti: " + to_string(probabilità_scatti);
    
    return s;
}

int Trappola :: attiva()
{
    int n_casuale = rand()%101;
    
    if (n_casuale < probabilità_scatti)
    {
       return -1; // ha perso
    }else
    {
        return 0;
    }

}

Trappola :: ~Trappola()
{
    
}
