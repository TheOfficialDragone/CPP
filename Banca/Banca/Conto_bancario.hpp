//
//  Conto_bancario.hpp
//  Banca
//
//  Created by Rocco Carpi on 18/05/21.
//

#ifndef Conto_bancario_hpp
#define Conto_bancario_hpp

#include <stdio.h>
using namespace std;
#include <stdio.h>
#include <iostream>

class conto_bancario
{
public:
    
    string intestatario;
    int numero_conto_bancario;
    float saldo_corrente;
    
    void deposita(int d);
    void preleva(int c);  
};


#endif /* Conto_bancario_hpp */
