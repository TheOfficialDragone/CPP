//
//  Conto_deposito.cpp
//  Banca
//
//  Created by Rocco Carpi on 18/05/21.
//

#include "Conto_deposito.hpp"
#include "stdio.h"
using namespace std;

conto_deposito::conto_deposito(string intestatario_input,int numero_conto_input,float saldo_input)
{
    intestatario = intestatario_input;
    numero_conto_bancario = numero_conto_input;
    saldo_corrente = saldo_input;
}


void conto_deposito:: set_commissione(int p)
{
    commisione = p;
}

void conto_deposito:: set_operazioni_gratuite(int x)
{
    operazioni_gratuite = x;
}

void conto_deposito:: deposita(int d)
{
    saldo_corrente = (saldo_corrente + d) - commisione;
    
}

void conto_deposito:: preleva(int c)
{
 
    if (c < saldo_corrente)
    {
         saldo_corrente = (saldo_corrente - c) - commisione;
    }else
    {
        cout << "importo non prelevabile!";
    }
}
