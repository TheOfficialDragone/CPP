#include "Cliente.h"

void Cliente:: set_nome(string n)
{
    nome = n;
}
string Cliente:: get_nome()
{
    return nome;
}

void Cliente:: set_cognome(string c)
{
      cognome = c;
}
string Cliente:: get_cognome()
{
    return cognome;
}

void Cliente:: set_sesso(char s_input)
{
    sesso = s_input;
}
char Cliente:: get_sesso()
{
    return sesso;
}


 int Cliente:: compra(Negozio n, Vestito v, int quantita)
 {
     int prezzo_totale = 0;
     int in_magazzino = 0;
     vector <Vestito>::iterator it;
     
     //int cf = 0;
     for (it = n.get_magazzino().begin(); it != n.get_magazzino().end(); it++)
     {
         //cout << "conteggio for: " << cf << endl;
         if (v.get_nome() == it->get_nome())
         {
             ++in_magazzino;
         }
         
         //cf++;
     }
     
    // cout << in_magazzino << endl;
     
     if (quantita <= in_magazzino)
     {
         prezzo_totale = v.get_prezzo() * quantita;
         return prezzo_totale;
     }else
         return -1;

 }
 

 string Cliente:: visualizza()
 {
     string s = "";

     s+= "Nome: " + nome + " Cognome: " + cognome + " Sesso: " + sesso;

     return s;
 }

Cliente::Cliente(string nome_input, string cognome_input,char sesso_input)
{
    nome = nome_input;
    cognome = cognome_input;
    sesso = sesso_input;
}

Cliente::~Cliente()
{
    //dtor
}
