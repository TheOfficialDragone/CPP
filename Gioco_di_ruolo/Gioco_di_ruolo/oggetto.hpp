//
//  oggetto.hpp
//  Gioco_di_ruolo
//
//  Created by Rocco Carpi on 07/06/21.
//

#ifndef oggetto_hpp
#define oggetto_hpp

#include <stdio.h>
#include <iostream>
#include "personaggio.hpp"
using namespace std;

class Oggetto
{
private:
    string nome;
    int probabilita_successo;
    
public:
    void set_nome(string nome_input);
    string get_nome();
    
    void set_successo(int successo_input);
    int get_successo();
    Oggetto(string a , int s);
    Oggetto();
    
    void usa(Personaggio p);
};

#endif /* oggetto_hpp */
