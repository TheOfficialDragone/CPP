//
//  arma.cpp
//  Gioco_di_ruolo
//
//  Created by Rocco Carpi on 08/06/21.
//

#include "arma.hpp"

#include <math.h>
#include <ranlib.h>
using namespace::std;

void Arma:: set_Danno(int d)
{
    danno = d;
}

int Arma:: get_Danno()
{
    return danno;
}


Arma :: Arma(string a, int s,int d) : Oggetto()
{
    set_nome(a);
    set_successo(s);
    set_Danno(d);
}

void Arma:: usa(Personaggio p)
{
    int n_casuale = rand()%100+1;
    int danno_inflitto = get_Danno();
    int salute_rimanente = p.getHp();
    int hp_rimanenti = 0;
    
    if (n_casuale < get_successo())
    {
        hp_rimanenti = salute_rimanente - danno_inflitto;
    }else
    {
        cout << " arma inefficace " << endl;
       exit(0);
    }
    
    p.setHp(hp_rimanenti);
    
    cout<<" il personaggio: " + p.getNome() +  "ha HP " + to_string(hp_rimanenti)<< endl;
    
    if (hp_rimanenti <= 0)
    {
        cout<<" il personaggio: " + p.getNome() + " è morto" <<endl;
    }
}
