//
//  Montatore.cpp
//  Linea_assemblaggio
//
//  Created by Rocco Carpi on 11/07/21.
//

#include "Montatore.hpp"
#include <cstdlib>

montatore :: montatore(string nome_input, string cognome_input, int id_input) :operaio(nome_input, cognome_input, id_input)
{
    probabilita_pausa = rand()%101;
    probabilita_fallimento = rand()%101;
}

void operaio:: lavora(linea l)
{
    vector<pezzo> a = l.get_asce();
    
    if (a.empty())
    {
        cout << "errore lista vuota";
    }
    
    
    
    
    
    
}
   
