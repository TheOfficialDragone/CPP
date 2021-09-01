//
//  pergamena.hpp
//  Gioco_di_ruolo
//
//  Created by Rocco Carpi on 09/06/21.
//

#ifndef pergamena_hpp
#define pergamena_hpp
#include "oggetto.hpp"
#include "personaggio.hpp"
#include <stdio.h>

using namespace::std;
class Pergamena :  public Oggetto
{
private:
    bool attacco; // se true allora magia di attacco else cura 
    int danno;
public:
    void set_attacco(bool a);
    bool get_attacco();
    
    void set_danno(int d);
    int get_danno();
    
    Pergamena(bool a, int d , string n, int s);
    Pergamena();
    void usa(Personaggio p);
};
#endif /* pergamena_hpp */
