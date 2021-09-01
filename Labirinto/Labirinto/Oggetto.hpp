//
//  Oggetto.hpp
//  Labirinto
//
//  Created by Rocco Carpi on 26/07/21.
//

#ifndef Oggetto_hpp
#define Oggetto_hpp

#include <stdio.h>
#include <string>

using namespace std;
class Oggetto
{
protected:
    string nome;
    int valore;
    
public:
    Oggetto(string n_input, int valore_input);
   virtual string visualizza();
    int get_valore();
    virtual int attiva();
    ~Oggetto();
};
#endif /* Oggetto_hpp */
