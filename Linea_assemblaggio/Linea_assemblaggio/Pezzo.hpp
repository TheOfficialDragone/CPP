//
//  Pezzo.hpp
//  Linea_assemblaggio
//
//  Created by Rocco Carpi on 11/07/21.
//

#ifndef Pezzo_hpp
#define Pezzo_hpp

#include <stdio.h>

using namespace std;

class pezzo
{
private:
    bool difettoso;
    
public:
    void set_difettoso(bool a);
    bool get_difettoso();
    pezzo(bool a);
};


#endif /* Pezzo_hpp */
