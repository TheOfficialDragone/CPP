//
//  Conto_deposito.hpp
//  Banca
//
//  Created by Rocco Carpi on 18/05/21.
//

#ifndef Conto_deposito_hpp
#define Conto_deposito_hpp

#include <stdio.h>
#include <iostream>
#include "Conto_bancario.hpp"

using namespace std;

class conto_deposito : public conto_bancario
{
public:
     int operazioni_gratuite = 10;
     float commisione = 0.50;
    
    void set_commissione(int p);
    void set_operazioni_gratuite(int x);
    
    void deposita(int d);
    void preleva(int c);
public:
    conto_deposito(string intestatario_input,int numero_conto_input,float saldo_input);
};

#endif /* Conto_deposito_hpp */
