//
//  Giocatore.cpp
//  Labirinto
//
//  Created by Rocco Carpi on 26/07/21.
//

#include "Giocatore.hpp"

void Giocatore:: set_nome(string n_input)
{
    nome = n_input;
}
string Giocatore:: get_nome()
{
    return nome;
}

void Giocatore:: set_cognome(string c_input)
{
    cognome = c_input;
}

string Giocatore:: get_cognome()
{
    return cognome;
}

void Giocatore:: set_soldi(int s_input)
{
    soldi_guadagnati = s_input;
}

int Giocatore:: get_soldi()
{
    return soldi_guadagnati;
}

void Giocatore:: popolaCodici(vector<int> codici)
{
    int i;
    int dimm_array = rand()%101;
    
    for (i = 0; i < dimm_array; ++i)
    {
        codici.push_back(rand()%101);
       // cout << "tutto ok";
    }
}

vector<Oggetto>Giocatore:: get_lista()
{
    return lista_oggetti;
}

string Giocatore:: visualizza()
{
    string s = " ";
    
    s = "nome: " +nome +" cognome: " +cognome + "  soldi: " +to_string(soldi_guadagnati);
    
    return s;
}

void Giocatore:: visualizza_codici()
{
    for (vector<int> :: iterator it = codici_apertura.begin() ; it != codici_apertura.end(); ++it)
    {
        cout << *it << endl;
        
    }
        
}

void Giocatore:: raccogli(Oggetto p)
{
    lista_oggetti.push_back(p);
    soldi_guadagnati += p.get_valore();
    
}

Giocatore:: Giocatore(string n_input, string c_input, int soldi_input, vector<Oggetto>oggetti_input)
{
    nome = n_input;
    cognome = c_input;
    soldi_guadagnati = soldi_input;
    popolaCodici(codici_apertura);
    lista_oggetti = oggetti_input;
    
}

Giocatore::~ Giocatore()
{
    
}
