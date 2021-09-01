//
//  Corso_di_Laurea.hpp
//  Università
//
//  Created by Rocco Carpi on 27/05/21.
//

#ifndef Corso_di_Laurea_hpp
#define Corso_di_Laurea_hpp

#include <iostream>
#include <stdio.h>

using namespace::std;

class corso
{
    
private:
    string nome_corso;
    int codice_corso;
    string settore_disciplinare;
public:
    corso(string a, int codice,string settore);
    corso();
    string get_nome();
};
#endif /* Corso_di_Laurea_hpp */
