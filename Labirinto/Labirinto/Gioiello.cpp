//
//  Gioiello.cpp
//  Labirinto
//
//  Created by Rocco Carpi on 26/07/21.
//

#include "Gioiello.hpp"

string Gioiello:: visualizza()
{
    string s = Oggetto :: visualizza();
    
    s += " rarita: " + to_string(rarita) + " ";
    
    return s;
}

Gioiello :: Gioiello(string nome_input, int valore_input, int rarita_input) : Oggetto(nome_input, valore_input)
{

    rarita = rarita_input;
    
}

int Gioiello:: attiva()
{
    
    switch (rarita)
    {
        case 0:
            return valore = valore/2;
            break;
        case 1:
            return valore;
            break;
        case 2:
            return valore = valore*2;
            break;
        case 3:
            return valore = valore*4;
            break;
        case 4:
            return valore = valore*10;
            break;
            
        default:
            return 0;
    }
     
    Gioiello :: ~Gioiello();
   
    
}
