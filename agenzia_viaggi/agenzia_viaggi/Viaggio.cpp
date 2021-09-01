//
//  Viaggio.cpp
//  agenzia_viaggi
//
//  Created by Rocco Carpi on 07/07/21.
//

#include "Viaggio.hpp"
#include <string>

using namespace::std;

void viaggio::set_ID(int id_input)
{
    ID = id_input;
}

int viaggio:: get_ID()
{
    return ID;
}

void viaggio :: set_dest(string dest_input)
{
    destinazione_finale = dest_input;
}
string viaggio:: get_dest()
{
    return destinazione_finale;
}

void viaggio:: set_costo(int cost_input)
{
    costo = cost_input;
}
float viaggio:: get_costo()
{
    return costo;
}

void viaggio:: set_dataInizio(string inizio_input)
{
    data_inizio = inizio_input;
}
string viaggio:: get_dataInizio()
{
    return data_inizio;
}

void viaggio :: set_dataFine(string fine_input)
{
    data_fine = fine_input;
}
string viaggio:: get_dataFine()
{
    return data_fine;
}

void viaggio :: set_posti(int posti_input)
{
    posti_disponibili = posti_input;
}
int viaggio:: get_posti()
{
    return posti_disponibili;
}



void viaggio::prenota(int n, viaggiatore v)
{
    int posti_rimanenti = get_posti();
    
    if (n > get_posti())
    {
        cout << "viaggio al completo" << endl;
        exit(9);// viaggio al completo
    }else
    {
        posti_rimanenti = posti_rimanenti - n;
        set_posti(posti_rimanenti);
        lista_viaggiatori.push_back(v);
        cout << "viaggio prenotato" << endl;
        string s = "posti rimanenti ";
        cout << s + to_string(get_posti()) << endl;
       
    }
}

void viaggio:: cancella(int n, viaggiatore v)
{
    int posti_rimanenti = get_posti();
    for (auto a : lista_viaggiatori)
    {
        if (a.get_nome() == v.get_nome())
        {
            lista_viaggiatori.pop_back();
            posti_rimanenti = posti_rimanenti + n;
            set_posti(posti_rimanenti);
            
            cout<< "eliminazione avvenuta correttamnete!"<< endl;
            string s = "posti rimanenti ";
            cout<< s + to_string(get_posti())<< endl;
            break;
        } else
        {
            cout << "problema nella eliminazione!" << endl;
        }
    }
}

viaggio :: viaggio(int id_input,string dest_input,int cost_input,string inizio_input,string fine_input,int posti_input,vector<viaggiatore>lista_viaggiatori_input)
{
    set_ID(id_input);
    set_dest(dest_input);
    set_costo(cost_input);
    set_dataInizio(inizio_input);
    set_dataFine(fine_input);
    set_posti(posti_input);
    lista_viaggiatori = lista_viaggiatori_input;

}


