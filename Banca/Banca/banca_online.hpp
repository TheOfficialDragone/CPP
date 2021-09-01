//
//  banca_online.hpp
//  Banca
//
//  Created by Rocco Carpi on 18/05/21.
//

#ifndef banca_online_hpp
#define banca_online_hpp

#include <stdio.h>
#include <iostream>
#include "banca.hpp"

using namespace std;

class banca_online : public banca
{
private:
    string indirizzo_web;
    
public:
    banca_online();
    banca_online(string nome,string indirizzo_web);
    
    string get_sito();
    void set_sito(string a);
    string localizza();
};
#endif /* banca_online_hpp */
