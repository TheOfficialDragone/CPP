//
//  Oggetto.cpp
//  Labirinto
//
//  Created by Rocco Carpi on 26/07/21.
//

#include "Oggetto.hpp"

 string Oggetto :: visualizza()
{
    string s = "";
    
    s = "nome oggetto " + nome + "" + "valore oggetto " + to_string(valore) ;
    
    return s;
}

int Oggetto:: get_valore()
{
    return valore;
}

Oggetto :: Oggetto(string n_input, int valore_input)
{
    nome = n_input;
    valore = valore_input;
}
Oggetto :: ~ Oggetto()
{
    
}

int Oggetto :: attiva()
{
    return 0;
}
