//
//  conto_corrente.hpp
//  Banca
//
//  Created by Rocco Carpi on 18/05/21.
//

#ifndef conto_corrente_hpp
#define conto_corrente_hpp

#include <stdio.h>
#include "Conto_bancario.hpp"
class conto_corrente : public conto_bancario
{
public:
     float commisione = 0.50;
    void set_commissione(int p);
    void deposita(int d);
    void preleva(int c);  
public:
    conto_corrente(string intestatario_input,int numero_conto_input,float saldo_input);
};
#endif /* conto_corrente_hpp */
