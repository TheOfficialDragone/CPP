//
//  cura.cpp
//  Gioco_di_ruolo
//
//  Created by Rocco Carpi on 09/06/21.
//

#include "cura.hpp"
#include "personaggio.hpp"
void Cura :: set_cura(int c)
{
    cura = c;
}

int Cura:: get_cura()
{
    return cura;
}

Cura:: Cura(string n, int s,int c) : Oggetto()
{
    set_nome(n);
    set_successo(s);
    set_cura(c);
}

Cura :: Cura()
{
    
};

void Cura:: usa(Personaggio p)
{
    int n_casuale = rand()%100+1;
    int salute_rimanente = 0;
  
    
    if (n_casuale < get_successo())
    {
        salute_rimanente = get_cura() + p.getHp();
        p.setHp(salute_rimanente);
        cout << " ora il personaggio ha: " + to_string(salute_rimanente)  + " HP di salute " << endl;
    }else
    {
        cout << " l'incantesimo non ha funzionato " << endl;
    }
    

}
