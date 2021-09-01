//
//  cura.hpp
//  Gioco_di_ruolo
//
//  Created by Rocco Carpi on 09/06/21.
//

#ifndef cura_hpp
#define cura_hpp

#include <stdio.h>
#include "oggetto.hpp"
#include "personaggio.hpp"
class Cura : public Oggetto
{
private:
    int cura;
    
public:
    void set_cura(int c);
    int get_cura();
    
    Cura();
    Cura(string n, int s, int c);
    
    void usa(Personaggio p);
};
#endif /* cura_hpp */
