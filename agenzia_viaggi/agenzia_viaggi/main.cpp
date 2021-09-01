//
//  main.cpp
//  agenzia_viaggi
//
//  Created by Rocco Carpi on 07/07/21.
//

#include <iostream>
#include <stdio.h>

#include "crociera.hpp"
#include "Tour.hpp"
#include "Persona.hpp"
#include "Guida.hpp"

using namespace::std;

int main(int argc, const char * argv[]) {
    
    guida g1(12, "luca", "pippo", 23, "m", "italiano");
    guida g2(13, "maria", "pluto", 21, "f", "francese");
    guida g3(14, "carmine", "paperino", 19, "m", "arabo");
    guida g4(15, "kio", "missile", 13, "m", "curdo");
    guida g5(16, "giovanni", "colo", 12, "m", "cinese");
    
    
    viaggiatore v1(1, "giovaani", "falcone", 21, "m", "it");
    viaggiatore v2(2, "luca", "falcone", 23, "m", "it");
    viaggiatore v3(3, "piero", "falcone", 22, "m", "it");
    viaggiatore v4(4, "vinci", "falcone", 24, "m", "it");
    viaggiatore v5(5, "mauro", "falcone", 26, "m", "it");
    
    vector<viaggiatore>lista_viaggiatori;
    
    lista_viaggiatori.push_back(v1);
    lista_viaggiatori.push_back(v2);
    lista_viaggiatori.push_back(v3);
    lista_viaggiatori.push_back(v4);
    lista_viaggiatori.push_back(v5);
    
    vector<guida>lista_guide;
    
    lista_guide.push_back(g1);
    lista_guide.push_back(g2);
    lista_guide.push_back(g3);
    lista_guide.push_back(g4);
    lista_guide.push_back(g5);
    
    tour t1(12, "myj", 345, "3/6", "4/6", 34, true, lista_guide, lista_viaggiatori);
    
    t1.prenota(3, v1);
    t1.cancella(3, v1);
    
    
  // cout << "Hello, World!\n";
    return 0;
}
