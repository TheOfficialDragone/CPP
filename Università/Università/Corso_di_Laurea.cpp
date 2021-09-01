//
//  Corso_di_Laurea.cpp
//  Università
//
//  Created by Rocco Carpi on 27/05/21.
//

#include "Corso_di_Laurea.hpp"

using namespace::std;

corso:: corso()
{
    
}

corso::corso(string a, int codice,string settore)
{
    nome_corso = a;
    codice_corso = codice;
    settore_disciplinare = settore;
    
}

string corso:: get_nome()
{
    return nome_corso;
}
