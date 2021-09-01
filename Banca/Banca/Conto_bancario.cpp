//
//  Conto_bancario.cpp
//  Banca
//
//  Created by Rocco Carpi on 18/05/21.
//

#include "Conto_bancario.hpp"
using namespace std;
#include <iostream>



void conto_bancario:: deposita(int d)
{
    saldo_corrente = saldo_corrente + d;
    
}

void conto_bancario:: preleva(int c)
{
 
    if (c <= saldo_corrente)
    {
         saldo_corrente = saldo_corrente - c;
    }else
    {
        cout << "importo non prelevabile!";
    }
    
}
