//
//  main.cpp
//  Cifrario_Cesare_V2
//
//  Created by Rocco Carpi on 10/06/21.
//

#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

const int max_lunghezza_nome = 256;

void cifra_file(ifstream &in, ofstream &out, int key);
bool apri_file(fstream &s, bool out);

int main(int argc, const char * argv[])
{
        fstream instream,outstream;
        bool in, out;
        int k;
       
        // Si apre lo stream di input
        in  = apri_file(instream, false);
        out = apri_file(outstream, true);
       
        // Si controlla se entrambi gli stream sono stati aperti correttamente
        if (!in || !out )
        {
            return 0;
        }
         
        cout<<endl<<"digitare il valore della chiave: ";
        cin>>k;
       
        // Si chiama la funzione cifratore, con il valore di chiave inserito dall'utente
        cifra_file((ifstream &) instream, (ofstream &) outstream, k);
       
        // Si chiudono gli stream
        instream.close();
        outstream.close();
       
        return 0;
}
     
// FUNZIONI

/* Apre lo stream passato come primo parametro,
* il parametro out specifica se è uno stream
* di output.
*/
bool apri_file(fstream &s, bool out)
{
    char f_name[max_lunghezza_nome];
    s.close();
          
    cout<<endl<<"digitare il nome del file da aprire: ";
    cin.getline(f_name, max_lunghezza_nome);
       
    // Si controlla se è uno stream di output
    if (out)
    {
        s.open(f_name, ios::out);
    } else s.open(f_name, ios::in);
        
    // Si controlla se lo stream è stato aperto correttamente
    if (!s)
    {
        cout<<endl<<"ERRORE!: impossibile aprire il file: "<<f_name;
        return false;
    } else return true;
     
}
     
/* Cripta  (cifrario di Cesare) il contenuto dello stream di input
* (primo parametro) in quello di output (secondo parametro).
* Il parametro key specifica la chiave.
*/
void cifra_file(ifstream &in, ofstream &out, int key)
{
    char c;
    
    while (( c =in.get())!=EOF)
    {
        out.put(c+key);
    }
    
    cout << "cifratura avvenuta correttamente!"<<endl;
}
