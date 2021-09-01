//
//  Trappola.hpp
//  Labirinto
//
//  Created by Rocco Carpi on 26/07/21.
//

#ifndef Trappola_hpp
#define Trappola_hpp

#include <stdio.h>
#include <string>
#include "Oggetto.hpp"
#include "Giocatore.hpp"


using namespace std;

class Trappola : public Oggetto
{
private:
    int probabilità_scatti;
    
public:
    Trappola(string nome_input,int valore_input);
    int attiva();
    string visualizza();
    ~Trappola();
};

#endif /* Trappola_hpp */
