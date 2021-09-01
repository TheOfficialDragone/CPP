//
//  personaggio.hpp
//  Gioco_di_ruolo
//
//  Created by Rocco Carpi on 07/06/21.
//

#ifndef personaggio_hpp
#define personaggio_hpp

#include <stdio.h>
#include <iostream>

using namespace::std;

class Personaggio
{
private:
    
    string nome;
    int forza;
    int intelligenza;
    int carisma;
    int hp;
    
public:
    
    void setNome(string nome_input);
    string getNome();
    
    void setForza(int forza_input);
    int getForza();
    
    void setItelligenza(int intelligenza_input);
    int getIntelligenza();
    
    void setCarisma(int carisma_input);
    int getCarisma();
    
    void setHp(int hp_input);
    int getHp();
    
    Personaggio();
    Personaggio(string n, int f, int i, int c,int h);
    
    string visualizza_personaggio();
    
};
#endif /* personaggio_hpp */
