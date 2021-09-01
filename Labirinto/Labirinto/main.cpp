//
//  main.cpp
//  Labirinto
//
//  Created by Rocco Carpi on 26/07/21.
//


#include <iostream>
#include "Giocatore.hpp"
#include "Gioiello.hpp"



using namespace std;
int main(int argc, const char * argv[])
{
    vector<Oggetto>l1;
    
    Giocatore g1("pippo", "pluto", 34,l1);
   Gioiello a("anello", 12, 3);
    
    if (a.attiva() == 0)
    {
        g1.raccogli(a);
    }
    

    //cout << a.visualizza();
    return 0;
}
