//
//  main.cpp
//  Gioco_di_ruolo
//
//  Creato da Rocco Carpi il 07/06/21.
//

#include <iostream>
#include <stdio.h>

//personaggi
#include "guerriero.hpp"
#include "mago.hpp"
#include "chierico.hpp"

//oggetti
#include "pergamena.hpp"
#include "arma.hpp"
#include "cura.hpp"


using namespace::std;

int main(int argc, const char * argv[]) {
   
    Mago a("pippo");
    Guerriero b("pluto");
    Chierico c("paperino");
    
    Cura pozione("pozione", 10, 30); // nome, poss successo , HP di cura
    Arma spada("spada",50,20); // nome, poss successo , danno inflitto
    Pergamena papiro(true,20,"papiro",40);//pergamena di attacco , cura 20 hp,nome,poss successo
    
    spada.usa(b);
    pozione.usa(b);
    
    return 0;
}
