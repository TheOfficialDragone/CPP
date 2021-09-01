//
//  arma.hpp
//  Gioco_di_ruolo
//
//  Created by Rocco Carpi on 08/06/21.
//

#ifndef arma_hpp
#define arma_hpp

#include <stdio.h>
#include "oggetto.hpp"

using namespace::std;

class Arma : public Oggetto
{
private:
    int danno;
    
public:
    void set_Danno(int d);
    int get_Danno();
    
    Arma(string a,int s,int d);
    
    void usa(Personaggio p);
};



#endif /* arma_hpp */
