//
//  Gioiello.hpp
//  Labirinto
//
//  Created by Rocco Carpi on 26/07/21.
//

#ifndef Gioiello_hpp
#define Gioiello_hpp

#include <stdio.h>
#include "Oggetto.hpp"
using namespace std;

class Gioiello : public Oggetto
{
private:
    int rarita;
    
public:
    void set_rarita(int r_input);
    int get_rarita();
    string visualizza();
    int attiva();
    
    Gioiello(string nome_input, int valore_input, int rarita_input);
    ~Gioiello();
};

#endif /* Gioiello_hpp */
