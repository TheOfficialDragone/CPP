//
//  pergamena.cpp
//  Gioco_di_ruolo
//
//  Created by Rocco Carpi on 09/06/21.
//

#include "pergamena.hpp"
#include <stdio.h>
#include <math.h>

void Pergamena :: set_attacco(bool a)
{
    attacco = a; // se true allora magia di attacco else cura
}

bool Pergamena:: get_attacco()
{
    return attacco;
}

void Pergamena:: set_danno(int d)
{
    danno = d;          // quanti HP vengono sottratti o aggiunti a seocnda del bool
}

int Pergamena:: get_danno()
{
    return danno;
}

Pergamena :: Pergamena()
{
    
};

Pergamena :: Pergamena(bool a,int d,string n, int s) : Oggetto()
{
    set_nome(n);
    set_successo(s);
    set_attacco(a);
    set_danno(d);
}

void Pergamena:: usa(Personaggio p)
{
    int n_casuale = rand()%100+1;
    int danno_inflitto = get_danno();
    int salute_rimanente = p.getHp();
    int hp_rimanenti = 0;
    
    if (n_casuale < get_successo())
    {
        if (attacco == true)
        {
            hp_rimanenti = salute_rimanente - danno_inflitto;
            p.setHp(hp_rimanenti);
            cout<< " l'incantesimo era di attacco " << endl;
            cout<<" il personaggio: " + p.getNome() +  " ha HP " + to_string(hp_rimanenti)<< endl;
        }else
        {
            salute_rimanente = get_danno() + p.getHp();
            cout<< " l'incantesimo era di cura " << endl;
            cout<<" il personaggio: " + p.getNome() +  "ha HP " + to_string(hp_rimanenti)<< endl;
        }
    }
}
