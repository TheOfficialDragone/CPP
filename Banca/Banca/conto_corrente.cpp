//
//  conto_corrente.cpp
//  Banca
//
//  Created by Rocco Carpi on 18/05/21.
//

#include "conto_corrente.hpp"
#include "stdio.h"
using namespace std;

conto_corrente:: conto_corrente(string intestatario_input,int numero_conto_input,float saldo_input)
{
    intestatario = intestatario_input;
    numero_conto_bancario = numero_conto_input;
    saldo_corrente = saldo_input;
}

void conto_corrente:: set_commissione(int p)
{
    commisione = p;
}

void conto_corrente:: deposita(int d)
{
    saldo_corrente = (saldo_corrente + d) - commisione;
    
}

void conto_corrente:: preleva(int c)
{
 
    if (c <= saldo_corrente)
    {
         saldo_corrente = (saldo_corrente - c) - commisione;
    }else
    {
        cout << "importo non prelevabile!";
    }
    
}
