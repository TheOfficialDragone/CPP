//
//  mezzi_di_consegna.hpp
//  Food_delivery
//
//  Created by Rocco Carpi on 31/08/21.
//

#ifndef mezzi_di_consegna_hpp
#define mezzi_di_consegna_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class mezziDiconsegna
{
private:
    string modello;
    int disponibilita; // 1 disponibile 0 non disponibile
    
public:
    void set_modello(string a);
    string get_modello(){return modello;}
    
    void set_disponibilita(int a);
    int get_disponibilita(){return disponibilita;}
    
    mezziDiconsegna(string modello_input, int disp_input);
};
#endif /* mezzi_di_consegna_hpp */
